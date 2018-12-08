/********************************************************************************
** Form generated from reading UI file 'navtechsetup.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVTECHSETUP_H
#define UI_NAVTECHSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_navtechsetup
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *topLabel;
    QListWidget *serversListWidget;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *getInfoButton;
    QPushButton *removeButton;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *addServerText;
    QPushButton *addNewButton;
    QPushButton *saveButton;

    void setupUi(QDialog *navtechsetup)
    {
        if (navtechsetup->objectName().isEmpty())
            navtechsetup->setObjectName(QStringLiteral("navtechsetup"));
        navtechsetup->resize(614, 348);
        verticalLayoutWidget = new QWidget(navtechsetup);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 591, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(15, 15, 15, 15);
        topLabel = new QLabel(verticalLayoutWidget);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topLabel->sizePolicy().hasHeightForWidth());
        topLabel->setSizePolicy(sizePolicy);
        topLabel->setMinimumSize(QSize(0, 0));
        topLabel->setMaximumSize(QSize(16777215, 16777215));
        topLabel->setWordWrap(true);

        verticalLayout->addWidget(topLabel);

        serversListWidget = new QListWidget(verticalLayoutWidget);
        serversListWidget->setObjectName(QStringLiteral("serversListWidget"));
        serversListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        serversListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        serversListWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);

        verticalLayout->addWidget(serversListWidget);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        getInfoButton = new QPushButton(verticalLayoutWidget);
        getInfoButton->setObjectName(QStringLiteral("getInfoButton"));

        horizontalLayout->addWidget(getInfoButton);

        removeButton = new QPushButton(verticalLayoutWidget);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        horizontalLayout->addWidget(removeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        addServerText = new QLineEdit(verticalLayoutWidget);
        addServerText->setObjectName(QStringLiteral("addServerText"));

        horizontalLayout->addWidget(addServerText);

        addNewButton = new QPushButton(verticalLayoutWidget);
        addNewButton->setObjectName(QStringLiteral("addNewButton"));

        horizontalLayout->addWidget(addNewButton);

        saveButton = new QPushButton(verticalLayoutWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout->addWidget(saveButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(navtechsetup);

        QMetaObject::connectSlotsByName(navtechsetup);
    } // setupUi

    void retranslateUi(QDialog *navtechsetup)
    {
        navtechsetup->setWindowTitle(QApplication::translate("navtechsetup", "Dialog", 0));
        topLabel->setText(QApplication::translate("navtechsetup", "List of Navtech servers currently configured in your wallet to process private payments:", 0));
        label->setText(QApplication::translate("navtechsetup", "When performing a private payment, a random server from this list will be used.", 0));
        getInfoButton->setText(QApplication::translate("navtechsetup", "Get Info", 0));
        removeButton->setText(QApplication::translate("navtechsetup", "Remove", 0));
        addServerText->setPlaceholderText(QApplication::translate("navtechsetup", "Server address", 0));
        addNewButton->setText(QApplication::translate("navtechsetup", "Add new", 0));
        saveButton->setText(QApplication::translate("navtechsetup", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class navtechsetup: public Ui_navtechsetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVTECHSETUP_H
