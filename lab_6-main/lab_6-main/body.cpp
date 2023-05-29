#include "body.h"
#include <math.h>
#include <cmath>
#include <iomanip>

body::body(float PX_, float PY_, float VX_, float VY_, float mass, float R_) //Datos del movimiento
{
    PX = PX_;
    PY = PY_;
    VX = VX_;
    VY = VY_;
    masa = mass;
    AX = 0;
    AY = 0;
    G = 1;
    R = R_;
}

float body::getPY() const
{
    return PY;
}

float body::getPX() const
{
    return PX;
}


float body::getMasa() const
{
    return masa;
}

float body::getR() const
{
    return R;
}
void body::acelerar(float px2_, float py2_, float mass2)
{   //ecuaciones
    radio = sqrt(pow(px2_-PX,2)+pow(py2_-PY,2)); //r : distancia entre los 2 planetas
    AX += G*mass2*(px2_-PX)/pow(radio,3); //aceleracion gravitacional X
    AY += G*mass2*(py2_-PY)/pow(radio,3); //aceleracion gravitacional Y
}

void body::actualizar(float dt)
{
    if(band)escribir(),band=false;
    VX = VX + (AX*dt);
    VY = VY + (AY*dt);
    PX = PX + (VX*dt);
    PY = PY + (VY*dt);
    agg();


}

void body::escribir()
{
    fstream text(nombre, fstream::out);

    text << "PX";
    text << setw(12) << "PY";
    text << setw(12) << "VX";
    text << setw(12) << "VY";
}

void body::agg()
{
    fstream text(nombre, fstream::app);
    text << endl;
    text << PX;
    text << setw(10);
    text << PY;
    text << setw(10);
    text << VX;
    text << setw(10);
    text << VY;
    text << endl;

    text.close();
}

void body::ini_aceleraciones()
{
    AX = 0;
    AY = 0;

}
