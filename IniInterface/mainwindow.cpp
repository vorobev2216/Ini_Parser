#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    validatorInt = new QIntValidator(this);
    validatorDouble = new QDoubleValidator(this);

    validatorBool = new QRegularExpressionValidator(QRegularExpression("^[1,0,true,false,True,False]"),this);
}


MainWindow::~MainWindow() {
    delete ui;
}

int count = 0;

void MainWindow::on_action_openFile_triggered()//owojo
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    "Open File",
                                                    "D://",
                                                    "Ini Files (*.ini)");
    ui->listWidget_fileShowcase->addItem(fileName);
    count = ui->listWidget_fileShowcase->count();
    QString nn = QString::number(count);
    QString statusStr = "Open files: ";
    ui->statusbar->showMessage(statusStr+nn);


}

void MainWindow::on_actionCreate_File_triggered() {
    bool ok;
    QString name_file = QInputDialog::getText(this, tr("Название файла"), tr("Введите название файла:"),
                                              QLineEdit::Normal, QDir::home().dirName(), &ok);

    if (ok && !name_file.isEmpty()) {
        QFile file(name_file);
        ui->listWidget_fileShowcase->addItem(name_file);
    } else {
        QMessageBox::information(this, "Ошибка", "Вы не ввели название файла!", QMessageBox::Ok);
    }
    count = ui->listWidget_fileShowcase->count();
    QString nn = QString::number(count);
    QString statusStr = "Open files: ";
    ui->statusbar->showMessage(statusStr+nn);
}


void MainWindow::on_action_openDirectory_triggered()//ojdwojdojw
{
    QString dirsName = QFileDialog::getExistingDirectory(this,
                                                         "Open Directory",
                                                         "D://"
    );
    QDir dir(dirsName);
    dir.setNameFilters(QStringList() << "*.ini");
    QFileInfoList list = dir.entryInfoList();

    for (int i = 0; i < list.count(); i++) {
        QFileInfo fileInfo = list.at(i);
        ui->listWidget_fileShowcase->addItem(fileInfo.absoluteFilePath());

    }
    count = ui->listWidget_fileShowcase->count();
    QString nn = QString::number(count);
    QString statusStr = "Open files: ";
    ui->statusbar->showMessage(statusStr+nn);
}


void MainWindow::on_comboBox_addType_currentIndexChanged(int index) {



    switch (index) {
        case 0: {
            ui->lineEdit_valueAdditing->clear();
            ui->lineEdit_valueAdditing->setValidator(validatorInt);

            break;
        }
        case 1: {
            ui->lineEdit_valueAdditing->clear();
            ui->lineEdit_valueAdditing->setValidator(validatorDouble);
            break;
        }
        case 2: {
            ui->lineEdit_valueAdditing->clear();
            ui->lineEdit_valueAdditing->setValidator(validatorBool);

            break;
        }
        case 3: {
            ui->lineEdit_valueAdditing->clear();

            ui->lineEdit_valueAdditing->setValidator(0);


        }
    }

}


