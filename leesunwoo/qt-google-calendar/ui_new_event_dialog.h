/********************************************************************************
** Form generated from reading UI file 'new_event_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_EVENT_DIALOG_H
#define UI_NEW_EVENT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_NewEventDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *summaryLineEdit;
    QLabel *label_2;
    QDateEdit *startDateEdit;
    QLabel *label_3;
    QDateEdit *endDateEdit;
    QGroupBox *timeGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QTimeEdit *startTimeEdit;
    QLabel *label_5;
    QTimeEdit *endTimeEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewEventDialog)
    {
        if (NewEventDialog->objectName().isEmpty())
            NewEventDialog->setObjectName(QString::fromUtf8("NewEventDialog"));
        NewEventDialog->resize(294, 243);
        gridLayout_2 = new QGridLayout(NewEventDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(NewEventDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        summaryLineEdit = new QLineEdit(NewEventDialog);
        summaryLineEdit->setObjectName(QString::fromUtf8("summaryLineEdit"));

        gridLayout_2->addWidget(summaryLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(NewEventDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        startDateEdit = new QDateEdit(NewEventDialog);
        startDateEdit->setObjectName(QString::fromUtf8("startDateEdit"));
        startDateEdit->setCalendarPopup(true);

        gridLayout_2->addWidget(startDateEdit, 1, 1, 1, 1);

        label_3 = new QLabel(NewEventDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        endDateEdit = new QDateEdit(NewEventDialog);
        endDateEdit->setObjectName(QString::fromUtf8("endDateEdit"));
        endDateEdit->setCalendarPopup(true);

        gridLayout_2->addWidget(endDateEdit, 2, 1, 1, 1);

        timeGroupBox = new QGroupBox(NewEventDialog);
        timeGroupBox->setObjectName(QString::fromUtf8("timeGroupBox"));
        timeGroupBox->setCheckable(true);
        gridLayout = new QGridLayout(timeGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(timeGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        startTimeEdit = new QTimeEdit(timeGroupBox);
        startTimeEdit->setObjectName(QString::fromUtf8("startTimeEdit"));
        startTimeEdit->setCalendarPopup(false);

        gridLayout->addWidget(startTimeEdit, 0, 1, 1, 1);

        label_5 = new QLabel(timeGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        endTimeEdit = new QTimeEdit(timeGroupBox);
        endTimeEdit->setObjectName(QString::fromUtf8("endTimeEdit"));

        gridLayout->addWidget(endTimeEdit, 1, 1, 1, 1);


        gridLayout_2->addWidget(timeGroupBox, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(NewEventDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 4, 1, 1, 1);


        retranslateUi(NewEventDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewEventDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewEventDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewEventDialog);
    } // setupUi

    void retranslateUi(QDialog *NewEventDialog)
    {
        NewEventDialog->setWindowTitle(QApplication::translate("NewEventDialog", "New Event", 0));
        label->setText(QApplication::translate("NewEventDialog", "Summary", 0));
        label_2->setText(QApplication::translate("NewEventDialog", "Start Date", 0));
        startDateEdit->setDisplayFormat(QApplication::translate("NewEventDialog", "MMM dd, yyyy", 0));
        label_3->setText(QApplication::translate("NewEventDialog", "End Date", 0));
        endDateEdit->setDisplayFormat(QApplication::translate("NewEventDialog", "MMM dd, yyyy", 0));
        timeGroupBox->setTitle(QApplication::translate("NewEventDialog", "Time", 0));
        label_4->setText(QApplication::translate("NewEventDialog", "Start Time", 0));
        startTimeEdit->setDisplayFormat(QApplication::translate("NewEventDialog", "HH:mm", 0));
        label_5->setText(QApplication::translate("NewEventDialog", "End Time", 0));
        endTimeEdit->setDisplayFormat(QApplication::translate("NewEventDialog", "HH:mm", 0));
    } // retranslateUi

};

namespace Ui {
    class NewEventDialog: public Ui_NewEventDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_EVENT_DIALOG_H
