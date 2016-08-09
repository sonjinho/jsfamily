/********************************************************************************
** Form generated from reading UI file 'edit_calendar_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_CALENDAR_DIALOG_H
#define UI_EDIT_CALENDAR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_EditCalendarDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *summaryLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *locationLineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QTextEdit *descriptionTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditCalendarDialog)
    {
        if (EditCalendarDialog->objectName().isEmpty())
            EditCalendarDialog->setObjectName(QString::fromUtf8("EditCalendarDialog"));
        EditCalendarDialog->resize(400, 328);
        gridLayout = new QGridLayout(EditCalendarDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(EditCalendarDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        summaryLineEdit = new QLineEdit(EditCalendarDialog);
        summaryLineEdit->setObjectName(QString::fromUtf8("summaryLineEdit"));

        gridLayout->addWidget(summaryLineEdit, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(379, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        label_2 = new QLabel(EditCalendarDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        locationLineEdit = new QLineEdit(EditCalendarDialog);
        locationLineEdit->setObjectName(QString::fromUtf8("locationLineEdit"));

        gridLayout->addWidget(locationLineEdit, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(379, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        label_3 = new QLabel(EditCalendarDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        descriptionTextEdit = new QTextEdit(EditCalendarDialog);
        descriptionTextEdit->setObjectName(QString::fromUtf8("descriptionTextEdit"));

        gridLayout->addWidget(descriptionTextEdit, 7, 0, 1, 1);

        buttonBox = new QDialogButtonBox(EditCalendarDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 1);


        retranslateUi(EditCalendarDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditCalendarDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditCalendarDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditCalendarDialog);
    } // setupUi

    void retranslateUi(QDialog *EditCalendarDialog)
    {
        EditCalendarDialog->setWindowTitle(QApplication::translate("EditCalendarDialog", "Edit Calendar", 0));
        label->setText(QApplication::translate("EditCalendarDialog", "Summary", 0));
        label_2->setText(QApplication::translate("EditCalendarDialog", "Location", 0));
        label_3->setText(QApplication::translate("EditCalendarDialog", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class EditCalendarDialog: public Ui_EditCalendarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_CALENDAR_DIALOG_H
