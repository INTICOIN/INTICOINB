/********************************************************************************
** Form generated from reading UI file 'sendcoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSDIALOG_H
#define UI_SENDCOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "INTICOINamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameCoinControl;
    QVBoxLayout *verticalLayoutCoinControl2;
    QVBoxLayout *verticalLayoutCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl2;
    QSpacerItem *horizontalSpacerCoinControl;
    QWidget *widgetCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl5;
    QHBoxLayout *horizontalLayoutCoinControl3;
    QFormLayout *formLayoutCoinControl1;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QLabel *labelCoinControlBytesText;
    QLabel *labelCoinControlBytes;
    QFormLayout *formLayoutCoinControl2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QLabel *labelCoinControlPriorityText;
    QLabel *labelCoinControlPriority;
    QFormLayout *formLayoutCoinControl3;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QLabel *labelCoinControlLowOutputText;
    QLabel *labelCoinControlLowOutput;
    QFormLayout *formLayoutCoinControl4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QHBoxLayout *horizontalLayoutCoinControl4;
    QCheckBox *checkBoxCoinControlChange;
    QValidatedLineEdit *lineEditCoinControlChange;
    QPushButton *pushButtonCoinControl;
    QLabel *labelCoinControlAutomaticallySelected;
    QLabel *labelCoinControlInsuffFunds;
    QLabel *labelCoinControlChangeLabel;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *entries;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *sendButton;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QLabel *noNavtechLabel;
    QCheckBox *anonsendCheckbox;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QFrame *frameFee;
    QVBoxLayout *verticalLayoutFee1;
    QVBoxLayout *verticalLayoutFee2;
    QHBoxLayout *horizontalLayoutFee1;
    QPushButton *noNavtechButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *labelBalance;
    QPushButton *fullAmountBtn;
    QVBoxLayout *verticalLayoutFee7;
    QSpacerItem *verticalSpacerSmartFee;
    QSpacerItem *verticalSpacer_5;
    QFrame *frameFeeSelection;
    QVBoxLayout *verticalLayoutFee12;
    QGridLayout *gridLayoutFee;
    QVBoxLayout *verticalLayoutFee4;
    QRadioButton *radioSmartFee;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayoutFee8;
    QHBoxLayout *horizontalLayoutFee13;
    QRadioButton *radioCustomPerKilobyte;
    QRadioButton *radioCustomAtLeast;
    INTICOINAmountField *customFee;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayoutFee8;
    QCheckBox *checkBoxMinimumFee;
    QLabel *labelMinFeeWarning;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayoutFee3;
    QHBoxLayout *horizontalLayoutFee12;
    QLabel *labelSmartFee;
    QLabel *labelFeeEstimation;
    QLabel *labelSmartFee2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayoutFee9;
    QVBoxLayout *verticalLayoutFee6;
    QLabel *labelSmartFee3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayoutFee5;
    QSlider *sliderSmartFee;
    QHBoxLayout *horizontalLayoutFee10;
    QLabel *labelSmartFeeNormal;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelSmartFeeFast;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayoutFee9;
    QRadioButton *radioCustomFee;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacerFee;
    QButtonGroup *groupCustomFee;
    QButtonGroup *groupFee;

    void setupUi(QDialog *SendCoinsDialog)
    {
        if (SendCoinsDialog->objectName().isEmpty())
            SendCoinsDialog->setObjectName(QStringLiteral("SendCoinsDialog"));
        SendCoinsDialog->resize(857, 773);
        SendCoinsDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(SendCoinsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 8);
        frameCoinControl = new QFrame(SendCoinsDialog);
        frameCoinControl->setObjectName(QStringLiteral("frameCoinControl"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameCoinControl->sizePolicy().hasHeightForWidth());
        frameCoinControl->setSizePolicy(sizePolicy);
        frameCoinControl->setMaximumSize(QSize(16777215, 16777215));
        frameCoinControl->setFrameShape(QFrame::StyledPanel);
        frameCoinControl->setFrameShadow(QFrame::Sunken);
        verticalLayoutCoinControl2 = new QVBoxLayout(frameCoinControl);
        verticalLayoutCoinControl2->setSpacing(0);
        verticalLayoutCoinControl2->setObjectName(QStringLiteral("verticalLayoutCoinControl2"));
        verticalLayoutCoinControl2->setContentsMargins(0, 0, 0, 6);
        verticalLayoutCoinControl = new QVBoxLayout();
        verticalLayoutCoinControl->setSpacing(0);
        verticalLayoutCoinControl->setObjectName(QStringLiteral("verticalLayoutCoinControl"));
        verticalLayoutCoinControl->setContentsMargins(10, 10, -1, -1);
        horizontalLayoutCoinControl2 = new QHBoxLayout();
        horizontalLayoutCoinControl2->setSpacing(8);
        horizontalLayoutCoinControl2->setObjectName(QStringLiteral("horizontalLayoutCoinControl2"));
        horizontalLayoutCoinControl2->setContentsMargins(-1, -1, -1, 10);
        horizontalSpacerCoinControl = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacerCoinControl);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl2);

        widgetCoinControl = new QWidget(frameCoinControl);
        widgetCoinControl->setObjectName(QStringLiteral("widgetCoinControl"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetCoinControl->sizePolicy().hasHeightForWidth());
        widgetCoinControl->setSizePolicy(sizePolicy1);
        widgetCoinControl->setMinimumSize(QSize(0, 0));
        widgetCoinControl->setStyleSheet(QStringLiteral(""));
        horizontalLayoutCoinControl5 = new QHBoxLayout(widgetCoinControl);
        horizontalLayoutCoinControl5->setObjectName(QStringLiteral("horizontalLayoutCoinControl5"));
        horizontalLayoutCoinControl5->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutCoinControl3 = new QHBoxLayout();
        horizontalLayoutCoinControl3->setSpacing(20);
        horizontalLayoutCoinControl3->setObjectName(QStringLiteral("horizontalLayoutCoinControl3"));
        horizontalLayoutCoinControl3->setContentsMargins(-1, 0, -1, 10);
        formLayoutCoinControl1 = new QFormLayout();
        formLayoutCoinControl1->setObjectName(QStringLiteral("formLayoutCoinControl1"));
        formLayoutCoinControl1->setHorizontalSpacing(10);
        formLayoutCoinControl1->setVerticalSpacing(14);
        formLayoutCoinControl1->setContentsMargins(10, 4, 6, -1);
        labelCoinControlQuantityText = new QLabel(widgetCoinControl);
        labelCoinControlQuantityText->setObjectName(QStringLiteral("labelCoinControlQuantityText"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelCoinControlQuantityText->setFont(font);
        labelCoinControlQuantityText->setMargin(0);

        formLayoutCoinControl1->setWidget(0, QFormLayout::LabelRole, labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(widgetCoinControl);
        labelCoinControlQuantity->setObjectName(QStringLiteral("labelCoinControlQuantity"));
        labelCoinControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setText(QStringLiteral("0"));
        labelCoinControlQuantity->setMargin(0);
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(0, QFormLayout::FieldRole, labelCoinControlQuantity);

        labelCoinControlBytesText = new QLabel(widgetCoinControl);
        labelCoinControlBytesText->setObjectName(QStringLiteral("labelCoinControlBytesText"));
        labelCoinControlBytesText->setFont(font);

        formLayoutCoinControl1->setWidget(1, QFormLayout::LabelRole, labelCoinControlBytesText);

        labelCoinControlBytes = new QLabel(widgetCoinControl);
        labelCoinControlBytes->setObjectName(QStringLiteral("labelCoinControlBytes"));
        labelCoinControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlBytes->setText(QStringLiteral("0"));
        labelCoinControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(1, QFormLayout::FieldRole, labelCoinControlBytes);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl1);

        formLayoutCoinControl2 = new QFormLayout();
        formLayoutCoinControl2->setObjectName(QStringLiteral("formLayoutCoinControl2"));
        formLayoutCoinControl2->setHorizontalSpacing(10);
        formLayoutCoinControl2->setVerticalSpacing(14);
        formLayoutCoinControl2->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAmountText = new QLabel(widgetCoinControl);
        labelCoinControlAmountText->setObjectName(QStringLiteral("labelCoinControlAmountText"));
        labelCoinControlAmountText->setFont(font);
        labelCoinControlAmountText->setMargin(0);

        formLayoutCoinControl2->setWidget(0, QFormLayout::LabelRole, labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(widgetCoinControl);
        labelCoinControlAmount->setObjectName(QStringLiteral("labelCoinControlAmount"));
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setText(QStringLiteral("0.00 NAV"));
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(0, QFormLayout::FieldRole, labelCoinControlAmount);

        labelCoinControlPriorityText = new QLabel(widgetCoinControl);
        labelCoinControlPriorityText->setObjectName(QStringLiteral("labelCoinControlPriorityText"));
        labelCoinControlPriorityText->setFont(font);

        formLayoutCoinControl2->setWidget(1, QFormLayout::LabelRole, labelCoinControlPriorityText);

        labelCoinControlPriority = new QLabel(widgetCoinControl);
        labelCoinControlPriority->setObjectName(QStringLiteral("labelCoinControlPriority"));
        labelCoinControlPriority->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlPriority->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlPriority->setText(QStringLiteral("medium"));
        labelCoinControlPriority->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(1, QFormLayout::FieldRole, labelCoinControlPriority);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl2);

        formLayoutCoinControl3 = new QFormLayout();
        formLayoutCoinControl3->setObjectName(QStringLiteral("formLayoutCoinControl3"));
        formLayoutCoinControl3->setHorizontalSpacing(10);
        formLayoutCoinControl3->setVerticalSpacing(14);
        formLayoutCoinControl3->setContentsMargins(6, 4, 6, -1);
        labelCoinControlFeeText = new QLabel(widgetCoinControl);
        labelCoinControlFeeText->setObjectName(QStringLiteral("labelCoinControlFeeText"));
        labelCoinControlFeeText->setFont(font);
        labelCoinControlFeeText->setMargin(0);

        formLayoutCoinControl3->setWidget(0, QFormLayout::LabelRole, labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(widgetCoinControl);
        labelCoinControlFee->setObjectName(QStringLiteral("labelCoinControlFee"));
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setText(QStringLiteral("0.00 NAV"));
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(0, QFormLayout::FieldRole, labelCoinControlFee);

        labelCoinControlLowOutputText = new QLabel(widgetCoinControl);
        labelCoinControlLowOutputText->setObjectName(QStringLiteral("labelCoinControlLowOutputText"));
        labelCoinControlLowOutputText->setFont(font);

        formLayoutCoinControl3->setWidget(1, QFormLayout::LabelRole, labelCoinControlLowOutputText);

        labelCoinControlLowOutput = new QLabel(widgetCoinControl);
        labelCoinControlLowOutput->setObjectName(QStringLiteral("labelCoinControlLowOutput"));
        labelCoinControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlLowOutput->setText(QStringLiteral("no"));
        labelCoinControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(1, QFormLayout::FieldRole, labelCoinControlLowOutput);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl3);

        formLayoutCoinControl4 = new QFormLayout();
        formLayoutCoinControl4->setObjectName(QStringLiteral("formLayoutCoinControl4"));
        formLayoutCoinControl4->setHorizontalSpacing(10);
        formLayoutCoinControl4->setVerticalSpacing(14);
        formLayoutCoinControl4->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAfterFeeText = new QLabel(widgetCoinControl);
        labelCoinControlAfterFeeText->setObjectName(QStringLiteral("labelCoinControlAfterFeeText"));
        labelCoinControlAfterFeeText->setFont(font);
        labelCoinControlAfterFeeText->setMargin(0);

        formLayoutCoinControl4->setWidget(0, QFormLayout::LabelRole, labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(widgetCoinControl);
        labelCoinControlAfterFee->setObjectName(QStringLiteral("labelCoinControlAfterFee"));
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setText(QStringLiteral("0.00 NAV"));
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(0, QFormLayout::FieldRole, labelCoinControlAfterFee);

        labelCoinControlChangeText = new QLabel(widgetCoinControl);
        labelCoinControlChangeText->setObjectName(QStringLiteral("labelCoinControlChangeText"));
        labelCoinControlChangeText->setFont(font);

        formLayoutCoinControl4->setWidget(1, QFormLayout::LabelRole, labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(widgetCoinControl);
        labelCoinControlChange->setObjectName(QStringLiteral("labelCoinControlChange"));
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setText(QStringLiteral("0.00 NAV"));
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(1, QFormLayout::FieldRole, labelCoinControlChange);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl4);

        horizontalLayoutCoinControl3->setStretch(3, 1);

        horizontalLayoutCoinControl5->addLayout(horizontalLayoutCoinControl3);


        verticalLayoutCoinControl->addWidget(widgetCoinControl);

        horizontalLayoutCoinControl4 = new QHBoxLayout();
        horizontalLayoutCoinControl4->setSpacing(12);
        horizontalLayoutCoinControl4->setObjectName(QStringLiteral("horizontalLayoutCoinControl4"));
        horizontalLayoutCoinControl4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutCoinControl4->setContentsMargins(-1, 5, 5, -1);
        checkBoxCoinControlChange = new QCheckBox(frameCoinControl);
        checkBoxCoinControlChange->setObjectName(QStringLiteral("checkBoxCoinControlChange"));

        horizontalLayoutCoinControl4->addWidget(checkBoxCoinControlChange);

        lineEditCoinControlChange = new QValidatedLineEdit(frameCoinControl);
        lineEditCoinControlChange->setObjectName(QStringLiteral("lineEditCoinControlChange"));
        lineEditCoinControlChange->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditCoinControlChange->sizePolicy().hasHeightForWidth());
        lineEditCoinControlChange->setSizePolicy(sizePolicy2);

        horizontalLayoutCoinControl4->addWidget(lineEditCoinControlChange);

        pushButtonCoinControl = new QPushButton(frameCoinControl);
        pushButtonCoinControl->setObjectName(QStringLiteral("pushButtonCoinControl"));
        pushButtonCoinControl->setStyleSheet(QStringLiteral(""));
        pushButtonCoinControl->setAutoDefault(false);

        horizontalLayoutCoinControl4->addWidget(pushButtonCoinControl);

        labelCoinControlAutomaticallySelected = new QLabel(frameCoinControl);
        labelCoinControlAutomaticallySelected->setObjectName(QStringLiteral("labelCoinControlAutomaticallySelected"));
        labelCoinControlAutomaticallySelected->setMargin(5);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlAutomaticallySelected);

        labelCoinControlInsuffFunds = new QLabel(frameCoinControl);
        labelCoinControlInsuffFunds->setObjectName(QStringLiteral("labelCoinControlInsuffFunds"));
        labelCoinControlInsuffFunds->setFont(font);
        labelCoinControlInsuffFunds->setStyleSheet(QStringLiteral("color:red;font-weight:bold;"));
        labelCoinControlInsuffFunds->setMargin(5);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlInsuffFunds);

        labelCoinControlChangeLabel = new QLabel(frameCoinControl);
        labelCoinControlChangeLabel->setObjectName(QStringLiteral("labelCoinControlChangeLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelCoinControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeLabel->setSizePolicy(sizePolicy3);
        labelCoinControlChangeLabel->setMinimumSize(QSize(0, 0));
        labelCoinControlChangeLabel->setMargin(3);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlChangeLabel);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl4);


        verticalLayoutCoinControl2->addLayout(verticalLayoutCoinControl);


        verticalLayout->addWidget(frameCoinControl);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_12 = new QSpacerItem(60, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);

        entries = new QVBoxLayout();
        entries->setSpacing(6);
        entries->setObjectName(QStringLiteral("entries"));

        horizontalLayout_10->addLayout(entries);

        horizontalSpacer_13 = new QSpacerItem(60, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        sendButton = new QPushButton(SendCoinsDialog);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setMinimumSize(QSize(150, 0));
        QFont font1;
        font1.setPointSize(11);
        sendButton->setFont(font1);
        sendButton->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon);
        sendButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(sendButton);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        noNavtechLabel = new QLabel(SendCoinsDialog);
        noNavtechLabel->setObjectName(QStringLiteral("noNavtechLabel"));
        noNavtechLabel->setFont(font1);
        noNavtechLabel->setStyleSheet(QStringLiteral(""));

        horizontalLayout_8->addWidget(noNavtechLabel);

        anonsendCheckbox = new QCheckBox(SendCoinsDialog);
        anonsendCheckbox->setObjectName(QStringLiteral("anonsendCheckbox"));
        anonsendCheckbox->setFont(font1);
        anonsendCheckbox->setChecked(false);

        horizontalLayout_8->addWidget(anonsendCheckbox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_15);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_14);


        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_6->addItem(verticalSpacer_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout_6->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_6);

        frameFee = new QFrame(SendCoinsDialog);
        frameFee->setObjectName(QStringLiteral("frameFee"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frameFee->sizePolicy().hasHeightForWidth());
        frameFee->setSizePolicy(sizePolicy4);
        frameFee->setMaximumSize(QSize(16777215, 40));
        frameFee->setFrameShape(QFrame::StyledPanel);
        frameFee->setFrameShadow(QFrame::Sunken);
        verticalLayoutFee1 = new QVBoxLayout(frameFee);
        verticalLayoutFee1->setSpacing(0);
        verticalLayoutFee1->setObjectName(QStringLiteral("verticalLayoutFee1"));
        verticalLayoutFee1->setContentsMargins(0, 0, 0, 0);
        verticalLayoutFee2 = new QVBoxLayout();
        verticalLayoutFee2->setSpacing(0);
        verticalLayoutFee2->setObjectName(QStringLiteral("verticalLayoutFee2"));
        verticalLayoutFee2->setContentsMargins(10, 0, -1, -1);
        horizontalLayoutFee1 = new QHBoxLayout();
        horizontalLayoutFee1->setObjectName(QStringLiteral("horizontalLayoutFee1"));
        horizontalLayoutFee1->setContentsMargins(-1, -1, 7, 0);
        noNavtechButton = new QPushButton(frameFee);
        noNavtechButton->setObjectName(QStringLiteral("noNavtechButton"));
        noNavtechButton->setFont(font1);

        horizontalLayoutFee1->addWidget(noNavtechButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee1->addItem(horizontalSpacer_4);

        label = new QLabel(frameFee);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        label->setFont(font1);

        horizontalLayoutFee1->addWidget(label);

        labelBalance = new QLabel(frameFee);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        sizePolicy5.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy5);
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QStringLiteral("123.456 NAV"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayoutFee1->addWidget(labelBalance);

        fullAmountBtn = new QPushButton(frameFee);
        fullAmountBtn->setObjectName(QStringLiteral("fullAmountBtn"));
        fullAmountBtn->setCursor(QCursor(Qt::PointingHandCursor));
        fullAmountBtn->setStyleSheet(QStringLiteral("border:0;background-color:none;text-align:left;margin: 0px; text-transform: none; color: #616998; font-size: 10px; font-weight: none; text-decoration:underline; "));

        horizontalLayoutFee1->addWidget(fullAmountBtn);

        verticalLayoutFee7 = new QVBoxLayout();
        verticalLayoutFee7->setSpacing(0);
        verticalLayoutFee7->setObjectName(QStringLiteral("verticalLayoutFee7"));
        verticalSpacerSmartFee = new QSpacerItem(1, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutFee7->addItem(verticalSpacerSmartFee);

        verticalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee7->addItem(verticalSpacer_5);


        horizontalLayoutFee1->addLayout(verticalLayoutFee7);


        verticalLayoutFee2->addLayout(horizontalLayoutFee1);

        frameFeeSelection = new QFrame(frameFee);
        frameFeeSelection->setObjectName(QStringLiteral("frameFeeSelection"));
        verticalLayoutFee12 = new QVBoxLayout(frameFeeSelection);
        verticalLayoutFee12->setSpacing(0);
        verticalLayoutFee12->setObjectName(QStringLiteral("verticalLayoutFee12"));
        verticalLayoutFee12->setContentsMargins(0, 0, 0, 0);
        gridLayoutFee = new QGridLayout();
        gridLayoutFee->setObjectName(QStringLiteral("gridLayoutFee"));
        gridLayoutFee->setHorizontalSpacing(10);
        gridLayoutFee->setVerticalSpacing(4);
        gridLayoutFee->setContentsMargins(-1, 10, -1, 4);
        verticalLayoutFee4 = new QVBoxLayout();
        verticalLayoutFee4->setObjectName(QStringLiteral("verticalLayoutFee4"));
        radioSmartFee = new QRadioButton(frameFeeSelection);
        groupFee = new QButtonGroup(SendCoinsDialog);
        groupFee->setObjectName(QStringLiteral("groupFee"));
        groupFee->addButton(radioSmartFee);
        radioSmartFee->setObjectName(QStringLiteral("radioSmartFee"));
        radioSmartFee->setChecked(true);

        verticalLayoutFee4->addWidget(radioSmartFee);

        verticalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee4->addItem(verticalSpacer_2);

        verticalLayoutFee4->setStretch(1, 1);

        gridLayoutFee->addLayout(verticalLayoutFee4, 0, 0, 1, 1);

        verticalLayoutFee8 = new QVBoxLayout();
        verticalLayoutFee8->setSpacing(6);
        verticalLayoutFee8->setObjectName(QStringLiteral("verticalLayoutFee8"));
        horizontalLayoutFee13 = new QHBoxLayout();
        horizontalLayoutFee13->setObjectName(QStringLiteral("horizontalLayoutFee13"));
        radioCustomPerKilobyte = new QRadioButton(frameFeeSelection);
        groupCustomFee = new QButtonGroup(SendCoinsDialog);
        groupCustomFee->setObjectName(QStringLiteral("groupCustomFee"));
        groupCustomFee->addButton(radioCustomPerKilobyte);
        radioCustomPerKilobyte->setObjectName(QStringLiteral("radioCustomPerKilobyte"));
        radioCustomPerKilobyte->setChecked(true);

        horizontalLayoutFee13->addWidget(radioCustomPerKilobyte);

        radioCustomAtLeast = new QRadioButton(frameFeeSelection);
        groupCustomFee->addButton(radioCustomAtLeast);
        radioCustomAtLeast->setObjectName(QStringLiteral("radioCustomAtLeast"));

        horizontalLayoutFee13->addWidget(radioCustomAtLeast);

        customFee = new INTICOINAmountField(frameFeeSelection);
        customFee->setObjectName(QStringLiteral("customFee"));

        horizontalLayoutFee13->addWidget(customFee);

        horizontalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee13->addItem(horizontalSpacer_6);


        verticalLayoutFee8->addLayout(horizontalLayoutFee13);

        horizontalLayoutFee8 = new QHBoxLayout();
        horizontalLayoutFee8->setObjectName(QStringLiteral("horizontalLayoutFee8"));
        checkBoxMinimumFee = new QCheckBox(frameFeeSelection);
        checkBoxMinimumFee->setObjectName(QStringLiteral("checkBoxMinimumFee"));

        horizontalLayoutFee8->addWidget(checkBoxMinimumFee);

        labelMinFeeWarning = new QLabel(frameFeeSelection);
        labelMinFeeWarning->setObjectName(QStringLiteral("labelMinFeeWarning"));
        labelMinFeeWarning->setEnabled(true);
        labelMinFeeWarning->setMargin(5);

        horizontalLayoutFee8->addWidget(labelMinFeeWarning);

        horizontalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee8->addItem(horizontalSpacer_2);


        verticalLayoutFee8->addLayout(horizontalLayoutFee8);


        gridLayoutFee->addLayout(verticalLayoutFee8, 1, 1, 1, 1);

        verticalLayoutFee3 = new QVBoxLayout();
        verticalLayoutFee3->setSpacing(6);
        verticalLayoutFee3->setObjectName(QStringLiteral("verticalLayoutFee3"));
        verticalLayoutFee3->setContentsMargins(-1, 2, -1, -1);
        horizontalLayoutFee12 = new QHBoxLayout();
        horizontalLayoutFee12->setObjectName(QStringLiteral("horizontalLayoutFee12"));
        labelSmartFee = new QLabel(frameFeeSelection);
        labelSmartFee->setObjectName(QStringLiteral("labelSmartFee"));
        labelSmartFee->setMargin(2);

        horizontalLayoutFee12->addWidget(labelSmartFee);

        labelFeeEstimation = new QLabel(frameFeeSelection);
        labelFeeEstimation->setObjectName(QStringLiteral("labelFeeEstimation"));

        horizontalLayoutFee12->addWidget(labelFeeEstimation);

        labelSmartFee2 = new QLabel(frameFeeSelection);
        labelSmartFee2->setObjectName(QStringLiteral("labelSmartFee2"));
        labelSmartFee2->setMargin(2);

        horizontalLayoutFee12->addWidget(labelSmartFee2);

        horizontalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee12->addItem(horizontalSpacer_5);


        verticalLayoutFee3->addLayout(horizontalLayoutFee12);

        horizontalLayoutFee9 = new QHBoxLayout();
        horizontalLayoutFee9->setObjectName(QStringLiteral("horizontalLayoutFee9"));
        verticalLayoutFee6 = new QVBoxLayout();
        verticalLayoutFee6->setObjectName(QStringLiteral("verticalLayoutFee6"));
        labelSmartFee3 = new QLabel(frameFeeSelection);
        labelSmartFee3->setObjectName(QStringLiteral("labelSmartFee3"));
        labelSmartFee3->setMargin(2);

        verticalLayoutFee6->addWidget(labelSmartFee3);

        verticalSpacer_3 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee6->addItem(verticalSpacer_3);


        horizontalLayoutFee9->addLayout(verticalLayoutFee6);

        verticalLayoutFee5 = new QVBoxLayout();
        verticalLayoutFee5->setObjectName(QStringLiteral("verticalLayoutFee5"));
        verticalLayoutFee5->setContentsMargins(-1, -1, 30, -1);
        sliderSmartFee = new QSlider(frameFeeSelection);
        sliderSmartFee->setObjectName(QStringLiteral("sliderSmartFee"));
        sliderSmartFee->setMinimum(0);
        sliderSmartFee->setMaximum(24);
        sliderSmartFee->setPageStep(1);
        sliderSmartFee->setValue(0);
        sliderSmartFee->setOrientation(Qt::Horizontal);
        sliderSmartFee->setInvertedAppearance(false);
        sliderSmartFee->setInvertedControls(false);
        sliderSmartFee->setTickPosition(QSlider::NoTicks);

        verticalLayoutFee5->addWidget(sliderSmartFee);

        horizontalLayoutFee10 = new QHBoxLayout();
        horizontalLayoutFee10->setObjectName(QStringLiteral("horizontalLayoutFee10"));
        labelSmartFeeNormal = new QLabel(frameFeeSelection);
        labelSmartFeeNormal->setObjectName(QStringLiteral("labelSmartFeeNormal"));

        horizontalLayoutFee10->addWidget(labelSmartFeeNormal);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee10->addItem(horizontalSpacer_3);

        labelSmartFeeFast = new QLabel(frameFeeSelection);
        labelSmartFeeFast->setObjectName(QStringLiteral("labelSmartFeeFast"));

        horizontalLayoutFee10->addWidget(labelSmartFeeFast);


        verticalLayoutFee5->addLayout(horizontalLayoutFee10);


        horizontalLayoutFee9->addLayout(verticalLayoutFee5);


        verticalLayoutFee3->addLayout(horizontalLayoutFee9);

        verticalSpacer_4 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee3->addItem(verticalSpacer_4);

        verticalLayoutFee3->setStretch(2, 1);

        gridLayoutFee->addLayout(verticalLayoutFee3, 0, 1, 1, 1);

        verticalLayoutFee9 = new QVBoxLayout();
        verticalLayoutFee9->setObjectName(QStringLiteral("verticalLayoutFee9"));
        radioCustomFee = new QRadioButton(frameFeeSelection);
        groupFee->addButton(radioCustomFee);
        radioCustomFee->setObjectName(QStringLiteral("radioCustomFee"));

        verticalLayoutFee9->addWidget(radioCustomFee);

        verticalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee9->addItem(verticalSpacer_6);

        verticalLayoutFee9->setStretch(1, 1);

        gridLayoutFee->addLayout(verticalLayoutFee9, 1, 0, 1, 1);


        verticalLayoutFee12->addLayout(gridLayoutFee);


        verticalLayoutFee2->addWidget(frameFeeSelection);

        verticalSpacerFee = new QSpacerItem(800, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee2->addItem(verticalSpacerFee);


        verticalLayoutFee1->addLayout(verticalLayoutFee2);


        verticalLayout->addWidget(frameFee);


        retranslateUi(SendCoinsDialog);

        sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(SendCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCoinsDialog)
    {
        SendCoinsDialog->setWindowTitle(QApplication::translate("SendCoinsDialog", "Send Coins", 0));
        labelCoinControlQuantityText->setText(QApplication::translate("SendCoinsDialog", "Quantity:", 0));
        labelCoinControlBytesText->setText(QApplication::translate("SendCoinsDialog", "Bytes:", 0));
        labelCoinControlAmountText->setText(QApplication::translate("SendCoinsDialog", "Amount:", 0));
        labelCoinControlPriorityText->setText(QApplication::translate("SendCoinsDialog", "Priority:", 0));
        labelCoinControlFeeText->setText(QApplication::translate("SendCoinsDialog", "Fee:", 0));
        labelCoinControlLowOutputText->setText(QApplication::translate("SendCoinsDialog", "Dust:", 0));
        labelCoinControlAfterFeeText->setText(QApplication::translate("SendCoinsDialog", "After Fee:", 0));
        labelCoinControlChangeText->setText(QApplication::translate("SendCoinsDialog", "Change:", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxCoinControlChange->setToolTip(QApplication::translate("SendCoinsDialog", "If this is activated, but the change address is empty or invalid, change will be sent to a newly generated address.", 0));
#endif // QT_NO_TOOLTIP
        checkBoxCoinControlChange->setText(QApplication::translate("SendCoinsDialog", "Custom change address", 0));
        pushButtonCoinControl->setText(QApplication::translate("SendCoinsDialog", "Inputs...", 0));
        labelCoinControlAutomaticallySelected->setText(QApplication::translate("SendCoinsDialog", "automatically selected", 0));
        labelCoinControlInsuffFunds->setText(QApplication::translate("SendCoinsDialog", "Insufficient funds!", 0));
        labelCoinControlChangeLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        sendButton->setToolTip(QApplication::translate("SendCoinsDialog", "Confirm the send action", 0));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("SendCoinsDialog", "S&end", 0));
        noNavtechLabel->setText(QApplication::translate("SendCoinsDialog", "You don't have any NAVTech server added. ", 0));
        anonsendCheckbox->setText(QApplication::translate("SendCoinsDialog", "Private payment", 0));
        noNavtechButton->setText(QApplication::translate("SendCoinsDialog", "Manage NAVTech servers", 0));
        label->setText(QApplication::translate("SendCoinsDialog", "Balance:", 0));
        fullAmountBtn->setText(QApplication::translate("SendCoinsDialog", "Use full amount", 0));
        radioSmartFee->setText(QApplication::translate("SendCoinsDialog", "Recommended:", 0));
#ifndef QT_NO_TOOLTIP
        radioCustomPerKilobyte->setToolTip(QApplication::translate("SendCoinsDialog", "If the custom fee is set to 1000 satoshis and the transaction is only 250 bytes, then \"per kilobyte\" only pays 250 satoshis in fee, while \"total at least\" pays 1000 satoshis. For transactions bigger than a kilobyte both pay by kilobyte.", 0));
#endif // QT_NO_TOOLTIP
        radioCustomPerKilobyte->setText(QApplication::translate("SendCoinsDialog", "per kilobyte", 0));
#ifndef QT_NO_TOOLTIP
        radioCustomAtLeast->setToolTip(QApplication::translate("SendCoinsDialog", "If the custom fee is set to 1000 satoshis and the transaction is only 250 bytes, then \"per kilobyte\" only pays 250 satoshis in fee, while \"total at least\" pays 1000 satoshis. For transactions bigger than a kilobyte both pay by kilobyte.", 0));
#endif // QT_NO_TOOLTIP
        radioCustomAtLeast->setText(QApplication::translate("SendCoinsDialog", "total at least", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxMinimumFee->setToolTip(QApplication::translate("SendCoinsDialog", "Paying only the minimum fee is just fine as long as there is less transaction volume than space in the blocks. But be aware that this can end up in a never confirming transaction once there is more demand for INTICOIN transactions than the network can process.", 0));
#endif // QT_NO_TOOLTIP
        checkBoxMinimumFee->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelMinFeeWarning->setToolTip(QApplication::translate("SendCoinsDialog", "Paying only the minimum fee is just fine as long as there is less transaction volume than space in the blocks. But be aware that this can end up in a never confirming transaction once there is more demand for INTICOIN transactions than the network can process.", 0));
#endif // QT_NO_TOOLTIP
        labelMinFeeWarning->setText(QApplication::translate("SendCoinsDialog", "(read the tooltip)", 0));
        labelSmartFee->setText(QString());
        labelFeeEstimation->setText(QString());
        labelSmartFee2->setText(QApplication::translate("SendCoinsDialog", "(Smart fee not initialized yet. This usually takes a few blocks...)", 0));
        labelSmartFee3->setText(QApplication::translate("SendCoinsDialog", "Confirmation time:", 0));
        labelSmartFeeNormal->setText(QApplication::translate("SendCoinsDialog", "normal", 0));
        labelSmartFeeFast->setText(QApplication::translate("SendCoinsDialog", "fast", 0));
        radioCustomFee->setText(QApplication::translate("SendCoinsDialog", "Custom:", 0));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsDialog: public Ui_SendCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSDIALOG_H
