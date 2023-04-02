#ifndef ANIMEFORALL_H
#define ANIMEFORALL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class AnimeForAll; }
QT_END_NAMESPACE

class AnimeForAll : public QWidget
{
    Q_OBJECT

public:
    AnimeForAll(QWidget *parent = nullptr);
    ~AnimeForAll();

private:
    Ui::AnimeForAll *ui;
};

#endif // ANIMEFORALL_H