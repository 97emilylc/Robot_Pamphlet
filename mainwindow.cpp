#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    PopulateList(&customerList);
    GetLoginInfo(&loginList);
    cout << customerList.size() << endl;
    ui->stWid_Main->setCurrentWidget(ui->stWid_Main_Page);
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_Home_Page);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_btn_Home_clicked()
{
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_Home_Page);
}

void MainWindow::on_btn_Products_clicked()
{
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_Product_Page);
}

void MainWindow::on_btn_About_Us_clicked()
{
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_About_Us_Page);
}

void MainWindow::on_btn_Contact_Us_clicked()
{
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_Contact_Us_Page);
}

void MainWindow::on_btn_Help_clicked()
{
    ui->stWid_Customer_Pages->setCurrentWidget(ui->stWid_Help_Page);
}

void MainWindow::on_btn_LogIn_clicked()
{
    ui->stWid_Main->setCurrentWidget(ui->stWid_Login_Page);
}

void MainWindow::on_btn_Exit_LogIn_clicked()
{
    ui->stWid_Main->setCurrentWidget(ui->stWid_Main_Page);
}

void MainWindow::on_btn_LogIn_2_clicked()
{

    QMessageBox invalidLogin;
    invalidLogin.setText("Invalid Login Info");
    invalidLogin.setWindowTitle("Login Error");
    try
    {
        bool validLogin;
        int index;
        QString userIn = ui->LE_UserName->text();
        QString passIn = ui->LE_Password->text();

        index = 0;
        validLogin = false;
        while(index < loginList.size() && !validLogin)
        {

            if(loginList[index].username == userIn && loginList[index].password == passIn)
            {
                validLogin = true;
            }
            index++;
        }
        throw validLogin;
    }
    catch(bool loginBool)
    {
        if(loginBool)
        {
            ui->stWid_Main->setCurrentWidget(ui->stWid_Admin_Page);
            ui->Customer_Table->selectRow(0);

            ui->Customer_Table->setRowCount(customerList.size());
            QTableWidgetItem *obj;

            for(int i = 0; i < customerList.size(); ++i){

                    for(int j = 0; j < ui->Customer_Table->rowCount() + 1; ++j)
                    {
                        switch(j)
                        {
                        case 0: obj = new QTableWidgetItem(customerList[i].getCompanyName());
                                break;
                        case 1: obj = new QTableWidgetItem(customerList[i].getCompanyStreetAddress());
                                break;
                        case 2: obj = new QTableWidgetItem(customerList[i].getCompanyCity());
                                break;
                        case 3: obj = new QTableWidgetItem(customerList[i].getCompanyState());
                                break;
                        case 4: obj = new QTableWidgetItem(QString::number(customerList[i].getCompanyZipCode()));
                                break;
                        case 5: if(customerList[i].getCompanyIntrest() == VERY_INTRESTED)
                                {
                                    obj = new QTableWidgetItem("Very Intrested");
                                }
                                else if(customerList[i].getCompanyIntrest() == SOMEWHAT_INTRESTED)
                                {
                                    obj = new QTableWidgetItem("Some What Intrested");
                                }
                                else
                                {
                                    obj = new QTableWidgetItem("Not Intrested");
                                }
                                // obj = new QTableWidgetItem(customerList[i].);
                                break;
                        case 6: if(customerList[i].getIsKey())
                                {
                                    obj = new QTableWidgetItem("Yes");
                                }
                                else
                                {
                                    obj = new QTableWidgetItem("No");
                                }
                                // obj = new QTableWidgetItem(customerList[i].);
                                break;
                        }
                        ui->Customer_Table->setItem(i, j, obj);
                    }
                }
        }
        else
        {
            invalidLogin.exec();
        }
    }
}

// Request a pamphlet copy
void MainWindow::on_btn_RequestCopy_clicked()
{
    QString company = QInputDialog::getText(this, tr("Pamphlet Copy"),
                                            tr("Company Name:"), QLineEdit::Normal);
    QMessageBox msgBox; // Message box
    int i; // Index for found company

    msgBox.setWindowTitle("Pamphlet Order");
    company = company.toLower();

    // Iterates through the customer list and checks if they have already recieved a pamhplet
    for(i = 0; i < customerList.size(); ++i)
    {
        if(company == customerList[i].getCompanyName().toLower())
        {
            if(customerList[i].getPamhplet())
            {
                msgBox.setText("Pamphlet not sent. Company has already ordered a pamhplet.");
                msgBox.exec();
                break;
            }
            else
            {
                customerList[i].setPamphlet(true);
                msgBox.setText("Pamphlet has been sent.");
                msgBox.exec();
                break;
            }
        }
     }
}

