/********************************************************************************
** Form generated from reading UI file 'dobav.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOBAV_H
#define UI_DOBAV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dobav
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *Dobav)
    {
        if (Dobav->objectName().isEmpty())
            Dobav->setObjectName(QString::fromUtf8("Dobav"));
        Dobav->resize(367, 195);
        buttonBox = new QDialogButtonBox(Dobav);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 160, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(Dobav);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 40, 219, 23));
        lineEdit_2 = new QLineEdit(Dobav);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 69, 219, 23));
        lineEdit_3 = new QLineEdit(Dobav);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(80, 98, 219, 23));
        lineEdit_4 = new QLineEdit(Dobav);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(80, 127, 219, 22));
        label = new QLabel(Dobav);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 51, 16));
        label_2 = new QLabel(Dobav);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 69, 24, 16));
        label_3 = new QLabel(Dobav);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(9, 99, 51, 16));
        label_4 = new QLabel(Dobav);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(9, 129, 48, 16));
        label_5 = new QLabel(Dobav);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 10, 71, 16));
        pushButton = new QPushButton(Dobav);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 160, 91, 31));
        lineEdit_5 = new QLineEdit(Dobav);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(10, 160, 151, 31));
        lineEdit_5->setReadOnly(true);

        retranslateUi(Dobav);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dobav, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dobav, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dobav);
    } // setupUi

    void retranslateUi(QDialog *Dobav)
    {
        Dobav->setWindowTitle(QCoreApplication::translate("Dobav", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dobav", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Dobav", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Dobav", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("Dobav", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_5->setText(QCoreApplication::translate("Dobav", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Dobav", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dobav: public Ui_Dobav {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOBAV_H
