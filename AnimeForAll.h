#ifndef ANIMEFORALL_H
#define ANIMEFORALL_H

#include <QMainWindow>

// добавьте эту строку
namespace Ui {
    class AnimeForAll;
}

class AnimeForAll : public QMainWindow
{
    Q_OBJECT

public:
    explicit AnimeForAll(QWidget *parent = nullptr);
    ~AnimeForAll();

private:
    Ui::AnimeForAll *ui;
};

#endif // ANIMEFORALL_H
