#ifndef WIDGET_H
#define WIDGET_H
#include <QPaintEvent>

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void paintEvent(QPaintEvent *);
    void drawPaint(QPainter &painter,int d);
};

#endif // WIDGET_H
