/********************************************************************************
** Form generated from reading UI file 'phonebook.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEBOOK_H
#define UI_PHONEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhoneBook
{
public:
    QAction *actionImport;
    QAction *actionAbout_us;
    QAction *actionExport;
    QWidget *centralWidget;
    QTableWidget *tablePhones;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *txtSearch;
    QPushButton *btnAdd;
    QPushButton *btnDel;
    QPushButton *btnDelAll;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuPhonebook;

    void setupUi(QMainWindow *PhoneBook)
    {
        if (PhoneBook->objectName().isEmpty())
            PhoneBook->setObjectName(QStringLiteral("PhoneBook"));
        PhoneBook->resize(740, 680);
        PhoneBook->setMinimumSize(QSize(611, 540));
        PhoneBook->setMaximumSize(QSize(1000, 1000));
        QFont font;
        font.setItalic(false);
        PhoneBook->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/book.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PhoneBook->setWindowIcon(icon);
        actionImport = new QAction(PhoneBook);
        actionImport->setObjectName(QStringLiteral("actionImport"));
        actionAbout_us = new QAction(PhoneBook);
        actionAbout_us->setObjectName(QStringLiteral("actionAbout_us"));
        actionExport = new QAction(PhoneBook);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        centralWidget = new QWidget(PhoneBook);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tablePhones = new QTableWidget(centralWidget);
        if (tablePhones->columnCount() < 4)
            tablePhones->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablePhones->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablePhones->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablePhones->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablePhones->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tablePhones->setObjectName(QStringLiteral("tablePhones"));
        tablePhones->setGeometry(QRect(20, 10, 571, 451));
        tablePhones->setDragEnabled(true);
        tablePhones->setSortingEnabled(false);
        tablePhones->setCornerButtonEnabled(false);
        tablePhones->setRowCount(0);
        tablePhones->setColumnCount(4);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 470, 571, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txtSearch = new QTextEdit(layoutWidget);
        txtSearch->setObjectName(QStringLiteral("txtSearch"));

        horizontalLayout->addWidget(txtSearch);

        btnAdd = new QPushButton(layoutWidget);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        horizontalLayout->addWidget(btnAdd);

        btnDel = new QPushButton(layoutWidget);
        btnDel->setObjectName(QStringLiteral("btnDel"));
        btnDel->setEnabled(true);

        horizontalLayout->addWidget(btnDel);

        btnDelAll = new QPushButton(layoutWidget);
        btnDelAll->setObjectName(QStringLiteral("btnDelAll"));

        horizontalLayout->addWidget(btnDelAll);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 30, 121, 151));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 200, 131, 31));
        PhoneBook->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PhoneBook);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 740, 21));
        menuPhonebook = new QMenu(menuBar);
        menuPhonebook->setObjectName(QStringLiteral("menuPhonebook"));
        PhoneBook->setMenuBar(menuBar);

        menuBar->addAction(menuPhonebook->menuAction());
        menuPhonebook->addAction(actionExport);
        menuPhonebook->addAction(actionImport);
        menuPhonebook->addSeparator();
        menuPhonebook->addAction(actionAbout_us);

        retranslateUi(PhoneBook);

        QMetaObject::connectSlotsByName(PhoneBook);
    } // setupUi

    void retranslateUi(QMainWindow *PhoneBook)
    {
        PhoneBook->setWindowTitle(QApplication::translate("PhoneBook", "PhoneBook", Q_NULLPTR));
        actionImport->setText(QApplication::translate("PhoneBook", "Import", Q_NULLPTR));
        actionAbout_us->setText(QApplication::translate("PhoneBook", "About us", Q_NULLPTR));
        actionExport->setText(QApplication::translate("PhoneBook", "Export", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tablePhones->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PhoneBook", "\320\244\320\230\320\236", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tablePhones->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PhoneBook", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tablePhones->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PhoneBook", "E-mail", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tablePhones->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PhoneBook", "\320\224\320\265\320\275\321\214 \320\240\320\276\320\266\320\264\320\265\320\275\320\270\321\217", Q_NULLPTR));
        label->setText(QApplication::translate("PhoneBook", "\320\230\321\201\320\272\320\260\321\202\321\214:", Q_NULLPTR));
        btnAdd->setText(QApplication::translate("PhoneBook", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        btnDel->setText(QApplication::translate("PhoneBook", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        btnDelAll->setText(QApplication::translate("PhoneBook", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", Q_NULLPTR));
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("PhoneBook", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\276\321\202\320\276", Q_NULLPTR));
        menuPhonebook->setTitle(QApplication::translate("PhoneBook", "Phonebook", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PhoneBook: public Ui_PhoneBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEBOOK_H