void MainWindow::on_pb_Add_Member_clicked()
{
    bool validInfo = true;

    if(ui->LE_Customer_Name->text().isEmpty() || ui->LE_Address->text().isEmpty() || ui->LE_City->text().isEmpty() || ui->LE_State->text().isEmpty()){
        QMessageBox::critical(this, tr("Error"),
                                               tr("Fill In The Blanks"),
                                               QMessageBox::Ok);
        validInfo = false;
    }
    else if(ui->LE_Zip_Code->text().size() != 5){
        QMessageBox::critical(this, tr("Error"),
                                               tr("Enter a valid 5-Digit Zip Code"),
                                               QMessageBox::Ok);
        ui->LE_Zip_Code->clear();
        ui->LE_Zip_Code->setFocus();
        validInfo = false;
    }
    else if(!(ui->BOX_Yes->isChecked()) && (!(ui->BOX_No->isChecked()))){
        QMessageBox::critical(this, tr("Error"),
                                               tr("Please Check [YES] or [NO]"),
                                               QMessageBox::Ok);
         validInfo = false;
    }

    if(validInfo){
        AddMember(&customerList);
        cout << customerList.size() << endl;
        SaveToFile(&customerList);

        QTableWidgetItem *obj;

        ui->Customer_Table->insertRow(ui->Customer_Table->rowCount());

        for(int i = 0; i < 7; ++i){
           switch(i){
           case 0: obj = new QTableWidgetItem(customerList[customerList.size() - 1].getCompanyName());
                   break;
           case 1: obj = new QTableWidgetItem(customerList[customerList.size() - 1].getCompanyStreetAddress());
                   break;
           case 2: obj = new QTableWidgetItem(customerList[customerList.size() - 1].getCompanyCity());
                   break;
           case 3: obj = new QTableWidgetItem(customerList[customerList.size() - 1].getCompanyState());
                   break;
           case 4: obj = new QTableWidgetItem(QString::number(customerList[customerList.size() - 1].getCompanyZipCode()));
                   break;
           case 5: if(customerList[customerList.size() - 1].getCompanyIntrest() == VERY_INTRESTED){
                       obj = new QTableWidgetItem("Very Intrested");
                   }
                   else if(customerList[i].getCompanyIntrest() == SOMEWHAT_INTRESTED){
                       obj = new QTableWidgetItem("Some What Intrested");
                   }
                   else{
                       obj = new QTableWidgetItem("Not Intrested");
                   }
                   break;
           case 6: if(customerList[customerList.size() - 1].getIsKey()){
                       obj = new QTableWidgetItem("Yes");
                   }
                   else{
                       obj = new QTableWidgetItem("No");
                   }
                   break;
           }
           ui->Customer_Table->setItem(ui->Customer_Table->rowCount()-1, i, obj);
        }

        ui->LE_Customer_Name->clear();
        ui->LE_Address->clear();
        ui->LE_City->clear();
        ui->LE_State->clear();
        ui->LE_Zip_Code->clear();
        ui->BOX_Yes->setChecked(false);
        ui->BOX_No->setChecked(false);
    }
}

void MainWindow::on_btn_Delete_Member_clicked()
{
    if(ui->Customer_Table->rowCount() != 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Delete Member", "Are you sure you want to delete the selected customer?",
                                      QMessageBox::Yes|QMessageBox::No);

        if (reply == QMessageBox::Yes){
            if(ui->Customer_Table->rowCount() > 0){
                int selectedRow = ui->Customer_Table->currentItem()->row();
                customerList.remove(selectedRow);

                //Remove selected row on the table.
                ui->Customer_Table->removeRow(selectedRow);

                SaveToFile(&customerList);
            }
        }
        else{
        QMessageBox::critical(this, tr("Error"),
                                               tr("No Customers Avaliable To Delete"),
                                               QMessageBox::Ok);
        }
    }
}

void MainWindow::on_btn_Product_1_clicked()
{
     ui->stWid_Product_Page_2->setCurrentWidget(ui->page_Product_1);
}

void MainWindow::on_btn_Product_2_clicked()
{
      ui->stWid_Product_Page_2->setCurrentWidget(ui->page_Product_2);
}

void MainWindow::on_btn_Product_3_clicked()
{
      ui->stWid_Product_Page_2->setCurrentWidget(ui->page_Product_3);
}
