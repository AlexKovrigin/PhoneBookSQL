/********************************************************************************
** Form generated from reading UI file 'import.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORT_H
#define UI_IMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Import
{
public:
    QLabel *label;
    QTextEdit *txtRes;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *Import)
    {
        if (Import->objectName().isEmpty())
            Import->setObjectName(QStringLiteral("Import"));
        Import->resize(347, 104);
        label = new QLabel(Import);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 71, 31));
        txtRes = new QTextEdit(Import);
        txtRes->setObjectName(QStringLiteral("txtRes"));
        txtRes->setGeometry(QRect(80, 30, 261, 31));
        pushButton = new QPushButton(Import);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 70, 70, 23));
        label_2 = new QLabel(Import);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 73, 221, 16));

        retranslateUi(Import);

        QMetaObject::connectSlotsByName(Import);
    } // setupUi

    void retranslateUi(QDialog *Import)
    {
        Import->setWindowTitle(QApplication::translate("Import", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Import", "Import Path:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Import", "OK", Q_NULLPTR));
        label_2->setText(QApplication::translate("Import", "\320\237\321\200\320\270\320\274\320\265\321\200: F:/temp/t.txt", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Import: public Ui_Import {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORT_H
