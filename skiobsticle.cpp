#include "skiobsticle.h"

SkiObsticle::SkiObsticle(QObject *parent) : QObject(parent)
{
    int a = rand() % 2;
    if(a == 0)
    {
        r = jelka;

        tree.load(":/new/prefix1/IMAGES/tree.png");
        tree.setDotsPerMeterX(h);
        tree.setDotsPerMeterY(w);
    }
    else
    {
        r = snesko;

        snowman.load(":/new/prefix1/IMAGES/snowman.png");
        snowman.setDotsPerMeterX(h);
        snowman.setDotsPerMeterY(w);
    }

    x = rand() % 350;
    y = rand() % 500;

}

QImage SkiObsticle::getTree()
{
    return tree;
}

QImage SkiObsticle::getSnowman()
{
    return snowman;
}

int SkiObsticle::getX()
{
    return x;
}

void SkiObsticle::setX(int a)
{
    x = a;
}

int SkiObsticle::getY()
{
    return y;
}

void SkiObsticle::setY(int a)
{
    y = a;
}


