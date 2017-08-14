#include "widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(800,600);
}

Widget::~Widget()
{

}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    drawPaint(painter,600);
//    painter.setBrush(Qt::white);

//    painter.drawEllipse(QPoint(400,300),300,300);

//    QRectF rectangle2(100, 0, 600, 600);
//    int startAngle = 270 * 16;
//    int spanAngle = 180 * 16;
//    painter.setBrush(Qt::black);
//    painter.drawChord(rectangle2, startAngle, spanAngle);

//    painter.setBrush(Qt::black);
//    painter.drawEllipse(QPoint(400,150),150,150);
//    painter.setBrush(Qt::white);
//    painter.drawEllipse(QPoint(400,150),75,75);

//    QRectF rectangle3(250, 300, 300, 300);
//    startAngle = 270 * 16;
//    spanAngle = 180 * 16;
//    painter.setBrush(Qt::white);
//    painter.drawChord(rectangle3, startAngle, spanAngle);

//    painter.setPen(Qt::white);
//    painter.drawLine(QPoint(400,300),QPoint(400,600));

//    painter.setBrush(Qt::black);
//    painter.drawEllipse(QPoint(400,450),75,75);



//    QRectF rectangle(250, 0, 300, 300);
//    int startAngle = 90 * 16;
//    int spanAngle = 180 * 16;
//    painter.setBrush(Qt::black);
//    painter.drawArc(rectangle, startAngle, spanAngle);

//    QRectF rectangle1(250, 300, 300, 300);
//    startAngle = 270 * 16;
//    spanAngle = 180 * 16;

//    painter.drawArc(rectangle1, startAngle, spanAngle);



//    QRectF rectangle3(100, 0, 600, 600);
//    startAngle = 270 * 16;
//    spanAngle = 180 * 16;

//    painter.drawArc(rectangle3, startAngle, spanAngle);



}

void Widget::drawPaint(QPainter &painter, int d)
{
    painter.setBrush(Qt::white);

    painter.drawEllipse(QPoint(d/2,d/2),d/2,d/2);

    QRectF rectangle2(0, 0, d, d);
    int startAngle = 270 * 16;
    int spanAngle = 180 * 16;
    painter.setBrush(Qt::black);
    painter.drawChord(rectangle2, startAngle, spanAngle);

    painter.setBrush(Qt::black);
    painter.drawEllipse(QPoint(d/2,d/4),d/4,d/4);
    painter.setBrush(Qt::white);
    painter.drawEllipse(QPoint(d/2,d/4),d/8,d/8);

    QRectF rectangle3(d/4, d/2, d/2, d/2);
    startAngle = 270 * 16;
    spanAngle = 180 * 16;
    painter.setBrush(Qt::white);
    painter.drawChord(rectangle3, startAngle, spanAngle);

    painter.setPen(Qt::white);
    painter.drawLine(QPoint(d/2,d/2),QPoint(d/2,d));

    painter.setBrush(Qt::black);
    painter.drawEllipse(QPoint(d/2,3*d/4),d/8,d/8);
}



//void Widget::paintEvent(QPaintEvent *)
//{
//    QPainter painter(this);

//    painter.drawEllipse(QPoint(400,300),300,300);

//    painter.setBrush(Qt::white);
//    painter.drawEllipse(QPoint(400,150),75,75);

//    painter.setBrush(Qt::black);
//    painter.drawEllipse(QPoint(400,450),75,75);

//    QRectF rectangle(250, 0, 300, 300);
//    int startAngle = 90 * 16;
//    int spanAngle = 180 * 16;

//    painter.drawArc(rectangle, startAngle, spanAngle);

//    QRectF rectangle1(250, 300, 300, 300);
//    startAngle = 270 * 16;
//    spanAngle = 180 * 16;

//    painter.drawArc(rectangle1, startAngle, spanAngle);


//}