void MainWindow::on_pushButton_addKeyValue_clicked() {
    QString namefile = (ui->listWidget_fileShowcase->selectedItems().last())->text();
    auto i = holdingMap.find(namefile.toStdString());
    QString name_key = ui->lineEdit_keyAdditing->text();
    QString value = ui->lineEdit_valueAdditing->text();
    KeysMap k;
    if (!name_key.isEmpty() && !value.isEmpty() && !ui->comboBox_sectionName->currentText().isEmpty()) {
        switch (ui->comboBox_addType->currentIndex()) {
            case 0:
                i->second.writeInt((ui->comboBox_sectionName->currentText()).toStdString(), name_key.toStdString(),
                                   value.toInt());
                break;
            case 1:
                i->second.writeDouble((ui->comboBox_sectionName->currentText()).toStdString(), name_key.toStdString(),
                                      value.toDouble());
                break;
            case 2:
                if (value.toStdString() == trueValues[0] || value.toStdString() == trueValues[1] ||
                    value.toStdString() == trueValues[2] || value.toStdString() == trueValues[3]) {
                    i->second.writeBool((ui->comboBox_sectionName->currentText()).toStdString(), name_key.toStdString(),
                                        1);
                } else {
                    i->second.writeBool((ui->comboBox_sectionName->currentText()).toStdString(), name_key.toStdString(),
                                        0);
                }
                break;
            case 3:
                i->second.writeString((ui->comboBox_sectionName->currentText()).toStdString(), name_key.toStdString(),
                                      value.toStdString());
                break;
        }
        ui->treeWidget_keyValue->clear();
        ui->comboBox_sectionName->clear();
        ui->comboBox_deleteKey->clear();

        SectionsMap sections = i->second.getSections();

        for (auto it = sections.begin(); it != sections.end(); it++) {
            ui->comboBox_sectionName->addItem(QString::fromStdString(it->first));
            QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget_keyValue);
            itm->setText(0, QString::fromStdString(it->first));
            QList < QTreeWidgetItem * > child_list;
            for (auto jt = it->second.begin(); jt != it->second.end(); jt++) {
                QTreeWidgetItem *child = new QTreeWidgetItem(itm);
                child->setText(0, QString::fromStdString((jt->first)));
                child->setText(1, QString::fromStdString((jt->second)));
                child_list.append(child);
            }
            itm->addChildren(child_list);
            ui->treeWidget_keyValue->addTopLevelItem(itm);
            ui->treeWidget_keyValue->expandAll();
        }


    }
}


void MainWindow::on_listWidget_fileShowcase_clicked(const QModelIndex &index)// jwhoeihofwhofh
{

    ui->treeWidget_keyValue->clear();
    QString str = (ui->listWidget_fileShowcase->selectedItems().last())->text();
    std::map<std::string, IniFile>::iterator i;
    SectionsMap sections;
    if (holdingMap.find(str.toStdString()) == holdingMap.end()) {
        IniFile file(str.toStdString());
        std::pair<std::string, IniFile> pair = std::make_pair(str.toStdString(), file);
        holdingMap.insert(pair);

        sections = file.getSections();
    } else {
        i = holdingMap.find(str.toStdString());

        sections = i->second.getSections();
    }
    for (auto it = sections.begin(); it != sections.end(); it++) {
        ui->comboBox_sectionName->addItem(QString::fromStdString(it->first));
        QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget_keyValue);
        itm->setText(0, QString::fromStdString(it->first));
        QList < QTreeWidgetItem * > child_list;
        for (auto jt = it->second.begin(); jt != it->second.end(); jt++) {
            QTreeWidgetItem *child = new QTreeWidgetItem(itm);
            child->setText(0, QString::fromStdString((jt->first)));
            child->setText(1, QString::fromStdString((jt->second)));
            child_list.append(child);
        }

        itm->addChildren(child_list);
        ui->treeWidget_keyValue->addTopLevelItem(itm);
        ui->treeWidget_keyValue->expandAll();
    }



}


void MainWindow::on_action_saveFile_triggered() {
    QList < QListWidgetItem * > l = ui->listWidget_fileShowcase->selectedItems();
    if (l.isEmpty()) {
        QMessageBox::information(this, "Ошибка", "Вы не выбрали файл!", QMessageBox::Ok);

        return;
    }
    QString filename = l.last()->text();
    auto i = holdingMap.find(filename.toStdString());
    delete ui->listWidget_fileShowcase->takeItem(ui->listWidget_fileShowcase->row(l.last()));
    delete l.last();
    i->second.save();
    ui->treeWidget_keyValue->clear();

    count--;
    QString statusStr = "Open files: ";
    QString statusStr2 = QString::number(ui->listWidget_fileShowcase->count());
    ui->statusbar->showMessage(statusStr + statusStr2);
}


