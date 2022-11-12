#ifndef SKIOBSTICLE_H
#define SKIOBSTICLE_H

#include<QImage>
#include <QObject>

class SkiObsticle : public QObject
{
    Q_OBJECT
public:
    explicit SkiObsticle(QObject *parent = nullptr);

    QImage getTree();
    QImage getSnowman();
    int getX();
    void setX(int a);
    int getY();
    void setY(int a);

    enum Stanje { jelka, snesko };
    Stanje r;

signals:

private:
    int x, y;
    int h = 35, w = 35;
    QImage tree, snowman;

};

#endif // SKIOBSTICLE_H
