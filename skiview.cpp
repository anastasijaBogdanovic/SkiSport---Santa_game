#include "skiview.h"
#include"skigame.h"
#include<QPainter>
#include<QTimer>

SkiView::SkiView(QWidget *parent) : QWidget(parent)
{
    t = new QTimer(this);
    connect (t, SIGNAL(timeout()), this, SLOT(tick()));
    t -> start(20);
}

void SkiView::paintEvent(QPaintEvent * event)
{
    QPainter p(this);
    s.draw(p);
}

void SkiView::keyPressEvent(QKeyEvent *event)
{
    switch(event -> key())
        {

        case Qt::Key_Right:
            s.moveSanta(2);
            s.StanjeDedaMraza(-1);
            break;

        case Qt::Key_Left:
            s.moveSanta(-2);
            s.StanjeDedaMraza(1);
            break;

        default:
            QWidget::keyPressEvent(event);

    }

    this->repaint();
}

void SkiView::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left || event->key()==Qt::Key_Right)
    {
        s.moveSanta(0);
        s.StanjeDedaMraza(0);
    }
}

void SkiView::tick()
{
    s.tick(width(),height());
    this -> repaint();
}
