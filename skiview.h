#ifndef SKIVIEW_H
#define SKIVIEW_H
#include<QTimer>
#include <QWidget>
#include<QPainter>
#include<QKeyEvent>
#include"skigame.h"

class SkiView : public QWidget
{
    Q_OBJECT
public:
    explicit SkiView(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

signals:

public slots:
    void tick();

private:
    QTimer *t;
    SkiGame s;
};

#endif // SKIVIEW_H
