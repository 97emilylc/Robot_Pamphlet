#ifndef ADDRESS_H
#define ADDRESS_H


#include "mainwindow.h"
#include "header.h"

class Address{
private:
    QString streetAddress;
    QString city;
    QString state;
    int zipCode;
public:
    Address(){
        this->streetAddress = "";
        this->city = "";
        this->state = "";
        this->zipCode = 0;
    }

    // Setter Functions
    void setStreetAddress(QString streetAddress){
        this->streetAddress = streetAddress;
    }

    void setCity(QString city){
        this->city = city;
    }

    void setState(QString state){
        this->state = state;
    }

    void setZipCode(int zipCode){
        this->zipCode = zipCode;
    }

    // Getter Function
    QString getStreetAddress(){
        return this->streetAddress;
    }

    QString getCity(){
        return this->city;
    }

    QString getState(){
        return this->state;
    }

    int getZipCode(){
        return this->zipCode;
    }

};

#endif // ADDRESS_H
