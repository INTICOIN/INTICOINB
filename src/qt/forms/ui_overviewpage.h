/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "listview.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *labelWalletStatus;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *labelBalance;
    QLabel *label_7;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QLabel *label_8;
    QLabel *labelTotal;
    QLabel *labelStaking;
    QLabel *labelStakingText;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *unlockStakingButton;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLabel *label24hStakingStats;
    QLabel *label_13;
    QLabel *label7dStakingStats;
    QLabel *label30dStakingStats;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label1yStakingStats;
    QLabel *label_16;
    QLabel *labelallStakingStats;
    QSpacerItem *horizontalSpacer_7;
    QLabel *stakingStatusLabel;
    QLabel *votingStatusLabel;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_6;
    ListView *listTransactions;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *statusTitle;
    QLabel *statusTitleConnections;
    QLabel *statusTitleBlocks;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(820, 634);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OverviewPage->sizePolicy().hasHeightForWidth());
        OverviewPage->setSizePolicy(sizePolicy);
        OverviewPage->setMaximumSize(QSize(16777215, 16777215));
        OverviewPage->setStyleSheet(QStringLiteral(""));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        topLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_2->setContentsMargins(16, 7, 16, 16);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(OverviewPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        QFont font;
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: #616998; text-transform: uppercase; font-size: 16px"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        labelWalletStatus = new QPushButton(OverviewPage);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setMaximumSize(QSize(22, 22));
        labelWalletStatus->setBaseSize(QSize(22, 22));
        labelWalletStatus->setStyleSheet(QStringLiteral("border: 0"));
        labelWalletStatus->setFlat(true);

        horizontalLayout_3->addWidget(labelWalletStatus);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetNoConstraint);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setVerticalSpacing(-1);
        label_5 = new QLabel(OverviewPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(70, 17));
        label_5->setMaximumSize(QSize(70, 17));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color: #727272"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        labelBalance = new QLabel(OverviewPage);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font1);
        labelBalance->setStyleSheet(QStringLiteral("color: #727272"));
        labelBalance->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelBalance);

        label_7 = new QLabel(OverviewPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(70, 17));
        label_7->setMaximumSize(QSize(70, 17));
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("color: #727272"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        labelUnconfirmed = new QLabel(OverviewPage);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setStyleSheet(QStringLiteral("color: #727272"));
        labelUnconfirmed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(OverviewPage);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));
        sizePolicy1.setHeightForWidth(labelImmatureText->sizePolicy().hasHeightForWidth());
        labelImmatureText->setSizePolicy(sizePolicy1);
        labelImmatureText->setMinimumSize(QSize(70, 17));
        labelImmatureText->setMaximumSize(QSize(70, 17));
        labelImmatureText->setFont(font1);
        labelImmatureText->setStyleSheet(QStringLiteral("color: #727272"));
        labelImmatureText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(OverviewPage);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setStyleSheet(QStringLiteral("color: #727272"));
        labelImmature->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, labelImmature);

        label_8 = new QLabel(OverviewPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setMinimumSize(QSize(70, 17));
        label_8->setMaximumSize(QSize(70, 17));
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("color: #727272"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        labelTotal = new QLabel(OverviewPage);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font1);
        labelTotal->setStyleSheet(QStringLiteral("color: #727272"));
        labelTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelTotal);

        labelStaking = new QLabel(OverviewPage);
        labelStaking->setObjectName(QStringLiteral("labelStaking"));
        labelStaking->setFont(font1);
        labelStaking->setStyleSheet(QStringLiteral("color: #727272"));
        labelStaking->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelStaking);

        labelStakingText = new QLabel(OverviewPage);
        labelStakingText->setObjectName(QStringLiteral("labelStakingText"));
        sizePolicy1.setHeightForWidth(labelStakingText->sizePolicy().hasHeightForWidth());
        labelStakingText->setSizePolicy(sizePolicy1);
        labelStakingText->setMinimumSize(QSize(70, 17));
        labelStakingText->setMaximumSize(QSize(70, 17));
        labelStakingText->setFont(font1);
        labelStakingText->setStyleSheet(QStringLiteral("color: #727272"));
        labelStakingText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelStakingText);


        horizontalLayout_4->addLayout(formLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_11 = new QLabel(OverviewPage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral("color: #616998; text-transform: uppercase; font-size: 16px"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_11);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        unlockStakingButton = new QPushButton(OverviewPage);
        unlockStakingButton->setObjectName(QStringLiteral("unlockStakingButton"));
        unlockStakingButton->setMinimumSize(QSize(26, 26));
        unlockStakingButton->setMaximumSize(QSize(26, 26));
        unlockStakingButton->setStyleSheet(QStringLiteral("border: 0"));

        horizontalLayout_7->addWidget(unlockStakingButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10 = new QLabel(OverviewPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMinimumSize(QSize(70, 17));
        label_10->setMaximumSize(QSize(70, 17));
        label_10->setFont(font1);
        label_10->setStyleSheet(QStringLiteral("color: #727272"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        label24hStakingStats = new QLabel(OverviewPage);
        label24hStakingStats->setObjectName(QStringLiteral("label24hStakingStats"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label24hStakingStats->setFont(font2);
        label24hStakingStats->setStyleSheet(QStringLiteral("color: #727272"));
        label24hStakingStats->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, label24hStakingStats);

        label_13 = new QLabel(OverviewPage);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(70, 17));
        label_13->setMaximumSize(QSize(70, 17));
        label_13->setFont(font2);
        label_13->setStyleSheet(QStringLiteral("color: #727272"));
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_13);

        label7dStakingStats = new QLabel(OverviewPage);
        label7dStakingStats->setObjectName(QStringLiteral("label7dStakingStats"));
        label7dStakingStats->setFont(font2);
        label7dStakingStats->setStyleSheet(QStringLiteral("color: #727272"));
        label7dStakingStats->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, label7dStakingStats);

        label30dStakingStats = new QLabel(OverviewPage);
        label30dStakingStats->setObjectName(QStringLiteral("label30dStakingStats"));
        label30dStakingStats->setFont(font2);
        label30dStakingStats->setStyleSheet(QStringLiteral("color: #727272"));
        label30dStakingStats->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, label30dStakingStats);

        label_14 = new QLabel(OverviewPage);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setMinimumSize(QSize(70, 17));
        label_14->setMaximumSize(QSize(70, 17));
        label_14->setFont(font2);
        label_14->setStyleSheet(QStringLiteral("color: #727272"));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(OverviewPage);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setMinimumSize(QSize(70, 17));
        label_15->setMaximumSize(QSize(70, 17));
        label_15->setFont(font2);
        label_15->setStyleSheet(QStringLiteral("color: #727272"));
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_15);

        label1yStakingStats = new QLabel(OverviewPage);
        label1yStakingStats->setObjectName(QStringLiteral("label1yStakingStats"));
        label1yStakingStats->setFont(font2);
        label1yStakingStats->setStyleSheet(QStringLiteral("color: #727272"));
        label1yStakingStats->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, label1yStakingStats);

        label_16 = new QLabel(OverviewPage);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        label_16->setMinimumSize(QSize(70, 17));
        label_16->setMaximumSize(QSize(70, 17));
        label_16->setFont(font2);
        label_16->setStyleSheet(QStringLiteral("color: #727272"));
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_16);

        labelallStakingStats = new QLabel(OverviewPage);
        labelallStakingStats->setObjectName(QStringLiteral("labelallStakingStats"));
        labelallStakingStats->setFont(font2);
        labelallStakingStats->setStyleSheet(QStringLiteral("color: #727272"));
        labelallStakingStats->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, labelallStakingStats);


        horizontalLayout_6->addLayout(formLayout_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_6);

        stakingStatusLabel = new QLabel(OverviewPage);
        stakingStatusLabel->setObjectName(QStringLiteral("stakingStatusLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stakingStatusLabel->sizePolicy().hasHeightForWidth());
        stakingStatusLabel->setSizePolicy(sizePolicy2);
        stakingStatusLabel->setMinimumSize(QSize(235, 0));
        stakingStatusLabel->setMaximumSize(QSize(235, 16777215));
        stakingStatusLabel->setStyleSheet(QStringLiteral("color: #616998;  font-size: 13px; margin-top:6px"));
        stakingStatusLabel->setWordWrap(true);

        verticalLayout_2->addWidget(stakingStatusLabel);

        votingStatusLabel = new QLabel(OverviewPage);
        votingStatusLabel->setObjectName(QStringLiteral("votingStatusLabel"));
        sizePolicy2.setHeightForWidth(votingStatusLabel->sizePolicy().hasHeightForWidth());
        votingStatusLabel->setSizePolicy(sizePolicy2);
        votingStatusLabel->setMinimumSize(QSize(235, 0));
        votingStatusLabel->setMaximumSize(QSize(235, 16777215));
        votingStatusLabel->setStyleSheet(QStringLiteral("color: #616998;  font-size: 13px; margin-top:6px"));
        votingStatusLabel->setWordWrap(true);

        verticalLayout_2->addWidget(votingStatusLabel);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(16, 7, 16, 16);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_12 = new QLabel(OverviewPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);
        label_12->setMaximumSize(QSize(16777215, 19));
        label_12->setFont(font);
        label_12->setStyleSheet(QStringLiteral("color: #616998; text-transform: uppercase; font-size: 16px;"));

        horizontalLayout_5->addWidget(label_12);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_4->addItem(verticalSpacer_6);

        listTransactions = new ListView(OverviewPage);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("background: transparent;border:0"));

        verticalLayout_4->addWidget(listTransactions);


        verticalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        topLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        statusTitle = new QLabel(OverviewPage);
        statusTitle->setObjectName(QStringLiteral("statusTitle"));
        sizePolicy1.setHeightForWidth(statusTitle->sizePolicy().hasHeightForWidth());
        statusTitle->setSizePolicy(sizePolicy1);
        statusTitle->setMinimumSize(QSize(0, 60));
        QFont font3;
        font3.setPointSize(12);
        statusTitle->setFont(font3);
        statusTitle->setStyleSheet(QStringLiteral("color: #452f6a"));
        statusTitle->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(statusTitle);

        statusTitleConnections = new QLabel(OverviewPage);
        statusTitleConnections->setObjectName(QStringLiteral("statusTitleConnections"));
        sizePolicy1.setHeightForWidth(statusTitleConnections->sizePolicy().hasHeightForWidth());
        statusTitleConnections->setSizePolicy(sizePolicy1);
        statusTitleConnections->setFont(font3);
        statusTitleConnections->setVisible(false);
        statusTitleConnections->setStyleSheet(QStringLiteral("color: #2922a8"));

        horizontalLayout->addWidget(statusTitleConnections);

        statusTitleBlocks = new QLabel(OverviewPage);
        statusTitleBlocks->setObjectName(QStringLiteral("statusTitleBlocks"));
        sizePolicy1.setHeightForWidth(statusTitleBlocks->sizePolicy().hasHeightForWidth());
        statusTitleBlocks->setSizePolicy(sizePolicy1);
        statusTitleBlocks->setFont(font3);
        statusTitleBlocks->setVisible(false);
        statusTitleBlocks->setStyleSheet(QStringLiteral("color: #452f6a"));

        horizontalLayout->addWidget(statusTitleBlocks);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        topLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Fixed);

        topLayout->addItem(verticalSpacer_3);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0));
        label_4->setText(QApplication::translate("OverviewPage", "Balance", 0));
        labelWalletStatus->setText(QString());
        label_5->setText(QApplication::translate("OverviewPage", "Available:", 0));
        labelBalance->setText(QApplication::translate("OverviewPage", "TextLabel", 0));
        label_7->setText(QApplication::translate("OverviewPage", "Pending:", 0));
        labelUnconfirmed->setText(QApplication::translate("OverviewPage", "TextLabel", 0));
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature", 0));
        labelImmature->setText(QApplication::translate("OverviewPage", "TextLabel", 0));
        label_8->setText(QApplication::translate("OverviewPage", "Total", 0));
        labelTotal->setText(QApplication::translate("OverviewPage", "labelTotal", 0));
        labelStaking->setText(QApplication::translate("OverviewPage", "TextLabel", 0));
        labelStakingText->setText(QApplication::translate("OverviewPage", "Staking", 0));
        label_11->setText(QApplication::translate("OverviewPage", "Staking", 0));
        unlockStakingButton->setText(QString());
        label_10->setText(QApplication::translate("OverviewPage", "24H:", 0));
        label24hStakingStats->setText(QApplication::translate("OverviewPage", "87 312.312 123 NAV", 0));
        label_13->setText(QApplication::translate("OverviewPage", "7D", 0));
        label7dStakingStats->setText(QApplication::translate("OverviewPage", "1 312.312 NAV", 0));
        label30dStakingStats->setText(QApplication::translate("OverviewPage", "132 431.41 NAV", 0));
        label_14->setText(QApplication::translate("OverviewPage", "30D", 0));
        label_15->setText(QApplication::translate("OverviewPage", "1Y", 0));
        label1yStakingStats->setText(QApplication::translate("OverviewPage", "132 431.41 NAV", 0));
        label_16->setText(QApplication::translate("OverviewPage", "ALL", 0));
        labelallStakingStats->setText(QApplication::translate("OverviewPage", "132 431.41 NAV", 0));
        stakingStatusLabel->setText(QString());
        votingStatusLabel->setText(QString());
        label_12->setText(QApplication::translate("OverviewPage", "Transactions", 0));
        statusTitle->setText(QApplication::translate("OverviewPage", "Connecting to INTICOIN network...", 0));
        statusTitleConnections->setText(QApplication::translate("OverviewPage", "32 active connections.", 0));
        statusTitleBlocks->setText(QApplication::translate("OverviewPage", "Last block: 800000", 0));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
