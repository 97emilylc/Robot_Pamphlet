#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "mainwindow.h"
#include "header.h"
#include "address.h"

class Customer{
private:
    QString companyName;
    Address companyAddress;
    IntrestLevel companyIntrest;
    bool isKey;
    bool pamphletSent;
    // QVector <Robot> *companyPurchases;
public:
    Customer(){
        this->companyName = "";
        this->companyIntrest = DEFAULT;
        this->isKey = false;
        this->pamphletSent = false;
    }


    // Setter Functions
    void setCompanyName(QString companyName){
        this->companyName = companyName;
    }

    void setCompanyStreetAddress(QString streetAddress){
        this->companyAddress.setStreetAddress(streetAddress);
    }

    void setCompanyCity(QString city){
        this->companyAddress.setCity(city);
    }

    void setCompanyState(QString state){
        this->companyAddress.setState(state);
    }

    void setCompanyZipCode(int zipCode){
        this->companyAddress.setZipCode(zipCode);
    }

    void setCompanyIntrest(IntrestLevel companyIntrest){
        this->companyIntrest = companyIntrest;
    }

    void setIsKey(bool isKey){
        this->isKey = isKey;
    }

    void setPamphlet(bool pamphletSentX) {
        pamphletSent = pamphletSentX;
    }

    // Getter Functions
    QString getCompanyName(){
        return this->companyName;
    }

    QString getCompanyStreetAddress(){
        return this->companyAddress.getStreetAddress();
    }

    QString getCompanyCity(){
        return this->companyAddress.getCity();
    }

    QString getCompanyState(){
        return this->companyAddress.getState();
    }

    int getCompanyZipCode(){
        return this->companyAddress.getZipCode();
    }

    IntrestLevel getCompanyIntrest(){
        return this->companyIntrest;
    }

    bool getIsKey(){
        return this->isKey;
    }

    bool getPamhplet() {
        return pamphletSent;
    }
};

#endif // CUSTOMER_H
