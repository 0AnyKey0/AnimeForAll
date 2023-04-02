#ifndef ANIMEFORALL_H
#define ANIMEFORALL_H

#include <QMainWindow>
#include "LoginWindow.h"

class AnimeForAll : public QMainWindow
{
    Q_OBJECT

public:
    AnimeForAll(QWidget *parent = nullptr);
    ~AnimeForAll();

private:
    LoginWindow *loginWindow;
};

#endif // ANIMEFORALL_H
