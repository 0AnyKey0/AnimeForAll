#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_loginButton_clicked();

signals:
    void loginSuccess();

private:
    Ui::LoginWindow *ui;
};

namespace Ui {
    class LoginWindow {
    public:
        QWidget *centralwidget;
        QLabel *usernameLabel;
        QLabel *passwordLabel;
        QLineEdit *usernameLineEdit;
        QLineEdit *passwordLineEdit;
        QPushButton *loginButton;
        QPushButton *registerButton;

        void setupUi(QWidget *LoginWindow);
        void retranslateUi(QWidget *LoginWindow);
    };

    namespace Ui {
        class LoginWindow;
    }
} // определение класса Ui, без этого LoginWindows.cpp не скомпилируется

#endif // LOGINWINDOW_H