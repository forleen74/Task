#include "example.h"
#include "ui_example.h"

Example::Example(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Example)
{
    timer = new QTimer(this);
    ui->setupUi(this);
    x=100;
    y=50;
    connect(timer,SIGNAL(timeout()),this,SLOT(OnTimer()));
    timer->start(100);
}

Example::~Example()
{
    delete ui;
}

void Example::paintEvent(QPaintEvent *)
{ QPainter paint(this);
    draw(paint,x,y);
}

void Example::draw(QPainter &paint, int x, int y)
{
    //
    paint.setBrush(QBrush(Qt::black,Qt::SolidPattern));
    paint.drawEllipse(x,y+100,50,50);
    paint.drawEllipse(x+200,y+100,50,50);
    paint.drawEllipse(x+50,y+100,50,50);
    paint.drawEllipse(x+250,y+100,50,50);
    //p
    QPolygon polygon;
    int *a= new int  [10];
    for(int i=0;i<10;i+=2)
    {
        a[i]=x;
        a[i+1]=y;
    }
    a[3]+=100;
    a[4]+=300;
    a[5]=a[3];
    a[6]+=300;
    brush.setStyle(Qt::SolidPattern);
    paint.setBrush(brush);
    polygon.setPoints(4,a);
    paint.drawPolygon(polygon);
}

void Example::on_action_2_triggered()
{
    brush.setColor(Qt::red);
    update();
}

void Example::on_action_3_triggered()
{
    brush.setColor(Qt::blue);
    update();
}

void Example::OnTimer()
{
    x+=1;
    update();
}