void MainWindow::on_pushButton_deleteSection_clicked() {
    QTreeWidgetItem *section_for_delete = ui->treeWidget_keyValue->currentItem();
    delete section_for_delete;
}


void MainWindow::on_pushButton_createSection_clicked() {
    QString test = QInputDialog::getText(this, tr("Add Section"), tr("Input:"));
    QTreeWidgetItem *addSectionItem = new QTreeWidgetItem(ui->treeWidget_keyValue);
    addSectionItem->setText(0, test);
    ui->treeWidget_keyValue->addTopLevelItem(addSectionItem);
    QString newSectionName = addSectionItem->text(0);
    ui->comboBox_sectionName->addItem(newSectionName);


}


void MainWindow::on_pushButton_deleteKey_clicked() {


    QString namefile = (ui->listWidget_fileShowcase->selectedItems().last())->text();
    auto i = holdingMap.find(namefile.toStdString());
    QString name_key = ui->comboBox_deleteKey->currentText();
    i->second.deleteKey((ui->comboBox_sectionName->currentText()).toStdString(), name_key.toStdString());
    ui->treeWidget_keyValue->clear();

    SectionsMap sections = i->second.getSections();
    for (auto it = sections.begin(); it != sections.end(); it++) {
        ui->comboBox_sectionName->addItem(QString::fromStdString(it->first));
        QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget_keyValue);
        itm->setText(0, QString::fromStdString(it->first));
        QList < QTreeWidgetItem * > child_list;
        for (auto jt = it->second.begin(); jt != it->second.end(); jt++) {
            QTreeWidgetItem *child = new QTreeWidgetItem(itm);
            child->setText(0, QString::fromStdString((jt->first)));
            child->setText(1, QString::fromStdString((jt->second)));
            child_list.append(child);
        }

        itm->addChildren(child_list);
        ui->treeWidget_keyValue->addTopLevelItem(itm);
        ui->treeWidget_keyValue->expandAll();
    }
}


void MainWindow::on_comboBox_sectionName_currentIndexChanged(int index) {
    QString sectionName = ui->comboBox_sectionName->currentText();
    for (int i = 0; i < ui->treeWidget_keyValue->topLevelItemCount(); i++) {
        QTreeWidgetItem *parentItem = ui->treeWidget_keyValue->topLevelItem(i);
        if (parentItem->text(0) == sectionName) {
            for (int j = 0; j < parentItem->childCount(); j++) {
                QTreeWidgetItem *childItem = parentItem->child(j);
                ui->comboBox_deleteKey->addItem(childItem->text(0));
            }
            break;
        }
    }
}


void MainWindow::on_comboBox_sectionName_currentTextChanged(const QString &arg1) {
    ui->comboBox_deleteKey->clear();

    QString namefile = (ui->listWidget_fileShowcase->selectedItems().last())->text();
    auto i = holdingMap.find(namefile.toStdString());
    SectionsMap sections = i->second.getSections();

    for (auto it = sections.begin(); it != sections.end(); it++) {
        if (it->first == arg1.toStdString()) {
            for (auto jt = it->second.begin(); jt != it->second.end(); jt++) {
                ui->comboBox_deleteKey->addItem(QString::fromStdString((jt->first)));
            }
        }
    }
}


void MainWindow::on_treeWidget_keyValue_itemSelectionChanged() {
    QString namefile = (ui->listWidget_fileShowcase->selectedItems().last())->text();
    auto i = holdingMap.find(namefile.toStdString());
    QTreeWidgetItem *l = ui->treeWidget_keyValue->currentItem();
    if (l->text(1).isEmpty()) {
        ui->comboBox_sectionName->setCurrentText(l->text(0));
    } else {
        ui->comboBox_sectionName->setCurrentText(l->parent()->text(0));
        ui->comboBox_deleteKey->setCurrentText(l->text(0));
    }
}

