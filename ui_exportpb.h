/********************************************************************************
** Form generated from reading UI file 'exportpb.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTPB_H
#define UI_EXPORTPB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exportPB
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;

    void setupUi(QDialog *exportPB)
    {
        if (exportPB->objectName().isEmpty())
            exportPB->setObjectName(QStringLiteral("exportPB"));
        exportPB->resize(356, 90);
        pushButton = new QPushButton(exportPB);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 50, 75, 23));
        layoutWidget = new QWidget(exportPB);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 325, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setReadOnly(false);

        horizontalLayout->addWidget(textBrowser);

        label_2 = new QLabel(exportPB);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 221, 16));

        retranslateUi(exportPB);

        QMetaObject::connectSlotsByName(exportPB);
    } // setupUi

    void retranslateUi(QDialog *exportPB)
    {
        exportPB->setWindowTitle(QApplication::translate("exportPB", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("exportPB", "OK", Q_NULLPTR));
        label->setText(QApplication::translate("exportPB", "Export Path:", Q_NULLPTR));
        label_2->setText(QApplication::translate("exportPB", "\320\237\321\200\320\270\320\274\320\265\321\200: F:/temp/t.txt", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class exportPB: public Ui_exportPB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTPB_H
