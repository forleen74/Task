#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QMainWindow>

#include <Qpainter>
#include <QTimer>

namespace Ui {
class Example;
}

class Example : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Example(QWidget *parent = 0);
    ~Example();
    void paintEvent(QPaintEvent *);
    void draw(QPainter & paint,int x,int y);
    
private slots:
    void on_action_2_triggered();

    void on_action_3_triggered();

private:
    Ui::Example *ui;
    QBrush brush;
    QTimer *timer;
    int x,y;
    public slots:
    void OnTimer();
};

#endif // EXAMPLE_H
