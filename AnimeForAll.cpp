#include <QApplication>
#include <QLabel>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonDocument>
#include <QJsonObject>
#include <QEventLoop>
#include "LoginWindow.h"
#include "ui_AnimeForAll.h"
#include "AnimeForAll.h"

AnimeForAll::AnimeForAll(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnimeForAll)
{
    ui->setupUi(this);
}

AnimeForAll::~AnimeForAll()
{
    delete ui;
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QNetworkAccessManager manager;
    QNetworkRequest request;
    request.setUrl(QUrl("https://shikimori.one/api/users/whoami"));

    QString token = "your_access_token_here";
    request.setRawHeader("Authorization", QByteArray("Bearer ") + token.toUtf8());

    QEventLoop loop;

    auto reply = manager.get(request);

    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);

    loop.exec();

    auto data = reply->readAll();

    QJsonDocument document = QJsonDocument::fromJson(data);

    QString username = document.object().value("nickname").toString();
    int id = document.object().value("id").toInt();
    int last_online = document.object().value("last_online").toInt();
    int anime_minutes = document.object().value("stats").toObject().value("anime_minutes").toInt();

    QString text = QString("Username: %1\nID: %2\nLast online: %3\nAnime minutes: %4")
            .arg(username).arg(id).arg(last_online).arg(anime_minutes);

    QLabel label(text);
    label.show();

    // Окно входа
    LoginWindow loginWindow;
    loginWindow.exec();

    // Если данные введены правильно
    if (loginWindow.result() == QDialog::Accepted) {
        AnimeForAll mainWindow;
        mainWindow.show();
        return app.exec();
    }

    return app.exec();
}
