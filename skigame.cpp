#include "skigame.h"
#include<QImage>
#include<QPainter>
#include<QTime>
#include"skiview.h"

SkiGame::SkiGame(QObject *parent) : QObject(parent)
{
    for(int i=0;i<10;i++)
    {

        SkiObsticle* s1=new SkiObsticle();
        prepreka << s1;

        SkiObsticle* s2=new SkiObsticle();
        prepreka << s2;

        SkiObsticle* s3=new SkiObsticle();
        prepreka << s3;

        SkiObsticle* s4=new SkiObsticle();
        prepreka << s4;

    }
}

void SkiGame::tick(int w, int h)
{
    for(int i=0;i<prepreka.length();i++)
    {
        if(prepreka[i]->getY()==0)
        {
            prepreka[i]->setY(h);
            prepreka[i]->setX(rand()%w);
        }
        else prepreka[i]->setY(prepreka[i]->getY()-1);
    }
}

void SkiGame::moveSanta(int dx)
{
    a.kordinataX(dx);
}

void SkiGame::draw(QPainter& p)
{

    if(a.r == a.Stanje::pravo)
    {
        if (d == 0)
        {
            QImage y1 = a.getSanta1();
            p.drawImage(a.getKordinataX(), a.getY(), y1);

            d++;
        }

        if (d == 1)
        {
            QImage y2 = a.getSanta2();
            p.drawImage(a.getKordinataX(), a.getY(), y2);

            d--;
        }

        for(int i = 0; i < prepreka.length(); i++)
        {
            if(prepreka[i]->r == prepreka[i]->Stanje::jelka)
            {
                QImage y = prepreka[i]->getTree();
                p.drawImage(prepreka[i]->getX(), prepreka[i]->getY(), y);
            }

            else
            {
                QImage y = prepreka[i]->getSnowman();
                p.drawImage(prepreka[i]->getX(), prepreka[i]->getY(), y);
            }
        }
    }

    else if(a.r == a.Stanje::levo)
    {
        if (d == 0)
        {
            QImage y1 = a.getSantaLeft1();
            p.drawImage(a.getKordinataX(), a.getY(), y1);

            d++;
        }

        if (d == 1)
        {
            QImage y2 = a.getSantaLeft2();
            p.drawImage(a.getKordinataX(), a.getY(), y2);

            d--;
        }

        for(int i = 0; i < prepreka.length(); i++)
        {
            if(prepreka[i]->r == prepreka[i]->Stanje::jelka)
            {
                QImage y = prepreka[i]->getTree();
                p.drawImage(prepreka[i]->getX(), prepreka[i]->getY(), y);
            }

            else
            {
                QImage y = prepreka[i]->getSnowman();
                p.drawImage(prepreka[i]->getX(), prepreka[i]->getY(), y);
            }
        }
    }

    else if(a.r == a.Stanje::desno)
    {
        if (d == 0)
        {
            QImage y1 = a.getSantaRight1();
            p.drawImage(a.getKordinataX(), a.getY(), y1);

            d++;
        }

        if (d == 1)
        {
            QImage y2 = a.getSantaRight2();
            p.drawImage(a.getKordinataX(), a.getY(), y2);

            d--;
        }
    }

    for(int i = 0; i < prepreka.length(); i++)
    {
        if(prepreka[i]->r == prepreka[i]->Stanje::jelka)
        {
            QImage y = prepreka[i]->getTree();
            p.drawImage(prepreka[i]->getX(), prepreka[i]->getY(), y);
        }

        else
        {
            QImage y = prepreka[i]->getSnowman();
            p.drawImage(prepreka[i]->getX(), prepreka[i]->getY(), y);
        }
    }

}

void SkiGame::StanjeDedaMraza(int x)
{
    a.setStanje(x);
}
