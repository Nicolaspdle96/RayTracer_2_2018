#include "Vector3D.h"

Vector3D:: Vector3D(){
    x=0;
    y=0;
    z=0;
}

Vector3D::Vector3D(double n){
    x=n;
    y=n;
    z=n;

}

Vector3D::Vector3D(double i, double j, double k){
    x = i;
    y = j;
    z = k;
}

Vector3D Vector3D::operator+(Vector3D v)
{
    Vector3D resultado;
    resultado.x = x+v.x;
    resultado.y = y+v.y;
    resultado.z = z+v.z;
    return resultado;
}

Vector3D Vector3D::operator-(Vector3D v)
{
    Vector3D resultado;
    resultado.x = x-v.x;
    resultado.y = y-v.y;
    resultado.z = z-v.z;
    return resultado;
}

Vector3D Vector3D::operator*(double n){
    Vector3D resultado;
    resultado.x = x*n;
    resultado.y = y*n;
    resultado.z = z*n;
    return resultado;
}

Vector3D operator*(double n, Vector3D v)
{
    return( Vector3D(n*v.x, n*v.y, n*v.z));
}

void Vector3D:: mostrarCoordenadas(){
    cout<<"<"<<x<<","<<y<<","<<z<<">"<<endl;
} 


