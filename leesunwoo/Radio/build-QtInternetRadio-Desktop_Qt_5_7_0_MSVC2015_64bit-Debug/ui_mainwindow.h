/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_URL;
    QAction *actionAdd_current_station_to_favourites;
    QAction *actionSettings;
    QAction *actionSelect_stations_for_logging;
    QAction *actionShow_playlist_logging;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *InfoLabel;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *PlayButton;
    QPushButton *StopButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QGroupBox *PlayListLoggingGroupBox;
    QGridLayout *gridLayout_5;
    QPlainTextEdit *PlayListLoggingTextEdit;
    QFrame *frame_3;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *StartLoggingButton;
    QPushButton *StopLoggingButton;
    QSpacerItem *horizontalSpacer_7;
    QFrame *frame_4;
    QGridLayout *gridLayout_7;
    QSlider *volumeSlider;
    QCheckBox *MuteCheckBox;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuFavourites;
    QMenu *menuPresets;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(894, 298);
        actionOpen_URL = new QAction(MainWindow);
        actionOpen_URL->setObjectName(QStringLiteral("actionOpen_URL"));
        actionAdd_current_station_to_favourites = new QAction(MainWindow);
        actionAdd_current_station_to_favourites->setObjectName(QStringLiteral("actionAdd_current_station_to_favourites"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionSelect_stations_for_logging = new QAction(MainWindow);
        actionSelect_stations_for_logging->setObjectName(QStringLiteral("actionSelect_stations_for_logging"));
        actionShow_playlist_logging = new QAction(MainWindow);
        actionShow_playlist_logging->setObjectName(QStringLiteral("actionShow_playlist_logging"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        InfoLabel = new QLabel(groupBox);
        InfoLabel->setObjectName(QStringLiteral("InfoLabel"));
        sizePolicy.setHeightForWidth(InfoLabel->sizePolicy().hasHeightForWidth());
        InfoLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(InfoLabel, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 2, 1);

        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        PlayButton = new QPushButton(frame);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));

        gridLayout->addWidget(PlayButton, 0, 1, 1, 1);

        StopButton = new QPushButton(frame);
        StopButton->setObjectName(QStringLiteral("StopButton"));

        gridLayout->addWidget(StopButton, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 2, 0, 1, 3);


        gridLayout_2->addWidget(frame_2, 0, 0, 1, 2);

        PlayListLoggingGroupBox = new QGroupBox(centralWidget);
        PlayListLoggingGroupBox->setObjectName(QStringLiteral("PlayListLoggingGroupBox"));
        sizePolicy.setHeightForWidth(PlayListLoggingGroupBox->sizePolicy().hasHeightForWidth());
        PlayListLoggingGroupBox->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(PlayListLoggingGroupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        PlayListLoggingTextEdit = new QPlainTextEdit(PlayListLoggingGroupBox);
        PlayListLoggingTextEdit->setObjectName(QStringLiteral("PlayListLoggingTextEdit"));

        gridLayout_5->addWidget(PlayListLoggingTextEdit, 0, 0, 1, 1);

        frame_3 = new QFrame(PlayListLoggingGroupBox);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        StartLoggingButton = new QPushButton(frame_3);
        StartLoggingButton->setObjectName(QStringLiteral("StartLoggingButton"));

        gridLayout_6->addWidget(StartLoggingButton, 0, 1, 1, 1);

        StopLoggingButton = new QPushButton(frame_3);
        StopLoggingButton->setObjectName(QStringLiteral("StopLoggingButton"));

        gridLayout_6->addWidget(StopLoggingButton, 0, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 0, 2, 1, 1);


        gridLayout_5->addWidget(frame_3, 1, 0, 1, 1);


        gridLayout_2->addWidget(PlayListLoggingGroupBox, 0, 3, 1, 1);

        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_4);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        volumeSlider = new QSlider(frame_4);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(volumeSlider->sizePolicy().hasHeightForWidth());
        volumeSlider->setSizePolicy(sizePolicy2);
        volumeSlider->setOrientation(Qt::Vertical);

        gridLayout_7->addWidget(volumeSlider, 0, 1, 1, 1);

        MuteCheckBox = new QCheckBox(frame_4);
        MuteCheckBox->setObjectName(QStringLiteral("MuteCheckBox"));

        gridLayout_7->addWidget(MuteCheckBox, 1, 0, 1, 3);


        gridLayout_2->addWidget(frame_4, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 894, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFavourites = new QMenu(menuBar);
        menuFavourites->setObjectName(QStringLiteral("menuFavourites"));
        menuPresets = new QMenu(menuBar);
        menuPresets->setObjectName(QStringLiteral("menuPresets"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuFavourites->menuAction());
        menuBar->addAction(menuPresets->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuFile->addAction(actionOpen_URL);
        menuFavourites->addAction(actionAdd_current_station_to_favourites);
        menuFavourites->addSeparator();
        menuTools->addAction(actionSettings);
        menuTools->addAction(actionSelect_stations_for_logging);
        menuTools->addAction(actionShow_playlist_logging);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen_URL->setText(QApplication::translate("MainWindow", "Open URL...", 0));
        actionAdd_current_station_to_favourites->setText(QApplication::translate("MainWindow", "Add current station to favourites", 0));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
        actionSelect_stations_for_logging->setText(QApplication::translate("MainWindow", "Start selecting stations for playlist logging", 0));
        actionShow_playlist_logging->setText(QApplication::translate("MainWindow", "Show playlist logging", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Information", 0));
        InfoLabel->setText(QString());
        PlayButton->setText(QApplication::translate("MainWindow", "Play", 0));
        StopButton->setText(QApplication::translate("MainWindow", "Stop", 0));
        PlayListLoggingGroupBox->setTitle(QApplication::translate("MainWindow", "PLaylist logging", 0));
        StartLoggingButton->setText(QApplication::translate("MainWindow", "Start logging", 0));
        StopLoggingButton->setText(QApplication::translate("MainWindow", "Stop logging", 0));
        MuteCheckBox->setText(QApplication::translate("MainWindow", "Mute", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuFavourites->setTitle(QApplication::translate("MainWindow", "Favourites", 0));
        menuPresets->setTitle(QApplication::translate("MainWindow", "Presets", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
