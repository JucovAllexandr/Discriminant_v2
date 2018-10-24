/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_a;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_b;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_c;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_x1;
    QLabel *label_6;
    QLineEdit *lineEdit_x2;
    QPushButton *pushButton_calc;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(352, 90);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        doubleSpinBox_a = new QDoubleSpinBox(Widget);
        doubleSpinBox_a->setObjectName(QStringLiteral("doubleSpinBox_a"));

        horizontalLayout->addWidget(doubleSpinBox_a);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        doubleSpinBox_b = new QDoubleSpinBox(Widget);
        doubleSpinBox_b->setObjectName(QStringLiteral("doubleSpinBox_b"));

        horizontalLayout->addWidget(doubleSpinBox_b);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        doubleSpinBox_c = new QDoubleSpinBox(Widget);
        doubleSpinBox_c->setObjectName(QStringLiteral("doubleSpinBox_c"));

        horizontalLayout->addWidget(doubleSpinBox_c);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_x1 = new QLineEdit(Widget);
        lineEdit_x1->setObjectName(QStringLiteral("lineEdit_x1"));

        horizontalLayout_4->addWidget(lineEdit_x1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_x2 = new QLineEdit(Widget);
        lineEdit_x2->setObjectName(QStringLiteral("lineEdit_x2"));

        horizontalLayout_4->addWidget(lineEdit_x2);

        pushButton_calc = new QPushButton(Widget);
        pushButton_calc->setObjectName(QStringLiteral("pushButton_calc"));

        horizontalLayout_4->addWidget(pushButton_calc);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "a:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "b:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "c:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\320\236\321\202\320\262\320\265\321\202:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "x1 = ", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "x2 = ", Q_NULLPTR));
        pushButton_calc->setText(QApplication::translate("Widget", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
