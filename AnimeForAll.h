#ifndef ANIMEFORALL_H
#define ANIMEFORALL_H

#include <QMainWindow>

#include "ui_AnimeForAll.h"

class AnimeForAll : public QMainWindow
{
    Q_OBJECT

public:
    AnimeForAll(QWidget *parent = nullptr);
    ~AnimeForAll();

private:
    AnimeForAll *ui;  // изменено на Ui_AnimeForAll
};

#endif // ANIMEFORALL_H
