/********************************************************************************
** Form generated from reading UI file 'izmen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IZMEN_H
#define UI_IZMEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Izmen
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QPushButton *pushButton;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *Izmen)
    {
        if (Izmen->objectName().isEmpty())
            Izmen->setObjectName(QString::fromUtf8("Izmen"));
        Izmen->resize(400, 207);
        buttonBox = new QDialogButtonBox(Izmen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 160, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_6 = new QLabel(Izmen);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(18, 129, 48, 16));
        lineEdit = new QLineEdit(Izmen);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 40, 219, 23));
        label = new QLabel(Izmen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 51, 16));
        lineEdit_4 = new QLineEdit(Izmen);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(89, 127, 219, 22));
        label_5 = new QLabel(Izmen);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(18, 99, 51, 16));
        lineEdit_3 = new QLineEdit(Izmen);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(89, 98, 219, 23));
        label_2 = new QLabel(Izmen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(19, 69, 24, 16));
        lineEdit_2 = new QLineEdit(Izmen);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(89, 69, 219, 23));
        label_7 = new QLabel(Izmen);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 10, 71, 16));
        pushButton = new QPushButton(Izmen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 160, 91, 31));
        lineEdit_5 = new QLineEdit(Izmen);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(20, 160, 151, 31));
        lineEdit_5->setReadOnly(true);

        retranslateUi(Izmen);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Izmen, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Izmen, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Izmen);
    } // setupUi

    void retranslateUi(QDialog *Izmen)
    {
        Izmen->setWindowTitle(QCoreApplication::translate("Izmen", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("Izmen", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label->setText(QCoreApplication::translate("Izmen", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("Izmen", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("Izmen", "\320\230\320\274\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("Izmen", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Izmen", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Izmen: public Ui_Izmen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IZMEN_H
