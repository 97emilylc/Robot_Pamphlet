#ifndef HEADER_H
#define HEADER_H

#include "mainwindow.h"

#include <iostream>

using namespace std;

class Customer;

enum IntrestLevel{
    DEFAULT,
    NOT_INTRESTED,
    SOMEWHAT_INTRESTED,
    VERY_INTRESTED
};

struct LoginInfo
{
    QString username;
    QString password;
};

void PopulateList(QVector<Customer> *customerList);
void GetLoginInfo(QVector <LoginInfo> *adminLoginList);
void SaveToFile(QVector<Customer> *customerList);

#endif // HEADER_H
