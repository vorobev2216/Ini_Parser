#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QFileDialog>
#include <QInputDialog>
#include <QDebug>
#include "IniFile.h"
#include <QInputDialog>
#include <QIntValidator>
#include <QDoubleValidator>
#include <QValidator>
#include <map>
#include <QMessageBox>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_action_openFile_triggered();

    void on_action_openDirectory_triggered();


    void on_comboBox_addType_currentIndexChanged(int index);

    void on_pushButton_addKeyValue_clicked();



    void on_listWidget_fileShowcase_clicked(const QModelIndex &index);


    void on_action_saveFile_triggered();





    void on_pushButton_deleteSection_clicked();

    void on_pushButton_createSection_clicked();



    void on_pushButton_deleteKey_clicked();

    void on_comboBox_sectionName_currentTextChanged(const QString &arg1);

    void on_comboBox_sectionName_currentIndexChanged(int index);

    void on_actionCreate_File_triggered();

    void on_treeWidget_keyValue_itemSelectionChanged();

private:
    Ui::MainWindow *ui;
    QValidator* validatorInt;
    QValidator* validatorDouble;
//    QRegularExpression bl("[1,0,true,false,True,False]");
    QValidator *validatorBool;
//    Qmap<std::string,IniFile>;
    std::map<std::string, IniFile> holdingMap;
};
#endif // MAINWINDOW_H
