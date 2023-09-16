#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <fstream>
#include <utility>
#include "IniFile.h"
std::string to_lowerCase(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });
    return str;
}

bool verifyBool(std::string str) {
    for (auto& trueValue: trueValues) {
        if (to_lowerCase(str) == trueValue) {
            return true;
        }
    }
    return false;
}

std::string stripString(std::string input) {

    int start = 0;
    while (isspace(input[start])) {
        start++;
    }

    int end = input.size() - 1;
    while (isspace(input[end])) {
        end--;
    }

    return input.substr(start, end - start + 1);
}


std::pair<std::string, std::string> keyValue_parse(std::string string) {
    std::string key;
    std::string value;
    int i;
    int counter = 0;
    for (i = 0; i < string.size(); i++) {
        if (string[i] == '=') {
            counter++;
        } else if (counter == 0) {
            key += string[i];
        } else if (counter == 1) {
            value += string[i];
        } else {
            return std::make_pair("", "");
        }
    }
    if (counter != 1) {
        return std::make_pair("", "");
    }
    return std::make_pair(stripString(key), stripString(value));

}


std::string sectionName_parse(std::string str) {
    //  [[iejidj]]  ->  [iejidj]

    int i;
    std::string name;

    int counterOpn = 0;
    int counterCls = 0;
    for (i = 0; i < str.size(); i++) {
        if (str[i] == '[') {
            counterOpn++;
        } else if (str[i] == ']') {
            counterCls++;
        } else if (str[i] == '=') {
            return "";
        } else if (counterOpn == 1 and counterCls == 0) {
            name += str[i];
        }
    }

    if (counterOpn != 1 or counterCls != 1) {
        return "";
    }
    return
            stripString(name);

}


IniFile::IniFile(const std::string &path) : filePath(path) {

    std::ifstream file(filePath);
    if (!file.is_open()) {
        return;
    }

    std::string string;
    std::string curentSectionName;
    std::pair<std::string, std::string> key_value;
    std::string tmp;


    while (std::getline(file, string)) {
        for (int i = 0; i < string.size(); i++) {
            if (string[i] == ';') {
                string = string.substr(0, i);
                break;
            }
        }
        string = stripString(string);
        if (string.empty()) {
            continue;
        }


        if (string[0] == '[') {
            tmp = sectionName_parse(string);
            if (tmp.empty()) {
                continue;
            }
            curentSectionName = tmp;
            data[curentSectionName];
        } else {
            key_value = keyValue_parse(string);
            if (key_value.first.empty() or key_value.second.empty()) {
                continue;
            }
            data[curentSectionName][key_value.first] = key_value.second;
        }
    }

}

void IniFile::save() {
    std::ofstream File(filePath);
    for (auto &section: this->data) {
        File << "[" + section.first + "]\n";
        for (auto &keyValue: section.second) {
            File << keyValue.first << "=" << keyValue.second + "\n";
        }
    }
}

IniFile::~IniFile() {
    save();
}


bool IniFile::isSectionExist(const std::string &section) {
    return data.find(section) != data.end();
}


bool IniFile::isKeysExist(const std::string &section, const std::string &key) {
    if (!isSectionExist(section)) {
        return false;
    }
    KeysMap &keys = data[section];
    return keys.find(key) != keys.end();

}

int IniFile::readInt(const std::string &section, const std::string &key, int def) {
    if (!isSectionExist(section) or !isKeysExist(section, key)) {
        return def;
    }
    std::string value = data[section][key];
    try {
        return std::stoi(value);
    } catch (std::invalid_argument &) {
        return def;
    } catch (std::out_of_range &) {
        return def;
    }
}


double IniFile::readDouble(const std::string &section, const std::string &key, double def) {
    if (!isSectionExist(section) or !isKeysExist(section, key)) {
        return def;
    }
    std::string value = data[section][key];
    return std::stod(value);

}


std::string IniFile::readString(const std::string &section, const std::string &key, const std::string &def) {
    if (!isSectionExist(section) or !isKeysExist(section, key)) {
        return def;
    }

    return data[section][key];
}

bool IniFile::readBool(const std::string &section, const std::string &key, bool def) {
    if (!isSectionExist(section) or !isKeysExist(section, key)) {
        return def;
    }
    std::string value = data[section][key];
    std::transform(value.begin(), value.end(), value.begin(), ::tolower);
    if (std::count(trueValues.begin(), trueValues.end(), value)>0) {
        return true;
    }
    return false;
}

void IniFile::writeInt(const std::string &section, const std::string &key, int value) {
    if (!isSectionExist(section)) {
        data[section] = KeysMap();
    }
    data[section][key] = std::to_string(value);
}

void IniFile::writeDouble(const std::string &section, const std::string &key, double value) {
    if (!isSectionExist(section)) {
        data[section] = KeysMap();
    }
    data[section][key] = std::to_string(value);
}

void IniFile::writeString(const std::string &section, const std::string &key, const std::string &value) {
    if (!isSectionExist(section)) {
        data[section] = KeysMap();
    }
    data[section][key] = value;
}

size_t IniFile::getSectionsCount() {
    return data.size();
}

size_t IniFile::getKeysCount(const std::string &section) {
    return data[section].size();
}


bool IniFile::deleteKey(const std::string &section, const std::string &key) {
    if (!this->isKeysExist(section, key)) {
        return false;
    }

    this->data[section].erase(key);
    return true;
}

bool IniFile::deleteSection(const std::string &section) {
    if (!this->isSectionExist(section)) {
        return false;
    }

    this->data.erase(section);
    return true;
}

SectionsMap IniFile::getSections() const {
    return data;
}


void IniFile::writeBool(const std::string &section, const std::string &key, bool value) {
    if (!isSectionExist(section)) {
        data[section] = KeysMap();
    }
    data[section][key] = std::to_string(value);
}
