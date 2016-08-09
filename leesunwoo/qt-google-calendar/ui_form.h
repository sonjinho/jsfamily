/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *calendarsListWidget;
    QListWidget *eventsListWidget;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLineEdit *summaryLineEdit;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QDateEdit *startDateEdit;
    QLabel *label_5;
    QDateEdit *endDateEdit;
    QGroupBox *timeGroupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QTimeEdit *startTimeEdit;
    QLabel *label_7;
    QTimeEdit *endTimeEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    QLineEdit *locationLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *newCalendarButton;
    QPushButton *deleteCalendarButton;
    QPushButton *newEventButton;
    QPushButton *deleteEventButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateEventButton;
    QPushButton *moveEventButton;
    QPushButton *editCalendarButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(864, 522);
        gridLayout_3 = new QGridLayout(Form);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 3, 1, 1);

        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 6, 1, 1);

        calendarsListWidget = new QListWidget(Form);
        calendarsListWidget->setObjectName(QString::fromUtf8("calendarsListWidget"));

        gridLayout_3->addWidget(calendarsListWidget, 1, 0, 1, 3);

        eventsListWidget = new QListWidget(Form);
        eventsListWidget->setObjectName(QString::fromUtf8("eventsListWidget"));

        gridLayout_3->addWidget(eventsListWidget, 1, 3, 1, 3);

        frame = new QFrame(Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        summaryLineEdit = new QLineEdit(frame);
        summaryLineEdit->setObjectName(QString::fromUtf8("summaryLineEdit"));

        gridLayout_4->addWidget(summaryLineEdit, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        startDateEdit = new QDateEdit(frame);
        startDateEdit->setObjectName(QString::fromUtf8("startDateEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startDateEdit->sizePolicy().hasHeightForWidth());
        startDateEdit->setSizePolicy(sizePolicy);
        startDateEdit->setCalendarPopup(true);

        gridLayout_2->addWidget(startDateEdit, 0, 1, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        endDateEdit = new QDateEdit(frame);
        endDateEdit->setObjectName(QString::fromUtf8("endDateEdit"));
        endDateEdit->setCalendarPopup(true);

        gridLayout_2->addWidget(endDateEdit, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 3, 0, 1, 1);

        timeGroupBox = new QGroupBox(frame);
        timeGroupBox->setObjectName(QString::fromUtf8("timeGroupBox"));
        timeGroupBox->setCheckable(true);
        gridLayout = new QGridLayout(timeGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(timeGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        startTimeEdit = new QTimeEdit(timeGroupBox);
        startTimeEdit->setObjectName(QString::fromUtf8("startTimeEdit"));
        sizePolicy.setHeightForWidth(startTimeEdit->sizePolicy().hasHeightForWidth());
        startTimeEdit->setSizePolicy(sizePolicy);
        startTimeEdit->setCalendarPopup(false);

        gridLayout->addWidget(startTimeEdit, 0, 1, 1, 1);

        label_7 = new QLabel(timeGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        endTimeEdit = new QTimeEdit(timeGroupBox);
        endTimeEdit->setObjectName(QString::fromUtf8("endTimeEdit"));

        gridLayout->addWidget(endTimeEdit, 1, 1, 1, 1);


        gridLayout_4->addWidget(timeGroupBox, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 9, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 7, 0, 1, 1);

        locationLineEdit = new QLineEdit(frame);
        locationLineEdit->setObjectName(QString::fromUtf8("locationLineEdit"));

        gridLayout_4->addWidget(locationLineEdit, 8, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 6, 0, 1, 1);


        gridLayout_3->addWidget(frame, 1, 6, 1, 1);

        newCalendarButton = new QPushButton(Form);
        newCalendarButton->setObjectName(QString::fromUtf8("newCalendarButton"));

        gridLayout_3->addWidget(newCalendarButton, 2, 0, 1, 1);

        deleteCalendarButton = new QPushButton(Form);
        deleteCalendarButton->setObjectName(QString::fromUtf8("deleteCalendarButton"));

        gridLayout_3->addWidget(deleteCalendarButton, 2, 1, 1, 1);

        newEventButton = new QPushButton(Form);
        newEventButton->setObjectName(QString::fromUtf8("newEventButton"));

        gridLayout_3->addWidget(newEventButton, 2, 3, 1, 1);

        deleteEventButton = new QPushButton(Form);
        deleteEventButton->setObjectName(QString::fromUtf8("deleteEventButton"));

        gridLayout_3->addWidget(deleteEventButton, 2, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        updateEventButton = new QPushButton(Form);
        updateEventButton->setObjectName(QString::fromUtf8("updateEventButton"));

        horizontalLayout->addWidget(updateEventButton);


        gridLayout_3->addLayout(horizontalLayout, 2, 6, 1, 1);

        moveEventButton = new QPushButton(Form);
        moveEventButton->setObjectName(QString::fromUtf8("moveEventButton"));

        gridLayout_3->addWidget(moveEventButton, 2, 5, 1, 1);

        editCalendarButton = new QPushButton(Form);
        editCalendarButton->setObjectName(QString::fromUtf8("editCalendarButton"));

        gridLayout_3->addWidget(editCalendarButton, 2, 2, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        label->setText(QApplication::translate("Form", "Calendars", 0));
        label_2->setText(QApplication::translate("Form", "Events", 0));
        label_3->setText(QApplication::translate("Form", "Event body", 0));
        label_8->setText(QApplication::translate("Form", "Summary", 0));
        label_4->setText(QApplication::translate("Form", "Start Date", 0));
        startDateEdit->setDisplayFormat(QApplication::translate("Form", "MMM dd, yyyy", 0));
        label_5->setText(QApplication::translate("Form", "End Date", 0));
        endDateEdit->setDisplayFormat(QApplication::translate("Form", "MMM dd, yyyy", 0));
        timeGroupBox->setTitle(QApplication::translate("Form", "Time", 0));
        label_6->setText(QApplication::translate("Form", "Start Time", 0));
        startTimeEdit->setDisplayFormat(QApplication::translate("Form", "HH:mm", 0));
        label_7->setText(QApplication::translate("Form", "End Time", 0));
        endTimeEdit->setDisplayFormat(QApplication::translate("Form", "HH:mm", 0));
        label_9->setText(QApplication::translate("Form", "Location", 0));
        newCalendarButton->setText(QApplication::translate("Form", "New Calendar..", 0));
        deleteCalendarButton->setText(QApplication::translate("Form", "Delete Calendar", 0));
        newEventButton->setText(QApplication::translate("Form", "New Event..", 0));
        deleteEventButton->setText(QApplication::translate("Form", "Delete Event", 0));
        updateEventButton->setText(QApplication::translate("Form", "Update Event", 0));
        moveEventButton->setText(QApplication::translate("Form", "Move Event...", 0));
        editCalendarButton->setText(QApplication::translate("Form", "Edit...", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
