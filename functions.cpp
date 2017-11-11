#include "mainwindow.h"
#include "header.h"
#include "customer.h"
#include "address.h"
#include "ui_mainwindow.h"

void GetLoginInfo(QVector <LoginInfo> *adminLoginList)
{
    QString userIn;
    QString passIn;

    QFile inputFile("loginFile.txt");

    if(!inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return;
    }

    QTextStream in(&inputFile);

    while(!in.atEnd())
    {
        userIn = in.readLine();
        passIn = in.readLine();

        LoginInfo newLogin;
        newLogin.username = userIn;
        newLogin.password = passIn;
        adminLoginList->append(newLogin);

    }
    inputFile.close();
}

void PopulateList(QVector <Customer> *customerList){
    QString companyName;
    QString streetAddress;
    QString city;
    QString state;
    int zipCode;
    IntrestLevel companyIntrest;
    QString companyIntrestValue;
    bool isKey;
    QString isKeyValue;

    QFile inputFile("inFile.txt");

    if(!inputFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }

    QTextStream in(&inputFile);
    while(!in.atEnd()){

        companyName = in.readLine();
        streetAddress = in.readLine();
        city = in.readLine();
        state = in.readLine();

        in >> zipCode;
        in.readLine();

        companyIntrestValue = in.readLine();

        if(companyIntrestValue == "very interested"){
            companyIntrest = VERY_INTRESTED;
        }
        else if(companyIntrestValue == "somewhat interested"){
            companyIntrest = SOMEWHAT_INTRESTED;
        }
        else{
            companyIntrest = NOT_INTRESTED;
        }

        isKeyValue = in.readLine();

        if(isKeyValue == "key"){
            isKey = true;
        }
        else{
            isKey = false;
        }

        in.readLine();

        Customer newCustomer;

        newCustomer.setCompanyName(companyName);
        newCustomer.setCompanyStreetAddress(streetAddress);
        newCustomer.setCompanyCity(city);
        newCustomer.setCompanyState(state);
        newCustomer.setCompanyZipCode(zipCode);
        newCustomer.setCompanyIntrest(companyIntrest);
        newCustomer.setIsKey(isKey);

        customerList->append(newCustomer);
    }
    inputFile.close();
}

void MainWindow::AddMember(QVector <Customer> *customerList)
{
    QString companyName;
    QString streetAddress;
    QString city;
    QString state;
    int zipCode;
    IntrestLevel companyIntrest;
    bool isKey;


    companyName = ui->LE_Customer_Name->text();
    streetAddress = ui->LE_Address->text();
    city = ui->LE_City->text();
    state = ui->LE_State->text();
    zipCode = ui->LE_Zip_Code->text().toInt();
    switch(ui->CB_Intrest_Level->currentIndex()){
    case 0:  companyIntrest = VERY_INTRESTED;
        break;
    case 1:  companyIntrest = SOMEWHAT_INTRESTED;
        break;
    case 2:  companyIntrest = NOT_INTRESTED;
        break;
    }
    if(ui->BOX_No->isChecked())
    {
        isKey = false;
    }
    else
    {
        isKey = true;
    }

    Customer newCustomer;

    newCustomer.setCompanyName(companyName);
    newCustomer.setCompanyStreetAddress(streetAddress);
    newCustomer.setCompanyCity(city);
    newCustomer.setCompanyState(state);
    newCustomer.setCompanyZipCode(zipCode);
    newCustomer.setCompanyIntrest(companyIntrest);
    newCustomer.setIsKey(isKey);

    customerList->append(newCustomer);
}

void SaveToFile(QVector<Customer> *customerList){
    QFile outFile("inFile.txt");

    if(!outFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        return;
    }

    QTextStream out(&outFile);

    for(int i = 0; i < customerList->size(); ++i){
        out << customerList->value(i).getCompanyName() << endl
            << customerList->value(i).getCompanyStreetAddress() << endl
            << customerList->value(i).getCompanyState() << endl
            << customerList->value(i).getCompanyState() << endl
            << customerList->value(i).getCompanyZipCode() << endl;
        switch(customerList->value(i).getCompanyIntrest()){
        case VERY_INTRESTED    : out << "very interested" << endl;
                                 break;
        case SOMEWHAT_INTRESTED: out << "somewhat interested" << endl;
                                 break;
        case NOT_INTRESTED:      out << "not interested" << endl;
                                 break;
        default: break;
        }

        if(customerList->value(i).getIsKey()){
            out << "key" << endl;
        }
        else{
            out << "nice to have" << endl;
        }

        out << endl;
    }
    outFile.close();
}
