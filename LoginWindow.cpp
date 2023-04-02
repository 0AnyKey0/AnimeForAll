#include "LoginWindow.h"
#include "ui_LoginWindow.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    // validate username and password
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, tr("Invalid login"), tr("Please enter a username and password."));
        return;
    }

    // authenticate user
    // ...

    // if authentication successful, emit loginSuccess signal and close window
    emit loginSuccess();
    close();
}