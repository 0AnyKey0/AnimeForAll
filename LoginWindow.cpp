#include "LoginWindow.h"
#include "ui_LoginWindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    usernameLabel = new QLabel(tr("Username:"), this);
    usernameLabel->move(50, 50);
    usernameLineEdit = new QLineEdit(this);
    usernameLineEdit->move(120, 50);
    connect(ui->loginButton, &QPushButton::clicked, this, &LoginWindow::login);
}

void LoginWindow::login()
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

LoginWindow::~LoginWindow()
{
    delete ui;
    delete usernameLabel;
    delete usernameLineEdit;
}