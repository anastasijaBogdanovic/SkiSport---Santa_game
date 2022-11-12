#ifndef SKISANTA_H
#define SKISANTA_H

#include <QObject>
#include<QImage>

class SkiSanta : public QObject
{
    Q_OBJECT
public:
    explicit SkiSanta(QObject *parent = nullptr);

    void kordinataX(int a);
    int getKordinataX();
    int getY();
    QImage getSanta1();
    QImage getSanta2();
    QImage getSantaLeft1();
    QImage getSantaLeft2();
    QImage getSantaRight1();
    QImage getSantaRight2();
    void setStanje(int x);

    enum Stanje { pravo, levo, desno };
    Stanje r = pravo;


signals:

private:
    QImage santa1, santa2, santaLeft1, santaLeft2, santaRight1, santaRight2;
    int x = 350, y = 100;
    int h = 35, w = 35;

};

#endif // SKISANTA_H
