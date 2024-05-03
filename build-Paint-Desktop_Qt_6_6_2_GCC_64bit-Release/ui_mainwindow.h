/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListView *ButtonBackground;
    QListView *ModeBackground;
    QListView *listView;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *TriangleButton;
    QRadioButton *HexagonButton;
    QRadioButton *SqauerButton;
    QRadioButton *RectangleButton;
    QRadioButton *PolylineButton;
    QRadioButton *RhombusButton;
    QRadioButton *Star5Button;
    QRadioButton *Star6Button;
    QRadioButton *Star7Button;
    QRadioButton *Star8Button;
    QRadioButton *CircleButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *DrawButton;
    QRadioButton *MoveButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *LeftRotateButton;
    QPushButton *RightRotateButton;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *PlusButton;
    QPushButton *MinusButton;
    QPushButton *ClearButton;
    QLabel *label;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QMenu *menuPaint_100D_Pro_Max;
    QStatusBar *statusbar;
    QButtonGroup *Rotate;
    QButtonGroup *Mode;
    QButtonGroup *Figure;
    QButtonGroup *Size;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1400, 750);
        MainWindow->setMinimumSize(QSize(1400, 750));
        MainWindow->setMaximumSize(QSize(1400, 750));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ButtonBackground = new QListView(centralwidget);
        ButtonBackground->setObjectName("ButtonBackground");
        ButtonBackground->setGeometry(QRect(-40, 0, 1451, 31));
        ModeBackground = new QListView(centralwidget);
        ModeBackground->setObjectName("ModeBackground");
        ModeBackground->setGeometry(QRect(1326, 551, 71, 151));
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(-10, 630, 221, 71));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 630, 141, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 651, 141, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 680, 141, 17));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 867, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        TriangleButton = new QRadioButton(layoutWidget);
        Figure = new QButtonGroup(MainWindow);
        Figure->setObjectName("Figure");
        Figure->addButton(TriangleButton);
        TriangleButton->setObjectName("TriangleButton");
        TriangleButton->setChecked(true);

        horizontalLayout->addWidget(TriangleButton);

        HexagonButton = new QRadioButton(layoutWidget);
        Figure->addButton(HexagonButton);
        HexagonButton->setObjectName("HexagonButton");

        horizontalLayout->addWidget(HexagonButton);

        SqauerButton = new QRadioButton(layoutWidget);
        Figure->addButton(SqauerButton);
        SqauerButton->setObjectName("SqauerButton");

        horizontalLayout->addWidget(SqauerButton);

        RectangleButton = new QRadioButton(layoutWidget);
        Figure->addButton(RectangleButton);
        RectangleButton->setObjectName("RectangleButton");

        horizontalLayout->addWidget(RectangleButton);

        PolylineButton = new QRadioButton(layoutWidget);
        Figure->addButton(PolylineButton);
        PolylineButton->setObjectName("PolylineButton");

        horizontalLayout->addWidget(PolylineButton);

        RhombusButton = new QRadioButton(layoutWidget);
        Figure->addButton(RhombusButton);
        RhombusButton->setObjectName("RhombusButton");

        horizontalLayout->addWidget(RhombusButton);

        Star5Button = new QRadioButton(layoutWidget);
        Figure->addButton(Star5Button);
        Star5Button->setObjectName("Star5Button");

        horizontalLayout->addWidget(Star5Button);

        Star6Button = new QRadioButton(layoutWidget);
        Figure->addButton(Star6Button);
        Star6Button->setObjectName("Star6Button");

        horizontalLayout->addWidget(Star6Button);

        Star7Button = new QRadioButton(layoutWidget);
        Figure->addButton(Star7Button);
        Star7Button->setObjectName("Star7Button");

        horizontalLayout->addWidget(Star7Button);

        Star8Button = new QRadioButton(layoutWidget);
        Figure->addButton(Star8Button);
        Star8Button->setObjectName("Star8Button");

        horizontalLayout->addWidget(Star8Button);

        CircleButton = new QRadioButton(layoutWidget);
        Figure->addButton(CircleButton);
        CircleButton->setObjectName("CircleButton");

        horizontalLayout->addWidget(CircleButton);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(1330, 650, 65, 54));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        DrawButton = new QRadioButton(layoutWidget1);
        Mode = new QButtonGroup(MainWindow);
        Mode->setObjectName("Mode");
        Mode->addButton(DrawButton);
        DrawButton->setObjectName("DrawButton");
        DrawButton->setChecked(true);

        verticalLayout->addWidget(DrawButton);

        MoveButton = new QRadioButton(layoutWidget1);
        Mode->addButton(MoveButton);
        MoveButton->setObjectName("MoveButton");

        verticalLayout->addWidget(MoveButton);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(0, 630, 68, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(1330, 560, 61, 21));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LeftRotateButton = new QPushButton(layoutWidget3);
        Rotate = new QButtonGroup(MainWindow);
        Rotate->setObjectName("Rotate");
        Rotate->addButton(LeftRotateButton);
        LeftRotateButton->setObjectName("LeftRotateButton");

        horizontalLayout_2->addWidget(LeftRotateButton);

        RightRotateButton = new QPushButton(layoutWidget3);
        Rotate->addButton(RightRotateButton);
        RightRotateButton->setObjectName("RightRotateButton");

        horizontalLayout_2->addWidget(RightRotateButton);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(1330, 590, 61, 21));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        PlusButton = new QPushButton(layoutWidget4);
        Size = new QButtonGroup(MainWindow);
        Size->setObjectName("Size");
        Size->addButton(PlusButton);
        PlusButton->setObjectName("PlusButton");
        PlusButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(PlusButton);

        MinusButton = new QPushButton(layoutWidget4);
        Size->addButton(MinusButton);
        MinusButton->setObjectName("MinusButton");

        horizontalLayout_4->addWidget(MinusButton);

        ClearButton = new QPushButton(centralwidget);
        ClearButton->setObjectName("ClearButton");
        ClearButton->setGeometry(QRect(1007, 0, 401, 31));
        ClearButton->setStyleSheet(QString::fromUtf8("background-color:rgb(87, 227, 137);\n"
"color : rgb(0, 0, 0)"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(1330, 622, 70, 21));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setEnabled(false);
        checkBox->setGeometry(QRect(871, 0, 101, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1400, 22));
        menuPaint_100D_Pro_Max = new QMenu(menubar);
        menuPaint_100D_Pro_Max->setObjectName("menuPaint_100D_Pro_Max");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPaint_100D_Pro_Max->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        TriangleButton->setText(QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        HexagonButton->setText(QCoreApplication::translate("MainWindow", "Hexagon", nullptr));
        SqauerButton->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        RectangleButton->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        PolylineButton->setText(QCoreApplication::translate("MainWindow", "Polyline", nullptr));
        RhombusButton->setText(QCoreApplication::translate("MainWindow", "Rhombus", nullptr));
        Star5Button->setText(QCoreApplication::translate("MainWindow", "Star5", nullptr));
        Star6Button->setText(QCoreApplication::translate("MainWindow", "Star6", nullptr));
        Star7Button->setText(QCoreApplication::translate("MainWindow", "Star7", nullptr));
        Star8Button->setText(QCoreApplication::translate("MainWindow", "Star8", nullptr));
        CircleButton->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        DrawButton->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        MoveButton->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Center:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Square:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Perimetr:", nullptr));
        LeftRotateButton->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        RightRotateButton->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        PlusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        MinusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Modes:", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Show point\n"
"(for circle)", nullptr));
        menuPaint_100D_Pro_Max->setTitle(QCoreApplication::translate("MainWindow", "Paint 100D Pro Max", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
