#include <iostream>
using namespace std;

class Vector3D{
    public: 
        Vector3D();
        Vector3D(double n);
        Vector3D(double,double,double);
        Vector3D operator+(Vector3D);
        Vector3D operator-(Vector3D);
        Vector3D operator*(double);
        friend Vector3D operator*(double n, Vector3D );

        // Vector3D operator+ (const Vector3D& v) const;
        //friend Vector3D operator* (double n, const Vector3D& v); // Multiplicar un escalar por un vector 

        double x, y, z;

        void mostrarCoordenadas();
};