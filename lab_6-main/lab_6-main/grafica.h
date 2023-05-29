#ifndef GRAFICA_H
#define GRAFICA_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "body.h"

class Grafica: public QGraphicsItem
{
public:
    Grafica(float x, float y, float vx, float vy, float m, float r);
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
    void actualizar(float dt);
    body* getEsf();


private:
    body *esf;
    float escala = 1000.0;
    // Reiniciar las aceleraciones
};
#endif // GRAFICA_H
