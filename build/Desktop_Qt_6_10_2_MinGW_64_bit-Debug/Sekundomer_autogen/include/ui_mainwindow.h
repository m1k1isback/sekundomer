/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *labelTimer;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonLap;
    QPushButton *pushButtonReset;
    QListWidget *listWidget;
    QPushButton *pushButtonStart;
    QWidget *tab_2;
    QLabel *labelCleanTimer;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBoxHours;
    QSpinBox *spinBoxMinutes;
    QSpinBox *spinBoxSeconds;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonStartCountdown;
    QPushButton *pushButtonStopCountdown;
    QPushButton *pushButtonResetCountdown;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(438, 302);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow { background-color: #a9a9a9; }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 441, 301));
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f5f5f5;\n"
"}"));
        labelTimer = new QLabel(tab);
        labelTimer->setObjectName("labelTimer");
        labelTimer->setGeometry(QRect(110, 20, 221, 41));
        QFont font;
        font.setPointSize(16);
        labelTimer->setFont(font);
        labelTimer->setStyleSheet(QString::fromUtf8("QLabel#labelTimer { background-color: #ffffff; color: #1c1c1e; border: 2px solid #d2d2d7; border-radius: 15px; }"));
        labelTimer->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButtonStop = new QPushButton(tab);
        pushButtonStop->setObjectName("pushButtonStop");
        pushButtonStop->setGeometry(QRect(121, 73, 81, 41));
        QFont font1;
        font1.setBold(true);
        pushButtonStop->setFont(font1);
        pushButtonStop->setStyleSheet(QString::fromUtf8("        QPushButton {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #ff4444, stop:1 #cc0000);\n"
"            border: 2px solid #ff6666;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #ff6666, stop:1 #ee2222);\n"
"            border-color: #ff8888;\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #cc0000, stop:1 #990000);\n"
"            border-color: #ff4444;\n"
"        }"));
        pushButtonLap = new QPushButton(tab);
        pushButtonLap->setObjectName("pushButtonLap");
        pushButtonLap->setGeometry(QRect(321, 73, 81, 41));
        pushButtonLap->setFont(font1);
        pushButtonLap->setStyleSheet(QString::fromUtf8("        QPushButton {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #4488ff, stop:1 #2266dd);\n"
"            border: 2px solid #66aaff;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #66aaff, stop:1 #3377ee);\n"
"            border-color: #88ccff;\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #2266dd, stop:1 #1155cc);\n"
"            border-color: #4488ff;\n"
"        }"));
        pushButtonReset = new QPushButton(tab);
        pushButtonReset->setObjectName("pushButtonReset");
        pushButtonReset->setGeometry(QRect(221, 73, 81, 41));
        pushButtonReset->setFont(font1);
        pushButtonReset->setStyleSheet(QString::fromUtf8("        QPushButton {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #6a6a8a, stop:1 #4a4a6a);\n"
"            border: 2px solid #8a8aaa;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #7a7a9a, stop:1 #5a5a7a);\n"
"            border-color: #aaaaaa;\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #4a4a6a, stop:1 #2a2a4a);\n"
"            border-color: #6a6a8a;\n"
"        }"));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(220, 120, 171, 101));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"    font-size: 12px;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    padding: 5px;\n"
"    border-bottom: 1px solid #e0e0e0;\n"
"    border-radius: 4px;\n"
"    min-height: 25px;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #f5f5f5;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #e0e0e0;\n"
"    color: #000000;\n"
"}"));
        pushButtonStart = new QPushButton(tab);
        pushButtonStart->setObjectName("pushButtonStart");
        pushButtonStart->setGeometry(QRect(21, 73, 81, 41));
        pushButtonStart->setFont(font1);
        pushButtonStart->setStyleSheet(QString::fromUtf8("        QPushButton {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #00cc66, stop:1 #009944);\n"
"            border: 2px solid #00ff88;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #00ee77, stop:1 #00bb55);\n"
"            border-color: #00ffaa;\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                stop:0 #009944, stop:1 #006633);\n"
"            border-color: #00cc66;\n"
"        }"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tab_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f5f5f5;\n"
"}"));
        labelCleanTimer = new QLabel(tab_2);
        labelCleanTimer->setObjectName("labelCleanTimer");
        labelCleanTimer->setGeometry(QRect(30, 20, 381, 111));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Courier New")});
        font2.setBold(true);
        labelCleanTimer->setFont(font2);
        labelCleanTimer->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"    font-family: \"Courier New\", \"Consolas\", monospace;\n"
