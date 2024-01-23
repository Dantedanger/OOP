/********************************************************************************
** Form generated from reading UI file 'udalen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDALEN_H
#define UI_UDALEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Udalen
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *Udalen)
    {
        if (Udalen->objectName().isEmpty())
            Udalen->setObjectName(QString::fromUtf8("Udalen"));
        Udalen->resize(377, 198);
        buttonBox = new QDialogButtonBox(Udalen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 150, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit_3 = new QLineEdit(Udalen);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 81, 219, 23));
        label_3 = new QLabel(Udalen);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(19, 82, 51, 16));
        label_2 = new QLabel(Udalen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(19, 52, 24, 16));
        label = new QLabel(Udalen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 23, 51, 16));
        lineEdit = new QLineEdit(Udalen);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 23, 219, 23));
        lineEdit_2 = new QLineEdit(Udalen);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 52, 219, 23));
        label_4 = new QLabel(Udalen);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(19, 112, 48, 16));
        lineEdit_4 = new QLineEdit(Udalen);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(90, 110, 219, 22));

        retranslateUi(Udalen);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Udalen, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Udalen, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Udalen);
    } // setupUi

    void retranslateUi(QDialog *Udalen)
    {
        Udalen->setWindowTitle(QCoreApplication::translate("Udalen", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Udalen", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("Udalen", "\320\230\320\274\321\217", nullptr));
        label->setText(QCoreApplication::translate("Udalen", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("Udalen", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Udalen: public Ui_Udalen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDALEN_H
