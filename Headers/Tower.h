#ifndef TOWER_H
#define TOWER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>
#include <QPointF>
#include <QObject>

class Tower:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Tower(QGraphicsItem * parent=0);
    double distanceTo(QGraphicsItem * item);
    void fire();
public slots:
    void get_target();
private:
    QGraphicsPolygonItem * attack_area;
    QPointF attack_dest,tcenter;
    bool has_target;
};

#endif // TOWER_H