#include "Vector3D.h"

int main()
{
    Vector3D vector;
    Vector3D vectorIgual(5.0);
    Vector3D vector2(2.5,4.2,3.8);
    vector.mostrarCoordenadas();
    vectorIgual.mostrarCoordenadas();
    vector2.mostrarCoordenadas();
    Vector3D v = vector2+vectorIgual;
    v.mostrarCoordenadas();
    Vector3D v2 = vector2-vectorIgual;
    v2.mostrarCoordenadas();

    Vector3D v3 = vector2*2.0;
    v3.mostrarCoordenadas();

    Vector3D v4 = 2.0*v3;
    v4.mostrarCoordenadas();
    return 0;
}