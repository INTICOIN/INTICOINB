/********************************************************************************
** Form generated from reading UI file 'intro.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRO_H
#define UI_INTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Intro
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *welcomeLabel;
    QSpacerItem *verticalSpacer_4;
    QLabel *storageLabel;
    QLabel *sizeWarningLabel;
    QRadioButton *dataDirDefault;
    QRadioButton *dataDirCustom;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *dataDirectory;
    QPushButton *ellipsisButton;
    QLabel *freeSpace;
    QSpacerItem *verticalSpacer_2;
    QLabel *errorMessage;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Intro)
    {
        if (Intro->objectName().isEmpty())
            Intro->setObjectName(QStringLiteral("Intro"));
        Intro->resize(674, 321);
        Intro->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(Intro);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        welcomeLabel = new QLabel(Intro);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        welcomeLabel->setStyleSheet(QStringLiteral("QLabel { font-style:italic; }"));
        welcomeLabel->setWordWrap(true);

        verticalLayout->addWidget(welcomeLabel);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_4);

        storageLabel = new QLabel(Intro);
        storageLabel->setObjectName(QStringLiteral("storageLabel"));
        storageLabel->setWordWrap(true);

        verticalLayout->addWidget(storageLabel);

        sizeWarningLabel = new QLabel(Intro);
        sizeWarningLabel->setObjectName(QStringLiteral("sizeWarningLabel"));
        sizeWarningLabel->setWordWrap(true);

        verticalLayout->addWidget(sizeWarningLabel);

        dataDirDefault = new QRadioButton(Intro);
        dataDirDefault->setObjectName(QStringLiteral("dataDirDefault"));

        verticalLayout->addWidget(dataDirDefault);

        dataDirCustom = new QRadioButton(Intro);
        dataDirCustom->setObjectName(QStringLiteral("dataDirCustom"));

        verticalLayout->addWidget(dataDirCustom);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dataDirectory = new QLineEdit(Intro);
        dataDirectory->setObjectName(QStringLiteral("dataDirectory"));
        dataDirectory->setStyleSheet(QLatin1String("background: #fff; border-radius: 4px; border: 1px solid #000; padding:2px\n"
""));

        horizontalLayout_2->addWidget(dataDirectory);

        ellipsisButton = new QPushButton(Intro);
        ellipsisButton->setObjectName(QStringLiteral("ellipsisButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ellipsisButton->sizePolicy().hasHeightForWidth());
        ellipsisButton->setSizePolicy(sizePolicy);
        ellipsisButton->setMaximumSize(QSize(30, 16777215));
        ellipsisButton->setText(QString::fromUtf8("\342\200\246"));
        ellipsisButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(ellipsisButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        freeSpace = new QLabel(Intro);
        freeSpace->setObjectName(QStringLiteral("freeSpace"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(freeSpace->sizePolicy().hasHeightForWidth());
        freeSpace->setSizePolicy(sizePolicy1);
        freeSpace->setWordWrap(true);

        verticalLayout_2->addWidget(freeSpace);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        errorMessage = new QLabel(Intro);
        errorMessage->setObjectName(QStringLiteral("errorMessage"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(errorMessage->sizePolicy().hasHeightForWidth());
        errorMessage->setSizePolicy(sizePolicy2);
        errorMessage->setMaximumSize(QSize(16777215, 1));
        errorMessage->setTextFormat(Qt::RichText);
        errorMessage->setWordWrap(true);

        verticalLayout_2->addWidget(errorMessage);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(Intro);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QStringLiteral(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Intro);
        QObject::connect(buttonBox, SIGNAL(accepted()), Intro, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Intro, SLOT(reject()));

        QMetaObject::connectSlotsByName(Intro);
    } // setupUi

    void retranslateUi(QDialog *Intro)
    {
        Intro->setWindowTitle(QApplication::translate("Intro", "Welcome", 0));
        welcomeLabel->setText(QApplication::translate("Intro", "Welcome to %1.", 0));
        storageLabel->setText(QApplication::translate("Intro", "As this is the first time %1 is launched, there are still a few setup steps which need to be accomplished.", 0));
        sizeWarningLabel->setText(QApplication::translate("Intro", "%1 will download and store a copy of the INTICOIN block chain. At least %2GB of data will be stored in your computer, and it will grow over time. A wallet is needed to store your coins.", 0));
        dataDirDefault->setText(QApplication::translate("Intro", "Create a new wallet.", 0));
        dataDirCustom->setText(QApplication::translate("Intro", "Import an old 3.x wallet:", 0));
        freeSpace->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Intro: public Ui_Intro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRO_H
