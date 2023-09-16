/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_openFile;
    QAction *action_openDirectory;
    QAction *action_saveFile;
    QAction *actionCreate_File;
    QWidget *centralwidget;
    QListWidget *listWidget_fileShowcase;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_sectionName;
    QPushButton *pushButton_createSection;
    QPushButton *pushButton_deleteSection;
    QTreeWidget *treeWidget_keyValue;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox_addType;
    QLineEdit *lineEdit_keyAdditing;
    QLineEdit *lineEdit_valueAdditing;
    QPushButton *pushButton_addKeyValue;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBox_deleteKey;
    QPushButton *pushButton_deleteKey;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        action_openFile = new QAction(MainWindow);
        action_openFile->setObjectName(QString::fromUtf8("action_openFile"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/Icons/icons8-opened-folder-100 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        action_openFile->setIcon(icon);
        action_openDirectory = new QAction(MainWindow);
        action_openDirectory->setObjectName(QString::fromUtf8("action_openDirectory"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/Icons/icons8-active-directory-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_openDirectory->setIcon(icon1);
        action_saveFile = new QAction(MainWindow);
        action_saveFile->setObjectName(QString::fromUtf8("action_saveFile"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/Icons/icons8-save-file-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_saveFile->setIcon(icon2);
        actionCreate_File = new QAction(MainWindow);
        actionCreate_File->setObjectName(QString::fromUtf8("actionCreate_File"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/Icons/icons8-add-file-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_File->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget_fileShowcase = new QListWidget(centralwidget);
        listWidget_fileShowcase->setObjectName(QString::fromUtf8("listWidget_fileShowcase"));
        listWidget_fileShowcase->setGeometry(QRect(20, 10, 256, 471));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 280, 401, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox_sectionName = new QComboBox(layoutWidget);
        comboBox_sectionName->setObjectName(QString::fromUtf8("comboBox_sectionName"));

        horizontalLayout->addWidget(comboBox_sectionName);

        pushButton_createSection = new QPushButton(layoutWidget);
        pushButton_createSection->setObjectName(QString::fromUtf8("pushButton_createSection"));
        pushButton_createSection->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Icons/icons8-approved-64.png);"));

        horizontalLayout->addWidget(pushButton_createSection);

        pushButton_deleteSection = new QPushButton(layoutWidget);
        pushButton_deleteSection->setObjectName(QString::fromUtf8("pushButton_deleteSection"));
        pushButton_deleteSection->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/Images/Icons/icons8-cross-mark-button-48.png);"));

        horizontalLayout->addWidget(pushButton_deleteSection);

        treeWidget_keyValue = new QTreeWidget(centralwidget);
        treeWidget_keyValue->setObjectName(QString::fromUtf8("treeWidget_keyValue"));
        treeWidget_keyValue->setGeometry(QRect(310, 30, 451, 241));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(340, 320, 441, 181));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 171, 111));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox_addType = new QComboBox(layoutWidget2);
        comboBox_addType->addItem(QString());
        comboBox_addType->addItem(QString());
        comboBox_addType->addItem(QString());
        comboBox_addType->addItem(QString());
        comboBox_addType->setObjectName(QString::fromUtf8("comboBox_addType"));

        verticalLayout_2->addWidget(comboBox_addType);

        lineEdit_keyAdditing = new QLineEdit(layoutWidget2);
        lineEdit_keyAdditing->setObjectName(QString::fromUtf8("lineEdit_keyAdditing"));

        verticalLayout_2->addWidget(lineEdit_keyAdditing);

        lineEdit_valueAdditing = new QLineEdit(layoutWidget2);
        lineEdit_valueAdditing->setObjectName(QString::fromUtf8("lineEdit_valueAdditing"));

        verticalLayout_2->addWidget(lineEdit_valueAdditing);


        horizontalLayout_2->addLayout(verticalLayout_2);

        pushButton_addKeyValue = new QPushButton(groupBox);
        pushButton_addKeyValue->setObjectName(QString::fromUtf8("pushButton_addKeyValue"));
        pushButton_addKeyValue->setGeometry(QRect(20, 150, 80, 25));

        horizontalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 151, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        comboBox_deleteKey = new QComboBox(layoutWidget3);
        comboBox_deleteKey->setObjectName(QString::fromUtf8("comboBox_deleteKey"));

        horizontalLayout_3->addWidget(comboBox_deleteKey);

        pushButton_deleteKey = new QPushButton(groupBox_2);
        pushButton_deleteKey->setObjectName(QString::fromUtf8("pushButton_deleteKey"));
        pushButton_deleteKey->setGeometry(QRect(20, 150, 80, 25));

        horizontalLayout_4->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setEnabled(true);
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(action_openFile);
        menuFile->addSeparator();
        menuFile->addAction(action_openDirectory);
        menuFile->addSeparator();
        menuFile->addAction(action_saveFile);
        toolBar->addAction(action_openFile);
        toolBar->addAction(action_openDirectory);
        toolBar->addAction(action_saveFile);
        toolBar->addAction(actionCreate_File);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_openFile->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        action_openDirectory->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\264\320\270\321\200\321\200\320\265\320\272\321\202\320\276\321\200\320\270\321\216", nullptr));
        action_saveFile->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        actionCreate_File->setText(QApplication::translate("MainWindow", "Create File", nullptr));
        label->setText(QApplication::translate("MainWindow", "Section", nullptr));
        pushButton_createSection->setText(QString());
        pushButton_deleteSection->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_keyValue->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Key", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Additing", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Type", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Key", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Value", nullptr));
        comboBox_addType->setItemText(0, QApplication::translate("MainWindow", "Int", nullptr));
        comboBox_addType->setItemText(1, QApplication::translate("MainWindow", "Double", nullptr));
        comboBox_addType->setItemText(2, QApplication::translate("MainWindow", "Bool", nullptr));
        comboBox_addType->setItemText(3, QApplication::translate("MainWindow", "String", nullptr));

        pushButton_addKeyValue->setText(QApplication::translate("MainWindow", "Add", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Deleting", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Key", nullptr));
        pushButton_deleteKey->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
