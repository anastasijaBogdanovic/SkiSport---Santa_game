#include "skisanta.h"

SkiSanta::SkiSanta(QObject *parent) : QObject(parent)
{
    santa1.load(":/new/prefix1/IMAGES/santa1.png");
    santa2.load(":/new/prefix1/IMAGES/santa2.png");
    santaLeft1.load(":/new/prefix1/IMAGES/santa-left1.png");
    santaLeft2.load(":/new/prefix1/IMAGES/santa-left2.png");
    santaRight1.load(":/new/prefix1/IMAGES/santa-right1.png");
    santaRight2.load(":/new/prefix1/IMAGES/santa-right2.png");

    santa1.setDotsPerMeterX(h);
    santa1.setDotsPerMeterY(w);
    santa2.setDotsPerMeterX(h);
    santa2.setDotsPerMeterY(w);
    santaLeft1.setDotsPerMeterX(h);
    santaLeft1.setDotsPerMeterY(w);
    santaLeft2.setDotsPerMeterX(h);
    santaLeft2.setDotsPerMeterY(w);
    santaRight1.setDotsPerMeterX(h);
    santaRight1.setDotsPerMeterY(w);
    santaRight2.setDotsPerMeterX(h);
    santaRight2.setDotsPerMeterY(w);
    r=pravo;
}

void SkiSanta::kordinataX(int a)
{
    x+=a;
}

int SkiSanta::getKordinataX()
{
    return x;
}

int SkiSanta::getY()
{
    return y;
}

QImage SkiSanta::getSanta1()
{
    return santa1;
}

QImage SkiSanta::getSanta2()
{
    return santa2;
}

QImage SkiSanta::getSantaLeft1()
{
    return santaLeft1;
}

QImage SkiSanta::getSantaLeft2()
{
    return santaLeft2;
}

QImage SkiSanta::getSantaRight1()
{
    return santaRight1;
}

QImage SkiSanta::getSantaRight2()
{
    return santaRight2;
}

void SkiSanta::setStanje(int x)
{
    if (x == 1)
        r = levo;

    else if (x == 0)
        r = pravo;
    else
        r = desno;
}

