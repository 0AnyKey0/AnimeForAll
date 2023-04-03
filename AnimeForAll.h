namespace Ui {
    class AnimeForAll;
}

#include "ui_AnimeForAll.h"
#ifndef ANIMEFORALL_H
#define ANIMEFORALL_H

#include <QMainWindow>

class AnimeForAll : public QMainWindow
{
    Q_OBJECT

public:
    AnimeForAll(QWidget *parent = nullptr);
    ~AnimeForAll();

private:
    Ui::AnimeForAll *ui;
};

#endif // ANIMEFORALL_H
