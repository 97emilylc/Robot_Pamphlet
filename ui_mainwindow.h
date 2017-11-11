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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stWid_Main;
    QWidget *stWid_Main_Page;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_Home;
    QPushButton *btn_Products;
    QPushButton *btn_About_Us;
    QPushButton *btn_Contact_Us;
    QPushButton *btn_Help;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_LogIn;
    QStackedWidget *stWid_Customer_Pages;
    QWidget *stWid_Home_Page;
    QGridLayout *gridLayout_5;
    QPushButton *btn_RequestCopy;
    QTextBrowser *textBrowser_2;
    QWidget *stWid_Product_Page;
    QPushButton *btn_Product_1;
    QPushButton *btn_Product_2;
    QPushButton *btn_Product_3;
    QStackedWidget *stWid_Product_Page_2;
    QWidget *page_Product_1;
    QTextBrowser *textBrowser_Product_1;
    QWidget *page_Product_2;
    QTextBrowser *textBrowser_Product_2;
    QWidget *page_Product_3;
    QTextBrowser *textBrowser_Product_3;
    QWidget *stWid_About_Us_Page;
    QGridLayout *gridLayout_7;
    QTextBrowser *textBrowser_4;
    QWidget *stWid_Contact_Us_Page;
    QGridLayout *gridLayout_8;
    QTextBrowser *textBrowser_5;
    QWidget *stWid_Help_Page;
    QGridLayout *gridLayout_4;
    QTextBrowser *textBrowser;
    QWidget *stWid_Login_Page;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *LE_UserName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *LE_Password;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_LogIn_2;
    QPushButton *btn_Exit_LogIn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *stWid_Admin_Page;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *Customer_Name_Feild;
    QLabel *lb_Customer_Name;
    QLineEdit *LE_Customer_Name;
    QHBoxLayout *Address_Feild;
    QLabel *lb_Address;
    QLineEdit *LE_Address;
    QHBoxLayout *City_Feild;
    QLabel *lb_City;
    QLineEdit *LE_City;
    QHBoxLayout *State_Feild;
    QLabel *lb_State;
    QLineEdit *LE_State;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *Zip_Code_Feild;
    QLabel *lb_Zip_Code;
    QLineEdit *LE_Zip_Code;
    QHBoxLayout *Intrest_Level_Feild;
    QLabel *lb_Intrest_Level;
    QComboBox *CB_Intrest_Level;
    QHBoxLayout *Key_Customer_Feild;
    QLabel *lb_Key_Customer;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *BOX_Yes;
    QCheckBox *BOX_No;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pb_Add_Member;
    QSpacerItem *horizontalSpacer_6;
    QTableWidget *Customer_Table;
    QPushButton *btn_Delete_Member;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(817, 482);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stWid_Main = new QStackedWidget(centralWidget);
        stWid_Main->setObjectName(QStringLiteral("stWid_Main"));
        stWid_Main_Page = new QWidget();
        stWid_Main_Page->setObjectName(QStringLiteral("stWid_Main_Page"));
        gridLayout_2 = new QGridLayout(stWid_Main_Page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_Home = new QPushButton(stWid_Main_Page);
        btn_Home->setObjectName(QStringLiteral("btn_Home"));

        verticalLayout->addWidget(btn_Home);

        btn_Products = new QPushButton(stWid_Main_Page);
        btn_Products->setObjectName(QStringLiteral("btn_Products"));

        verticalLayout->addWidget(btn_Products);

        btn_About_Us = new QPushButton(stWid_Main_Page);
        btn_About_Us->setObjectName(QStringLiteral("btn_About_Us"));

        verticalLayout->addWidget(btn_About_Us);

        btn_Contact_Us = new QPushButton(stWid_Main_Page);
        btn_Contact_Us->setObjectName(QStringLiteral("btn_Contact_Us"));

        verticalLayout->addWidget(btn_Contact_Us);

        btn_Help = new QPushButton(stWid_Main_Page);
        btn_Help->setObjectName(QStringLiteral("btn_Help"));

        verticalLayout->addWidget(btn_Help);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btn_LogIn = new QPushButton(stWid_Main_Page);
        btn_LogIn->setObjectName(QStringLiteral("btn_LogIn"));

        verticalLayout->addWidget(btn_LogIn);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        stWid_Customer_Pages = new QStackedWidget(stWid_Main_Page);
        stWid_Customer_Pages->setObjectName(QStringLiteral("stWid_Customer_Pages"));
        stWid_Home_Page = new QWidget();
        stWid_Home_Page->setObjectName(QStringLiteral("stWid_Home_Page"));
        gridLayout_5 = new QGridLayout(stWid_Home_Page);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        btn_RequestCopy = new QPushButton(stWid_Home_Page);
        btn_RequestCopy->setObjectName(QStringLiteral("btn_RequestCopy"));

        gridLayout_5->addWidget(btn_RequestCopy, 1, 0, 1, 1, Qt::AlignRight);

        textBrowser_2 = new QTextBrowser(stWid_Home_Page);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        gridLayout_5->addWidget(textBrowser_2, 0, 0, 1, 1);

        stWid_Customer_Pages->addWidget(stWid_Home_Page);
        stWid_Product_Page = new QWidget();
        stWid_Product_Page->setObjectName(QStringLiteral("stWid_Product_Page"));
        btn_Product_1 = new QPushButton(stWid_Product_Page);
        btn_Product_1->setObjectName(QStringLiteral("btn_Product_1"));
        btn_Product_1->setGeometry(QRect(60, 10, 75, 23));
        btn_Product_2 = new QPushButton(stWid_Product_Page);
        btn_Product_2->setObjectName(QStringLiteral("btn_Product_2"));
        btn_Product_2->setGeometry(QRect(320, 10, 75, 23));
        btn_Product_3 = new QPushButton(stWid_Product_Page);
        btn_Product_3->setObjectName(QStringLiteral("btn_Product_3"));
        btn_Product_3->setGeometry(QRect(570, 10, 75, 23));
        stWid_Product_Page_2 = new QStackedWidget(stWid_Product_Page);
        stWid_Product_Page_2->setObjectName(QStringLiteral("stWid_Product_Page_2"));
        stWid_Product_Page_2->setGeometry(QRect(9, 39, 691, 361));
        page_Product_1 = new QWidget();
        page_Product_1->setObjectName(QStringLiteral("page_Product_1"));
        textBrowser_Product_1 = new QTextBrowser(page_Product_1);
        textBrowser_Product_1->setObjectName(QStringLiteral("textBrowser_Product_1"));
        textBrowser_Product_1->setGeometry(QRect(0, 10, 691, 361));
        stWid_Product_Page_2->addWidget(page_Product_1);
        page_Product_2 = new QWidget();
        page_Product_2->setObjectName(QStringLiteral("page_Product_2"));
        textBrowser_Product_2 = new QTextBrowser(page_Product_2);
        textBrowser_Product_2->setObjectName(QStringLiteral("textBrowser_Product_2"));
        textBrowser_Product_2->setGeometry(QRect(0, 0, 691, 351));
        stWid_Product_Page_2->addWidget(page_Product_2);
        page_Product_3 = new QWidget();
        page_Product_3->setObjectName(QStringLiteral("page_Product_3"));
        textBrowser_Product_3 = new QTextBrowser(page_Product_3);
        textBrowser_Product_3->setObjectName(QStringLiteral("textBrowser_Product_3"));
        textBrowser_Product_3->setGeometry(QRect(0, 0, 691, 351));
        stWid_Product_Page_2->addWidget(page_Product_3);
        stWid_Customer_Pages->addWidget(stWid_Product_Page);
        stWid_About_Us_Page = new QWidget();
        stWid_About_Us_Page->setObjectName(QStringLiteral("stWid_About_Us_Page"));
        gridLayout_7 = new QGridLayout(stWid_About_Us_Page);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        textBrowser_4 = new QTextBrowser(stWid_About_Us_Page);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));

        gridLayout_7->addWidget(textBrowser_4, 0, 0, 1, 1);

        stWid_Customer_Pages->addWidget(stWid_About_Us_Page);
        stWid_Contact_Us_Page = new QWidget();
        stWid_Contact_Us_Page->setObjectName(QStringLiteral("stWid_Contact_Us_Page"));
        gridLayout_8 = new QGridLayout(stWid_Contact_Us_Page);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        textBrowser_5 = new QTextBrowser(stWid_Contact_Us_Page);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));

        gridLayout_8->addWidget(textBrowser_5, 0, 0, 1, 1);

        stWid_Customer_Pages->addWidget(stWid_Contact_Us_Page);
        stWid_Help_Page = new QWidget();
        stWid_Help_Page->setObjectName(QStringLiteral("stWid_Help_Page"));
        gridLayout_4 = new QGridLayout(stWid_Help_Page);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textBrowser = new QTextBrowser(stWid_Help_Page);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout_4->addWidget(textBrowser, 0, 0, 1, 1);

        stWid_Customer_Pages->addWidget(stWid_Help_Page);

        gridLayout_2->addWidget(stWid_Customer_Pages, 0, 1, 1, 1);

        stWid_Main->addWidget(stWid_Main_Page);
        stWid_Login_Page = new QWidget();
        stWid_Login_Page->setObjectName(QStringLiteral("stWid_Login_Page"));
        gridLayout_3 = new QGridLayout(stWid_Login_Page);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 145, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(253, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(stWid_Login_Page);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        LE_UserName = new QLineEdit(stWid_Login_Page);
        LE_UserName->setObjectName(QStringLiteral("LE_UserName"));

        horizontalLayout->addWidget(LE_UserName);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(stWid_Login_Page);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        LE_Password = new QLineEdit(stWid_Login_Page);
        LE_Password->setObjectName(QStringLiteral("LE_Password"));
        LE_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(LE_Password);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_LogIn_2 = new QPushButton(stWid_Login_Page);
        btn_LogIn_2->setObjectName(QStringLiteral("btn_LogIn_2"));

        horizontalLayout_3->addWidget(btn_LogIn_2);

        btn_Exit_LogIn = new QPushButton(stWid_Login_Page);
        btn_Exit_LogIn->setObjectName(QStringLiteral("btn_Exit_LogIn"));

        horizontalLayout_3->addWidget(btn_Exit_LogIn);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout_3->addLayout(verticalLayout_3, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(253, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 145, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 2, 1, 1, 1);

        stWid_Main->addWidget(stWid_Login_Page);
        stWid_Admin_Page = new QWidget();
        stWid_Admin_Page->setObjectName(QStringLiteral("stWid_Admin_Page"));
        layoutWidget = new QWidget(stWid_Admin_Page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(6, 198, 420, 124));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Customer_Name_Feild = new QHBoxLayout();
        Customer_Name_Feild->setSpacing(6);
        Customer_Name_Feild->setObjectName(QStringLiteral("Customer_Name_Feild"));
        lb_Customer_Name = new QLabel(layoutWidget);
        lb_Customer_Name->setObjectName(QStringLiteral("lb_Customer_Name"));

        Customer_Name_Feild->addWidget(lb_Customer_Name);

        LE_Customer_Name = new QLineEdit(layoutWidget);
        LE_Customer_Name->setObjectName(QStringLiteral("LE_Customer_Name"));

        Customer_Name_Feild->addWidget(LE_Customer_Name);


        verticalLayout_5->addLayout(Customer_Name_Feild);

        Address_Feild = new QHBoxLayout();
        Address_Feild->setSpacing(6);
        Address_Feild->setObjectName(QStringLiteral("Address_Feild"));
        lb_Address = new QLabel(layoutWidget);
        lb_Address->setObjectName(QStringLiteral("lb_Address"));

        Address_Feild->addWidget(lb_Address);

        LE_Address = new QLineEdit(layoutWidget);
        LE_Address->setObjectName(QStringLiteral("LE_Address"));

        Address_Feild->addWidget(LE_Address);


        verticalLayout_5->addLayout(Address_Feild);

        City_Feild = new QHBoxLayout();
        City_Feild->setSpacing(6);
        City_Feild->setObjectName(QStringLiteral("City_Feild"));
        lb_City = new QLabel(layoutWidget);
        lb_City->setObjectName(QStringLiteral("lb_City"));

        City_Feild->addWidget(lb_City);

        LE_City = new QLineEdit(layoutWidget);
        LE_City->setObjectName(QStringLiteral("LE_City"));

        City_Feild->addWidget(LE_City);


        verticalLayout_5->addLayout(City_Feild);

        State_Feild = new QHBoxLayout();
        State_Feild->setSpacing(6);
        State_Feild->setObjectName(QStringLiteral("State_Feild"));
        lb_State = new QLabel(layoutWidget);
        lb_State->setObjectName(QStringLiteral("lb_State"));

        State_Feild->addWidget(lb_State);

        LE_State = new QLineEdit(layoutWidget);
        LE_State->setObjectName(QStringLiteral("LE_State"));

        State_Feild->addWidget(LE_State);


        verticalLayout_5->addLayout(State_Feild);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Zip_Code_Feild = new QHBoxLayout();
        Zip_Code_Feild->setSpacing(6);
        Zip_Code_Feild->setObjectName(QStringLiteral("Zip_Code_Feild"));
        lb_Zip_Code = new QLabel(layoutWidget);
        lb_Zip_Code->setObjectName(QStringLiteral("lb_Zip_Code"));

        Zip_Code_Feild->addWidget(lb_Zip_Code);

        LE_Zip_Code = new QLineEdit(layoutWidget);
        LE_Zip_Code->setObjectName(QStringLiteral("LE_Zip_Code"));

        Zip_Code_Feild->addWidget(LE_Zip_Code);


        verticalLayout_4->addLayout(Zip_Code_Feild);

        Intrest_Level_Feild = new QHBoxLayout();
        Intrest_Level_Feild->setSpacing(6);
        Intrest_Level_Feild->setObjectName(QStringLiteral("Intrest_Level_Feild"));
        lb_Intrest_Level = new QLabel(layoutWidget);
        lb_Intrest_Level->setObjectName(QStringLiteral("lb_Intrest_Level"));

        Intrest_Level_Feild->addWidget(lb_Intrest_Level);

        CB_Intrest_Level = new QComboBox(layoutWidget);
        CB_Intrest_Level->setObjectName(QStringLiteral("CB_Intrest_Level"));

        Intrest_Level_Feild->addWidget(CB_Intrest_Level);


        verticalLayout_4->addLayout(Intrest_Level_Feild);

        Key_Customer_Feild = new QHBoxLayout();
        Key_Customer_Feild->setSpacing(6);
        Key_Customer_Feild->setObjectName(QStringLiteral("Key_Customer_Feild"));
        lb_Key_Customer = new QLabel(layoutWidget);
        lb_Key_Customer->setObjectName(QStringLiteral("lb_Key_Customer"));

        Key_Customer_Feild->addWidget(lb_Key_Customer);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Key_Customer_Feild->addItem(horizontalSpacer_5);

        BOX_Yes = new QCheckBox(layoutWidget);
        BOX_Yes->setObjectName(QStringLiteral("BOX_Yes"));

        Key_Customer_Feild->addWidget(BOX_Yes);

        BOX_No = new QCheckBox(layoutWidget);
        BOX_No->setObjectName(QStringLiteral("BOX_No"));

        Key_Customer_Feild->addWidget(BOX_No);


        verticalLayout_4->addLayout(Key_Customer_Feild);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pb_Add_Member = new QPushButton(layoutWidget);
        pb_Add_Member->setObjectName(QStringLiteral("pb_Add_Member"));

        horizontalLayout_4->addWidget(pb_Add_Member);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        Customer_Table = new QTableWidget(stWid_Admin_Page);
        if (Customer_Table->columnCount() < 7)
            Customer_Table->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Customer_Table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Customer_Table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Customer_Table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Customer_Table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Customer_Table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Customer_Table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Customer_Table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        Customer_Table->setObjectName(QStringLiteral("Customer_Table"));
        Customer_Table->setGeometry(QRect(6, 6, 781, 189));
        Customer_Table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Customer_Table->setSelectionMode(QAbstractItemView::SingleSelection);
        Customer_Table->setSelectionBehavior(QAbstractItemView::SelectRows);
        Customer_Table->setSortingEnabled(true);
        btn_Delete_Member = new QPushButton(stWid_Admin_Page);
        btn_Delete_Member->setObjectName(QStringLiteral("btn_Delete_Member"));
        btn_Delete_Member->setGeometry(QRect(564, 240, 91, 23));
        stWid_Main->addWidget(stWid_Admin_Page);

        gridLayout->addWidget(stWid_Main, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 817, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stWid_Main->setCurrentIndex(0);
        stWid_Customer_Pages->setCurrentIndex(1);
        stWid_Product_Page_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btn_Home->setText(QApplication::translate("MainWindow", "Home", 0));
        btn_Products->setText(QApplication::translate("MainWindow", "Products", 0));
        btn_About_Us->setText(QApplication::translate("MainWindow", "About Us", 0));
        btn_Contact_Us->setText(QApplication::translate("MainWindow", "Contact Us", 0));
        btn_Help->setText(QApplication::translate("MainWindow", "Help", 0));
        btn_LogIn->setText(QApplication::translate("MainWindow", "Log In", 0));
        btn_RequestCopy->setText(QApplication::translate("MainWindow", "Request a Copy", 0));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt; font-weight:600; text-decoration: underline; color:#ff0000;\">HOME PAGE</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt; color:#000000;\">- Are you tired of walking around and seeing those pesky bombs everywhere? If </span><span style=\" font-family:'Sans Serif'; font-size:14pt; font-style:italic; color:#000000;\">only</span><span style=\" font-family:'Sans Serif'; "
                        "font-size:14pt; color:#000000;\"> there was a product to dispose of these dangerous objects. Well, you're in for a treat because iRobotsTheBomb Inc. </span><span style=\" font-family:'Sans Serif'; font-size:14pt; color:#000000; vertical-align:super;\">tm</span><span style=\" font-family:'Sans Serif'; font-size:14pt; color:#000000;\"> has the perfect solution FOR YOU!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt; color:#0000cb;\">Here at iRobotsTheBomb Inc. we make high-quality, American made bomb disposal robots. Our robots are sleek, agile, and intelligent, capable of working in a variety of envionments. No task is too great for our Robots!</span></p>\n"
"<p style=\""
                        "-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:14pt; color:#0000cb;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt; color:#000000;\">We offer three different models for sale...</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt; color:#000000;\">     1.) Budget Model (BX-1000)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt; color:#000000;\">     2.) Standard Model (BX-2000)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0"
                        "px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt; color:#000000;\">     3.) Tsar Bomba Model (BX-3000)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt; color:#000000;\">with each model coming with different capabilities and features that suits your needs. For more information about each model, visit the Products page.</span></p></body></html>", 0));
        btn_Product_1->setText(QApplication::translate("MainWindow", "BX-1000", 0));
        btn_Product_2->setText(QApplication::translate("MainWindow", "BX-2000", 0));
        btn_Product_3->setText(QApplication::translate("MainWindow", "BX-3000", 0));
        textBrowser_Product_1->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">PRODUCT 1</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textBrowser_Product_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">PRODUCT 2</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textBrowser_Product_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">PRODUCT 3</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textBrowser_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">ABOUT US PAGE</span></p></body></html>", 0));
        textBrowser_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">CONTACT US PAGE</span></p></body></html>", 0));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">HELP PAGE</span></p></body></html>", 0));
        label->setText(QApplication::translate("MainWindow", "User Name  ", 0));
        label_2->setText(QApplication::translate("MainWindow", "Password    ", 0));
        btn_LogIn_2->setText(QApplication::translate("MainWindow", "Log In", 0));
        btn_Exit_LogIn->setText(QApplication::translate("MainWindow", "Exit", 0));
        lb_Customer_Name->setText(QApplication::translate("MainWindow", "Customer Name", 0));
        lb_Address->setText(QApplication::translate("MainWindow", "Address ", 0));
        lb_City->setText(QApplication::translate("MainWindow", "City       ", 0));
        lb_State->setText(QApplication::translate("MainWindow", "State     ", 0));
        lb_Zip_Code->setText(QApplication::translate("MainWindow", "Zip Code", 0));
        lb_Intrest_Level->setText(QApplication::translate("MainWindow", "Intrest Level  ", 0));
        CB_Intrest_Level->clear();
        CB_Intrest_Level->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Very Intrested", 0)
         << QApplication::translate("MainWindow", "Somewhat Intrested", 0)
         << QApplication::translate("MainWindow", "Not Intrested", 0)
        );
        lb_Key_Customer->setText(QApplication::translate("MainWindow", "Key Customer   ", 0));
        BOX_Yes->setText(QApplication::translate("MainWindow", "Yes", 0));
        BOX_No->setText(QApplication::translate("MainWindow", "No", 0));
        pb_Add_Member->setText(QApplication::translate("MainWindow", "Add Customer", 0));
        QTableWidgetItem *___qtablewidgetitem = Customer_Table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Customer Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = Customer_Table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem2 = Customer_Table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "City", 0));
        QTableWidgetItem *___qtablewidgetitem3 = Customer_Table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "State", 0));
        QTableWidgetItem *___qtablewidgetitem4 = Customer_Table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Zip Code", 0));
        QTableWidgetItem *___qtablewidgetitem5 = Customer_Table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Intrest Level", 0));
        QTableWidgetItem *___qtablewidgetitem6 = Customer_Table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Key Customer", 0));
        btn_Delete_Member->setText(QApplication::translate("MainWindow", "Delete Member", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
