/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *xo;
    QDoubleSpinBox *yo;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_4;
    QDoubleSpinBox *masa;
    QDoubleSpinBox *vxo;
    QDoubleSpinBox *radio;
    QDoubleSpinBox *vyo;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_2;
    QSpinBox *planetas;
    QPushButton *Agregar;
    QLCDNumber *num;
    QSpacerItem *verticalSpacer;
    QPushButton *pausa;
    QHBoxLayout *horizontalLayout;
    QPushButton *iniciar;
    QPushButton *parar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1234, 617);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 861, 551));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(890, 10, 266, 523));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        xo = new QDoubleSpinBox(verticalLayoutWidget_2);
        xo->setObjectName(QString::fromUtf8("xo"));
        xo->setMinimum(-999999.000000000000000);
        xo->setMaximum(999999.000000000000000);
        xo->setValue(0.000000000000000);

        gridLayout->addWidget(xo, 2, 0, 1, 1);

        yo = new QDoubleSpinBox(verticalLayoutWidget_2);
        yo->setObjectName(QString::fromUtf8("yo"));
        yo->setMinimum(-999999.000000000000000);
        yo->setMaximum(999999.000000000000000);

        gridLayout->addWidget(yo, 2, 1, 1, 1);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 1, 1, 1);

        masa = new QDoubleSpinBox(verticalLayoutWidget_2);
        masa->setObjectName(QString::fromUtf8("masa"));
        masa->setMinimum(0.000000000000000);
        masa->setMaximum(999999.000000000000000);

        gridLayout->addWidget(masa, 4, 0, 1, 1);

        vxo = new QDoubleSpinBox(verticalLayoutWidget_2);
        vxo->setObjectName(QString::fromUtf8("vxo"));
        vxo->setMinimum(-99999.000000000000000);
        vxo->setMaximum(999999.000000000000000);

        gridLayout->addWidget(vxo, 6, 0, 1, 1);

        radio = new QDoubleSpinBox(verticalLayoutWidget_2);
        radio->setObjectName(QString::fromUtf8("radio"));
        radio->setMinimum(0.000000000000000);
        radio->setMaximum(999999.000000000000000);

        gridLayout->addWidget(radio, 4, 1, 1, 1);

        vyo = new QDoubleSpinBox(verticalLayoutWidget_2);
        vyo->setObjectName(QString::fromUtf8("vyo"));
        vyo->setMinimum(-99999.000000000000000);
        vyo->setMaximum(999999.000000000000000);

        gridLayout->addWidget(vyo, 6, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        planetas = new QSpinBox(verticalLayoutWidget_2);
        planetas->setObjectName(QString::fromUtf8("planetas"));
        planetas->setMaximum(5);

        verticalLayout_2->addWidget(planetas);

        Agregar = new QPushButton(verticalLayoutWidget_2);
        Agregar->setObjectName(QString::fromUtf8("Agregar"));

        verticalLayout_2->addWidget(Agregar);

        num = new QLCDNumber(verticalLayoutWidget_2);
        num->setObjectName(QString::fromUtf8("num"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(9);
        font.setBold(true);
        num->setFont(font);

        verticalLayout_2->addWidget(num);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        pausa = new QPushButton(verticalLayoutWidget_2);
        pausa->setObjectName(QString::fromUtf8("pausa"));

        verticalLayout_2->addWidget(pausa);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        iniciar = new QPushButton(verticalLayoutWidget_2);
        iniciar->setObjectName(QString::fromUtf8("iniciar"));

        horizontalLayout->addWidget(iniciar);

        parar = new QPushButton(verticalLayoutWidget_2);
        parar->setObjectName(QString::fromUtf8("parar"));

        horizontalLayout->addWidget(parar);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1234, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Inicial Y", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Inicial X", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Velocidad inicial X", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Masa", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Radio", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Velocidad inicial Y", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Numero de esferas", nullptr));
        Agregar->setText(QCoreApplication::translate("MainWindow", "Agregar dato", nullptr));
        pausa->setText(QCoreApplication::translate("MainWindow", "Pausar simulaci\303\263n", nullptr));
        iniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        parar->setText(QCoreApplication::translate("MainWindow", "Parar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
