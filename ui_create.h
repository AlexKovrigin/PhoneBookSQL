/********************************************************************************
** Form generated from reading UI file 'create.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_H
#define UI_CREATE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Create
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *fio;
    QLineEdit *txtFIO;
    QHBoxLayout *horizontalLayout_4;
    QLabel *txtPhone2;
    QLineEdit *txtPhone;
    QHBoxLayout *horizontalLayout_3;
    QLabel *email;
    QLineEdit *txtEmail;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *lblphoto;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *create;
    QPushButton *cancel;

    void setupUi(QDialog *Create)
    {
        if (Create->objectName().isEmpty())
            Create->setObjectName(QStringLiteral("Create"));
        Create->resize(343, 275);
        layoutWidget = new QWidget(Create);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 314, 265));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        fio = new QLabel(layoutWidget);
        fio->setObjectName(QStringLiteral("fio"));

        horizontalLayout_5->addWidget(fio);

        txtFIO = new QLineEdit(layoutWidget);
        txtFIO->setObjectName(QStringLiteral("txtFIO"));
        txtFIO->setMaxLength(50);

        horizontalLayout_5->addWidget(txtFIO);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txtPhone2 = new QLabel(layoutWidget);
        txtPhone2->setObjectName(QStringLiteral("txtPhone2"));

        horizontalLayout_4->addWidget(txtPhone2);

        txtPhone = new QLineEdit(layoutWidget);
        txtPhone->setObjectName(QStringLiteral("txtPhone"));
        txtPhone->setMaxLength(50);

        horizontalLayout_4->addWidget(txtPhone);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        email = new QLabel(layoutWidget);
        email->setObjectName(QStringLiteral("email"));

        horizontalLayout_3->addWidget(email);

        txtEmail = new QLineEdit(layoutWidget);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));
        txtEmail->setMaxLength(50);

        horizontalLayout_3->addWidget(txtEmail);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setDateTime(QDateTime(QDate(1970, 1, 1), QTime(0, 0, 0)));
        dateEdit->setMinimumDate(QDate(1900, 1, 1));

        horizontalLayout_2->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        lblphoto = new QLabel(layoutWidget);
        lblphoto->setObjectName(QStringLiteral("lblphoto"));

        horizontalLayout->addWidget(lblphoto);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(Create);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 230, 162, 27));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        create = new QPushButton(layoutWidget1);
        create->setObjectName(QStringLiteral("create"));

        horizontalLayout_6->addWidget(create);

        cancel = new QPushButton(layoutWidget1);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout_6->addWidget(cancel);


        retranslateUi(Create);

        QMetaObject::connectSlotsByName(Create);
    } // setupUi

    void retranslateUi(QDialog *Create)
    {
        Create->setWindowTitle(QApplication::translate("Create", "Dialog", Q_NULLPTR));
        fio->setText(QApplication::translate("Create", "\320\244\320\230\320\236:       ", Q_NULLPTR));
        txtPhone2->setText(QApplication::translate("Create", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275:", Q_NULLPTR));
        email->setText(QApplication::translate("Create", "E-mail:     ", Q_NULLPTR));
        label->setText(QApplication::translate("Create", "\320\224\320\265\320\275\321\214 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Create", "\320\244\320\276\321\202\320\276\320\263\321\200\320\260\321\204\320\270\321\217:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Create", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\244\320\260\320\271\320\273", Q_NULLPTR));
        lblphoto->setText(QApplication::translate("Create", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        create->setText(QApplication::translate("Create", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", Q_NULLPTR));
        cancel->setText(QApplication::translate("Create", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Create: public Ui_Create {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_H
