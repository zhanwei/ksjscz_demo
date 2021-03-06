/********************************************************************************
** Form generated from reading UI file 'KSJSCZDemoMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KSJSCZDEMOMAINWINDOW_H
#define UI_KSJSCZDEMOMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_KSJSCZDemoMainWindow
{
public:
    QGroupBox *UserInputGroupBox;
    QLabel *StaticText_1;
    QLabel *StaticText_2;
    QLabel *StaticText_ExpostureTimeRange;
    QLabel *StaticText_ExpostureLinesRange;
    QLabel *StaticText_3;
    QLabel *StaticText_4;
    QSpinBox *ExpLinesSpinBox;
    QLabel *StaticText_5;
    QLabel *StaticText_6;
    QLabel *StaticText_GainRange;
    QSpinBox *GainSpinBox;
    QGroupBox *FieldOfViewGroupBox;
    QLabel *StaticText_7;
    QLabel *StaticText_8;
    QLabel *StaticText_9;
    QLabel *StaticText_10;
    QSpinBox *ColStartSpinBox;
    QSpinBox *ColSizeSpinBox;
    QSpinBox *RowStartSpinBox;
    QSpinBox *RowSizeSpinBox;
    QPushButton *SetFovPushButton;
    QDoubleSpinBox *ExpTimeSpinBox;
    QComboBox *TriggerModeComBox;
    QLabel *StaticText_11;
    QLabel *StaticText_Version;
    QPushButton *StartCapturePushButton;
    QLabel *StaticText_12;
    QSpinBox *TriggerDelaySpinBox;
    QLabel *StaticText_13;
    QLabel *StaticText_TriggerDelay;
    QLabel *StaticText_Count;
    QGroupBox *groupBox;
    QCheckBox *ParseQRCODECheckBox;
    QCheckBox *ParseUPCECheckBox;
    QCheckBox *ParsePDF417CheckBox;
    QCheckBox *ParseEAN8CheckBox;
    QCheckBox *ParseISBN13CheckBox;
    QCheckBox *ParseUPCACheckBox;
    QCheckBox *ParseCODE39CheckBox;
    QCheckBox *ParseISBN10CheckBox;
    QCheckBox *ParseCODE128CheckBox;
    QCheckBox *ParseEAN13CheckBox;
    QCheckBox *ParseI25CheckBox;
    QSpinBox *DensitySpinBox;
    QLabel *StaticText_14;
    QLabel *StaticText_Zbar;
    QCheckBox *ProcessDataCheckBox;
    QCheckBox *MirrorCheckBox;
    QLabel *StaticText_FPS;
    QGroupBox *RegisterGroupBox;
    QLabel *StaticText_16;
    QLabel *StaticText_17;
    QPushButton *ReadRegPushButton;
    QPushButton *WriteRegPushButton;
    QLineEdit *LineEdit_RegValue;
    QLineEdit *LineEdit_RegAddress;
    QGroupBox *GPIO;
    QCheckBox *ALedCheckBox;
    QCheckBox *BLedCheckBox;
    QCheckBox *IOOUT1CheckBox;
    QCheckBox *IOOUT2CheckBox;
    QCheckBox *IOOUT3CheckBox;
    QPushButton *ReadGpioPushButton;
    QCheckBox *IOIN1CheckBox;
    QCheckBox *IOIN2CheckBox;
    QCheckBox *IOIN3CheckBox;
    QCheckBox *FlipCheckBox;
    QLabel *StaticText_Main;

    void setupUi(QDialog *KSJSCZDemoMainWindow)
    {
        if (KSJSCZDemoMainWindow->objectName().isEmpty())
            KSJSCZDemoMainWindow->setObjectName(QStringLiteral("KSJSCZDemoMainWindow"));
        KSJSCZDemoMainWindow->resize(1266, 795);
        UserInputGroupBox = new QGroupBox(KSJSCZDemoMainWindow);
        UserInputGroupBox->setObjectName(QStringLiteral("UserInputGroupBox"));
        UserInputGroupBox->setGeometry(QRect(836, 2, 425, 711));
        StaticText_1 = new QLabel(UserInputGroupBox);
        StaticText_1->setObjectName(QStringLiteral("StaticText_1"));
        StaticText_1->setGeometry(QRect(8, 112, 115, 16));
        StaticText_2 = new QLabel(UserInputGroupBox);
        StaticText_2->setObjectName(QStringLiteral("StaticText_2"));
        StaticText_2->setGeometry(QRect(200, 114, 69, 16));
        StaticText_2->setFrameShape(QFrame::NoFrame);
        StaticText_ExpostureTimeRange = new QLabel(UserInputGroupBox);
        StaticText_ExpostureTimeRange->setObjectName(QStringLiteral("StaticText_ExpostureTimeRange"));
        StaticText_ExpostureTimeRange->setGeometry(QRect(278, 116, 133, 16));
        StaticText_ExpostureTimeRange->setFrameShape(QFrame::StyledPanel);
        StaticText_ExpostureLinesRange = new QLabel(UserInputGroupBox);
        StaticText_ExpostureLinesRange->setObjectName(QStringLiteral("StaticText_ExpostureLinesRange"));
        StaticText_ExpostureLinesRange->setGeometry(QRect(278, 84, 133, 16));
        StaticText_ExpostureLinesRange->setFrameShape(QFrame::StyledPanel);
        StaticText_3 = new QLabel(UserInputGroupBox);
        StaticText_3->setObjectName(QStringLiteral("StaticText_3"));
        StaticText_3->setGeometry(QRect(200, 82, 69, 16));
        StaticText_3->setFrameShape(QFrame::NoFrame);
        StaticText_4 = new QLabel(UserInputGroupBox);
        StaticText_4->setObjectName(QStringLiteral("StaticText_4"));
        StaticText_4->setGeometry(QRect(8, 80, 101, 16));
        ExpLinesSpinBox = new QSpinBox(UserInputGroupBox);
        ExpLinesSpinBox->setObjectName(QStringLiteral("ExpLinesSpinBox"));
        ExpLinesSpinBox->setEnabled(true);
        ExpLinesSpinBox->setGeometry(QRect(126, 78, 63, 25));
        ExpLinesSpinBox->setReadOnly(false);
        ExpLinesSpinBox->setMinimum(2);
        ExpLinesSpinBox->setMaximum(99999);
        StaticText_5 = new QLabel(UserInputGroupBox);
        StaticText_5->setObjectName(QStringLiteral("StaticText_5"));
        StaticText_5->setGeometry(QRect(8, 140, 115, 16));
        StaticText_6 = new QLabel(UserInputGroupBox);
        StaticText_6->setObjectName(QStringLiteral("StaticText_6"));
        StaticText_6->setGeometry(QRect(200, 142, 69, 16));
        StaticText_6->setFrameShape(QFrame::NoFrame);
        StaticText_GainRange = new QLabel(UserInputGroupBox);
        StaticText_GainRange->setObjectName(QStringLiteral("StaticText_GainRange"));
        StaticText_GainRange->setGeometry(QRect(278, 144, 133, 16));
        StaticText_GainRange->setFrameShape(QFrame::StyledPanel);
        GainSpinBox = new QSpinBox(UserInputGroupBox);
        GainSpinBox->setObjectName(QStringLiteral("GainSpinBox"));
        GainSpinBox->setGeometry(QRect(126, 138, 63, 25));
        GainSpinBox->setMaximum(99999);
        FieldOfViewGroupBox = new QGroupBox(UserInputGroupBox);
        FieldOfViewGroupBox->setObjectName(QStringLiteral("FieldOfViewGroupBox"));
        FieldOfViewGroupBox->setGeometry(QRect(8, 198, 407, 83));
        StaticText_7 = new QLabel(FieldOfViewGroupBox);
        StaticText_7->setObjectName(QStringLiteral("StaticText_7"));
        StaticText_7->setGeometry(QRect(24, 24, 65, 16));
        StaticText_7->setFrameShape(QFrame::NoFrame);
        StaticText_8 = new QLabel(FieldOfViewGroupBox);
        StaticText_8->setObjectName(QStringLiteral("StaticText_8"));
        StaticText_8->setGeometry(QRect(24, 54, 65, 16));
        StaticText_8->setFrameShape(QFrame::NoFrame);
        StaticText_9 = new QLabel(FieldOfViewGroupBox);
        StaticText_9->setObjectName(QStringLiteral("StaticText_9"));
        StaticText_9->setGeometry(QRect(186, 54, 65, 16));
        StaticText_9->setFrameShape(QFrame::NoFrame);
        StaticText_10 = new QLabel(FieldOfViewGroupBox);
        StaticText_10->setObjectName(QStringLiteral("StaticText_10"));
        StaticText_10->setGeometry(QRect(186, 24, 65, 16));
        StaticText_10->setFrameShape(QFrame::NoFrame);
        ColStartSpinBox = new QSpinBox(FieldOfViewGroupBox);
        ColStartSpinBox->setObjectName(QStringLiteral("ColStartSpinBox"));
        ColStartSpinBox->setGeometry(QRect(96, 20, 77, 25));
        ColStartSpinBox->setMaximum(1280);
        ColSizeSpinBox = new QSpinBox(FieldOfViewGroupBox);
        ColSizeSpinBox->setObjectName(QStringLiteral("ColSizeSpinBox"));
        ColSizeSpinBox->setGeometry(QRect(96, 50, 77, 25));
        ColSizeSpinBox->setMaximum(1280);
        RowStartSpinBox = new QSpinBox(FieldOfViewGroupBox);
        RowStartSpinBox->setObjectName(QStringLiteral("RowStartSpinBox"));
        RowStartSpinBox->setGeometry(QRect(260, 20, 77, 25));
        RowStartSpinBox->setMaximum(1024);
        RowSizeSpinBox = new QSpinBox(FieldOfViewGroupBox);
        RowSizeSpinBox->setObjectName(QStringLiteral("RowSizeSpinBox"));
        RowSizeSpinBox->setGeometry(QRect(260, 50, 77, 25));
        RowSizeSpinBox->setMaximum(1024);
        SetFovPushButton = new QPushButton(FieldOfViewGroupBox);
        SetFovPushButton->setObjectName(QStringLiteral("SetFovPushButton"));
        SetFovPushButton->setGeometry(QRect(346, 30, 53, 37));
        ExpTimeSpinBox = new QDoubleSpinBox(UserInputGroupBox);
        ExpTimeSpinBox->setObjectName(QStringLiteral("ExpTimeSpinBox"));
        ExpTimeSpinBox->setGeometry(QRect(126, 108, 63, 25));
        ExpTimeSpinBox->setSingleStep(0.01);
        TriggerModeComBox = new QComboBox(UserInputGroupBox);
        TriggerModeComBox->setObjectName(QStringLiteral("TriggerModeComBox"));
        TriggerModeComBox->setGeometry(QRect(124, 44, 287, 22));
        StaticText_11 = new QLabel(UserInputGroupBox);
        StaticText_11->setObjectName(QStringLiteral("StaticText_11"));
        StaticText_11->setGeometry(QRect(8, 46, 87, 16));
        StaticText_Version = new QLabel(UserInputGroupBox);
        StaticText_Version->setObjectName(QStringLiteral("StaticText_Version"));
        StaticText_Version->setGeometry(QRect(206, 16, 209, 16));
        StaticText_Version->setFrameShape(QFrame::StyledPanel);
        StartCapturePushButton = new QPushButton(UserInputGroupBox);
        StartCapturePushButton->setObjectName(QStringLiteral("StartCapturePushButton"));
        StartCapturePushButton->setGeometry(QRect(174, 288, 79, 31));
        StaticText_12 = new QLabel(UserInputGroupBox);
        StaticText_12->setObjectName(QStringLiteral("StaticText_12"));
        StaticText_12->setGeometry(QRect(8, 170, 115, 16));
        TriggerDelaySpinBox = new QSpinBox(UserInputGroupBox);
        TriggerDelaySpinBox->setObjectName(QStringLiteral("TriggerDelaySpinBox"));
        TriggerDelaySpinBox->setGeometry(QRect(126, 168, 63, 25));
        TriggerDelaySpinBox->setMaximum(99999);
        StaticText_13 = new QLabel(UserInputGroupBox);
        StaticText_13->setObjectName(QStringLiteral("StaticText_13"));
        StaticText_13->setGeometry(QRect(200, 170, 69, 16));
        StaticText_13->setFrameShape(QFrame::NoFrame);
        StaticText_TriggerDelay = new QLabel(UserInputGroupBox);
        StaticText_TriggerDelay->setObjectName(QStringLiteral("StaticText_TriggerDelay"));
        StaticText_TriggerDelay->setGeometry(QRect(278, 172, 133, 16));
        StaticText_TriggerDelay->setFrameShape(QFrame::StyledPanel);
        StaticText_Count = new QLabel(UserInputGroupBox);
        StaticText_Count->setObjectName(QStringLiteral("StaticText_Count"));
        StaticText_Count->setGeometry(QRect(348, 296, 65, 16));
        StaticText_Count->setFrameShape(QFrame::StyledPanel);
        groupBox = new QGroupBox(UserInputGroupBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(12, 328, 403, 145));
        ParseQRCODECheckBox = new QCheckBox(groupBox);
        ParseQRCODECheckBox->setObjectName(QStringLiteral("ParseQRCODECheckBox"));
        ParseQRCODECheckBox->setGeometry(QRect(208, 92, 75, 16));
        ParseUPCECheckBox = new QCheckBox(groupBox);
        ParseUPCECheckBox->setObjectName(QStringLiteral("ParseUPCECheckBox"));
        ParseUPCECheckBox->setGeometry(QRect(296, 48, 77, 16));
        ParsePDF417CheckBox = new QCheckBox(groupBox);
        ParsePDF417CheckBox->setObjectName(QStringLiteral("ParsePDF417CheckBox"));
        ParsePDF417CheckBox->setGeometry(QRect(118, 92, 79, 16));
        ParseEAN8CheckBox = new QCheckBox(groupBox);
        ParseEAN8CheckBox->setObjectName(QStringLiteral("ParseEAN8CheckBox"));
        ParseEAN8CheckBox->setGeometry(QRect(30, 48, 67, 16));
        ParseISBN13CheckBox = new QCheckBox(groupBox);
        ParseISBN13CheckBox->setObjectName(QStringLiteral("ParseISBN13CheckBox"));
        ParseISBN13CheckBox->setGeometry(QRect(118, 70, 73, 16));
        ParseUPCACheckBox = new QCheckBox(groupBox);
        ParseUPCACheckBox->setObjectName(QStringLiteral("ParseUPCACheckBox"));
        ParseUPCACheckBox->setGeometry(QRect(208, 48, 59, 16));
        ParseCODE39CheckBox = new QCheckBox(groupBox);
        ParseCODE39CheckBox->setObjectName(QStringLiteral("ParseCODE39CheckBox"));
        ParseCODE39CheckBox->setGeometry(QRect(208, 70, 81, 16));
        ParseISBN10CheckBox = new QCheckBox(groupBox);
        ParseISBN10CheckBox->setObjectName(QStringLiteral("ParseISBN10CheckBox"));
        ParseISBN10CheckBox->setGeometry(QRect(30, 70, 69, 16));
        ParseCODE128CheckBox = new QCheckBox(groupBox);
        ParseCODE128CheckBox->setObjectName(QStringLiteral("ParseCODE128CheckBox"));
        ParseCODE128CheckBox->setGeometry(QRect(296, 70, 85, 16));
        ParseEAN13CheckBox = new QCheckBox(groupBox);
        ParseEAN13CheckBox->setObjectName(QStringLiteral("ParseEAN13CheckBox"));
        ParseEAN13CheckBox->setGeometry(QRect(118, 48, 73, 16));
        ParseI25CheckBox = new QCheckBox(groupBox);
        ParseI25CheckBox->setObjectName(QStringLiteral("ParseI25CheckBox"));
        ParseI25CheckBox->setGeometry(QRect(30, 92, 69, 16));
        DensitySpinBox = new QSpinBox(groupBox);
        DensitySpinBox->setObjectName(QStringLiteral("DensitySpinBox"));
        DensitySpinBox->setGeometry(QRect(296, 16, 43, 21));
        DensitySpinBox->setMinimum(1);
        DensitySpinBox->setMaximum(32);
        StaticText_14 = new QLabel(groupBox);
        StaticText_14->setObjectName(QStringLiteral("StaticText_14"));
        StaticText_14->setGeometry(QRect(188, 18, 99, 16));
        StaticText_14->setFrameShape(QFrame::NoFrame);
        StaticText_Zbar = new QLabel(groupBox);
        StaticText_Zbar->setObjectName(QStringLiteral("StaticText_Zbar"));
        StaticText_Zbar->setGeometry(QRect(8, 118, 385, 16));
        StaticText_Zbar->setFrameShape(QFrame::StyledPanel);
        ProcessDataCheckBox = new QCheckBox(groupBox);
        ProcessDataCheckBox->setObjectName(QStringLiteral("ProcessDataCheckBox"));
        ProcessDataCheckBox->setGeometry(QRect(30, 20, 113, 16));
        MirrorCheckBox = new QCheckBox(UserInputGroupBox);
        MirrorCheckBox->setObjectName(QStringLiteral("MirrorCheckBox"));
        MirrorCheckBox->setGeometry(QRect(14, 296, 81, 16));
        StaticText_FPS = new QLabel(UserInputGroupBox);
        StaticText_FPS->setObjectName(QStringLiteral("StaticText_FPS"));
        StaticText_FPS->setGeometry(QRect(276, 296, 61, 16));
        StaticText_FPS->setFrameShape(QFrame::StyledPanel);
        RegisterGroupBox = new QGroupBox(UserInputGroupBox);
        RegisterGroupBox->setObjectName(QStringLiteral("RegisterGroupBox"));
        RegisterGroupBox->setGeometry(QRect(8, 562, 407, 65));
        StaticText_16 = new QLabel(RegisterGroupBox);
        StaticText_16->setObjectName(QStringLiteral("StaticText_16"));
        StaticText_16->setGeometry(QRect(10, 26, 57, 16));
        StaticText_16->setFrameShape(QFrame::NoFrame);
        StaticText_17 = new QLabel(RegisterGroupBox);
        StaticText_17->setObjectName(QStringLiteral("StaticText_17"));
        StaticText_17->setGeometry(QRect(148, 26, 43, 16));
        StaticText_17->setFrameShape(QFrame::NoFrame);
        ReadRegPushButton = new QPushButton(RegisterGroupBox);
        ReadRegPushButton->setObjectName(QStringLiteral("ReadRegPushButton"));
        ReadRegPushButton->setGeometry(QRect(316, 18, 41, 33));
        WriteRegPushButton = new QPushButton(RegisterGroupBox);
        WriteRegPushButton->setObjectName(QStringLiteral("WriteRegPushButton"));
        WriteRegPushButton->setGeometry(QRect(362, 18, 41, 33));
        LineEdit_RegValue = new QLineEdit(RegisterGroupBox);
        LineEdit_RegValue->setObjectName(QStringLiteral("LineEdit_RegValue"));
        LineEdit_RegValue->setGeometry(QRect(198, 24, 111, 20));
        LineEdit_RegAddress = new QLineEdit(RegisterGroupBox);
        LineEdit_RegAddress->setObjectName(QStringLiteral("LineEdit_RegAddress"));
        LineEdit_RegAddress->setGeometry(QRect(74, 24, 65, 20));
        GPIO = new QGroupBox(UserInputGroupBox);
        GPIO->setObjectName(QStringLiteral("GPIO"));
        GPIO->setGeometry(QRect(10, 478, 407, 69));
        ALedCheckBox = new QCheckBox(GPIO);
        ALedCheckBox->setObjectName(QStringLiteral("ALedCheckBox"));
        ALedCheckBox->setGeometry(QRect(214, 20, 95, 16));
        BLedCheckBox = new QCheckBox(GPIO);
        BLedCheckBox->setObjectName(QStringLiteral("BLedCheckBox"));
        BLedCheckBox->setGeometry(QRect(312, 20, 91, 16));
        IOOUT1CheckBox = new QCheckBox(GPIO);
        IOOUT1CheckBox->setObjectName(QStringLiteral("IOOUT1CheckBox"));
        IOOUT1CheckBox->setGeometry(QRect(12, 20, 61, 16));
        IOOUT2CheckBox = new QCheckBox(GPIO);
        IOOUT2CheckBox->setObjectName(QStringLiteral("IOOUT2CheckBox"));
        IOOUT2CheckBox->setGeometry(QRect(78, 20, 61, 16));
        IOOUT3CheckBox = new QCheckBox(GPIO);
        IOOUT3CheckBox->setObjectName(QStringLiteral("IOOUT3CheckBox"));
        IOOUT3CheckBox->setGeometry(QRect(146, 20, 59, 16));
        ReadGpioPushButton = new QPushButton(GPIO);
        ReadGpioPushButton->setObjectName(QStringLiteral("ReadGpioPushButton"));
        ReadGpioPushButton->setGeometry(QRect(10, 40, 107, 23));
        IOIN1CheckBox = new QCheckBox(GPIO);
        IOIN1CheckBox->setObjectName(QStringLiteral("IOIN1CheckBox"));
        IOIN1CheckBox->setGeometry(QRect(142, 44, 57, 16));
        IOIN2CheckBox = new QCheckBox(GPIO);
        IOIN2CheckBox->setObjectName(QStringLiteral("IOIN2CheckBox"));
        IOIN2CheckBox->setGeometry(QRect(202, 44, 59, 16));
        IOIN3CheckBox = new QCheckBox(GPIO);
        IOIN3CheckBox->setObjectName(QStringLiteral("IOIN3CheckBox"));
        IOIN3CheckBox->setGeometry(QRect(264, 44, 57, 16));
        FlipCheckBox = new QCheckBox(UserInputGroupBox);
        FlipCheckBox->setObjectName(QStringLiteral("FlipCheckBox"));
        FlipCheckBox->setGeometry(QRect(98, 296, 65, 16));
        StaticText_Main = new QLabel(UserInputGroupBox);
        StaticText_Main->setObjectName(QStringLiteral("StaticText_Main"));
        StaticText_Main->setGeometry(QRect(12, 16, 187, 16));
        StaticText_Main->setFrameShape(QFrame::StyledPanel);

        retranslateUi(KSJSCZDemoMainWindow);

        QMetaObject::connectSlotsByName(KSJSCZDemoMainWindow);
    } // setupUi

    void retranslateUi(QDialog *KSJSCZDemoMainWindow)
    {
        KSJSCZDemoMainWindow->setWindowTitle(QApplication::translate("KSJSCZDemoMainWindow", "Dialog", 0));
        UserInputGroupBox->setTitle(QApplication::translate("KSJSCZDemoMainWindow", "Camera Setting", 0));
        StaticText_1->setText(QApplication::translate("KSJSCZDemoMainWindow", "Exposure Time(ms):", 0));
        StaticText_2->setText(QApplication::translate("KSJSCZDemoMainWindow", "Range(ms):", 0));
        StaticText_ExpostureTimeRange->setText(QApplication::translate("KSJSCZDemoMainWindow", "ExpostureTimeRange", 0));
        StaticText_ExpostureLinesRange->setText(QApplication::translate("KSJSCZDemoMainWindow", "ExposureLinesRange", 0));
        StaticText_3->setText(QApplication::translate("KSJSCZDemoMainWindow", "Range:", 0));
        StaticText_4->setText(QApplication::translate("KSJSCZDemoMainWindow", "Exposure Lines:", 0));
        StaticText_5->setText(QApplication::translate("KSJSCZDemoMainWindow", "Gain:", 0));
        StaticText_6->setText(QApplication::translate("KSJSCZDemoMainWindow", "Range:", 0));
        StaticText_GainRange->setText(QApplication::translate("KSJSCZDemoMainWindow", "ExposureLinesRange", 0));
        FieldOfViewGroupBox->setTitle(QApplication::translate("KSJSCZDemoMainWindow", "Field of View", 0));
        StaticText_7->setText(QApplication::translate("KSJSCZDemoMainWindow", "Col Start:", 0));
        StaticText_8->setText(QApplication::translate("KSJSCZDemoMainWindow", "Col Size:", 0));
        StaticText_9->setText(QApplication::translate("KSJSCZDemoMainWindow", "Row Size:", 0));
        StaticText_10->setText(QApplication::translate("KSJSCZDemoMainWindow", "Row Start:", 0));
        SetFovPushButton->setText(QApplication::translate("KSJSCZDemoMainWindow", "Set", 0));
        StaticText_11->setText(QApplication::translate("KSJSCZDemoMainWindow", "Trigger Mode", 0));
        StaticText_Version->setText(QApplication::translate("KSJSCZDemoMainWindow", "Ver: 0.0.0.0", 0));
        StartCapturePushButton->setText(QApplication::translate("KSJSCZDemoMainWindow", "Start", 0));
        StaticText_12->setText(QApplication::translate("KSJSCZDemoMainWindow", "Trigger Delay:", 0));
        StaticText_13->setText(QApplication::translate("KSJSCZDemoMainWindow", "Range:", 0));
        StaticText_TriggerDelay->setText(QApplication::translate("KSJSCZDemoMainWindow", "TriggerDelayRange", 0));
        StaticText_Count->setText(QApplication::translate("KSJSCZDemoMainWindow", "0", 0));
        groupBox->setTitle(QApplication::translate("KSJSCZDemoMainWindow", "1D Bar or 2D Bar", 0));
        ParseQRCODECheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "QRCODE", 0));
        ParseUPCECheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "UPCE", 0));
        ParsePDF417CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "PDF417", 0));
        ParseEAN8CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "EAN8", 0));
        ParseISBN13CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "ISBN13", 0));
        ParseUPCACheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "UPCA", 0));
        ParseCODE39CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "CODE39", 0));
        ParseISBN10CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "ISBN10", 0));
        ParseCODE128CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "CODE128", 0));
        ParseEAN13CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "EAN13", 0));
        ParseI25CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "I25", 0));
        StaticText_14->setText(QApplication::translate("KSJSCZDemoMainWindow", "Sample Density:", 0));
        StaticText_Zbar->setText(QString());
        ProcessDataCheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "Process Image", 0));
        MirrorCheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "Mirror ", 0));
        StaticText_FPS->setText(QApplication::translate("KSJSCZDemoMainWindow", "0fps", 0));
        RegisterGroupBox->setTitle(QApplication::translate("KSJSCZDemoMainWindow", "Register", 0));
        StaticText_16->setText(QApplication::translate("KSJSCZDemoMainWindow", "Address:", 0));
        StaticText_17->setText(QApplication::translate("KSJSCZDemoMainWindow", "Value:", 0));
        ReadRegPushButton->setText(QApplication::translate("KSJSCZDemoMainWindow", "Read", 0));
        WriteRegPushButton->setText(QApplication::translate("KSJSCZDemoMainWindow", "Write", 0));
        GPIO->setTitle(QApplication::translate("KSJSCZDemoMainWindow", "GPIO", 0));
        ALedCheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "A Led Shine", 0));
        BLedCheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "B Led Shine", 0));
        IOOUT1CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "H_OUT0", 0));
        IOOUT2CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "H_OUT1", 0));
        IOOUT3CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "G_OUT0", 0));
        ReadGpioPushButton->setText(QApplication::translate("KSJSCZDemoMainWindow", "Read Inpput", 0));
        IOIN1CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "H_IN0", 0));
        IOIN2CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "H_IN1", 0));
        IOIN3CheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "G_IN0", 0));
        FlipCheckBox->setText(QApplication::translate("KSJSCZDemoMainWindow", "Flip", 0));
        StaticText_Main->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class KSJSCZDemoMainWindow: public Ui_KSJSCZDemoMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KSJSCZDEMOMAINWINDOW_H