"    font-size: 40px;\n"
"    font-weight: bold;\n"
"    padding: 30px;\n"
"    border: 3px solid #cccccc;\n"
"    border-radius: 15px;\n"
"}"));
        labelCleanTimer->setAlignment(Qt::AlignmentFlag::AlignCenter);
        widget = new QWidget(tab_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 140, 351, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        spinBoxHours = new QSpinBox(widget);
        spinBoxHours->setObjectName("spinBoxHours");
        spinBoxHours->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    border: 2px solid #cccccc;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"}\n"
"QSpinBox:hover {\n"
"    border-color: #999999;\n"
"}\n"
"QSpinBox::up-button, QSpinBox::down-button {\n"
"    background-color: #e0e0e0;\n"
"    border: 1px solid #cccccc;\n"
"    width: 20px;\n"
"}\n"
"QSpinBox::up-button:hover, QSpinBox::down-button:hover {\n"
"    background-color: #d0d0d0;\n"
"}"));

        horizontalLayout->addWidget(spinBoxHours);

        spinBoxMinutes = new QSpinBox(widget);
        spinBoxMinutes->setObjectName("spinBoxMinutes");
        spinBoxMinutes->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    border: 2px solid #cccccc;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"}\n"
"QSpinBox:hover {\n"
"    border-color: #999999;\n"
"}\n"
"QSpinBox::up-button, QSpinBox::down-button {\n"
"    background-color: #e0e0e0;\n"
"    border: 1px solid #cccccc;\n"
"    width: 20px;\n"
"}\n"
"QSpinBox::up-button:hover, QSpinBox::down-button:hover {\n"
"    background-color: #d0d0d0;\n"
"}"));
        spinBoxMinutes->setMaximum(59);

        horizontalLayout->addWidget(spinBoxMinutes);

        spinBoxSeconds = new QSpinBox(widget);
        spinBoxSeconds->setObjectName("spinBoxSeconds");
        spinBoxSeconds->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    border: 2px solid #cccccc;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"}\n"
"QSpinBox:hover {\n"
"    border-color: #999999;\n"
"}\n"
"QSpinBox::up-button, QSpinBox::down-button {\n"
"    background-color: #e0e0e0;\n"
"    border: 1px solid #cccccc;\n"
"    width: 20px;\n"
"}\n"
"QSpinBox::up-button:hover, QSpinBox::down-button:hover {\n"
"    background-color: #d0d0d0;\n"
"}"));
        spinBoxSeconds->setMaximum(59);

        horizontalLayout->addWidget(spinBoxSeconds);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonStartCountdown = new QPushButton(widget);
        pushButtonStartCountdown->setObjectName("pushButtonStartCountdown");
        pushButtonStartCountdown->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    min-width: 75px;\n"
"    min-height: 35px;\n"
"    max-width: 75px;\n"
"    max-height: 35px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #3d8b40;\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonStartCountdown);

        pushButtonStopCountdown = new QPushButton(widget);
        pushButtonStopCountdown->setObjectName("pushButtonStopCountdown");
        pushButtonStopCountdown->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f44336;\n"
"    color: white;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    min-width: 75px;\n"
"    min-height: 35px;\n"
"    max-width: 75px;\n"
"    max-height: 35px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #da190b;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #c1140a;\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonStopCountdown);

        pushButtonResetCountdown = new QPushButton(widget);
        pushButtonResetCountdown->setObjectName("pushButtonResetCountdown");
        pushButtonResetCountdown->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #9e9e9e;\n"
"    color: white;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    min-width: 75px;\n"
"    min-height: 35px;\n"
"    max-width: 75px;\n"
"    max-height: 35px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #8e8e8e;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #7a7a7a;\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonResetCountdown);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(whatsthis)
        tab->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        labelTimer->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\277", nullptr));
        pushButtonLap->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\321\203\320\263", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        labelCleanTimer->setText(QCoreApplication::translate("MainWindow", "00:00:00.000", nullptr));
        spinBoxHours->setSuffix(QCoreApplication::translate("MainWindow", "\321\207", nullptr));
        spinBoxMinutes->setSuffix(QCoreApplication::translate("MainWindow", "\320\274\320\270\320\275", nullptr));
        spinBoxSeconds->setSuffix(QCoreApplication::translate("MainWindow", "\321\201\320\265\320\272", nullptr));
        pushButtonStartCountdown->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        pushButtonStopCountdown->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\277", nullptr));
        pushButtonResetCountdown->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
