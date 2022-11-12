#ifndef SKIGAME_H
#define SKIGAME_H

#include <QObject>
#include"skisanta.h"
#include"skiobsticle.h"

class SkiGame : public QObject
{
    Q_OBJECT
public:
    explicit SkiGame(QObject *parent = nullptr);

    void tick(int w,int h);
    void moveSanta(int dx);
    void draw(QPainter & p);
    void StanjeDedaMraza(int x);


signals:

private:
    SkiSanta a;
    QList<SkiObsticle*> prepreka;
    int d = 0;

};

#endif // SKIGAME_H
