#include <iostream> //Funciones Estandar
#include <fstream> //Libreria para manejar ficheros.
//#include <stdlib.h> //Libreria para manejar las funciones rand y srand
#include <time.h> //Libreria donde encontramos el timepo.

using namespace std;


//Definimos un tipo de estructura para almacenar las variable X y Y.
typedef struct{
    double x;
    double y;
    }punto;

    int n;
    punto resultado;

    dibujar_sierpinski(punto A, punto B, punto C, n)
    {
        if(n == 0)
        {
            dibujarTriagulo(punto A, punto B, punto C);

            return 0;
        }else
        {
            punto AB = calcularMitad(A, B);
            punto BC = calcularMitad(B, C);
            punto CA = calcularMitad(C, A);

            fichero << AB.x << " " << AB.y << endl;
            fichero << BC.x << " " << BC.y << endl;
            fichero << CA.x << " " << CA.y << endl;

            dibujar_sierpinski(A, AB, CA, n-1);
            dibujar_sierpinski(AB, B, BC, n-1);
            dibujar_sierpinski(CA, BC, C, n-1);

        }

    }

    calcularMitad(punto A, punto B)
    {
        resultado.x = (A.x + B.x)/2;
        resultado.y = (A.y + A.y)/2;

        return resultado;
    }

int main()
{
    double lado;
    double nIteraciones;

    punto A;
    punto B;
    punto C;

    ofstream fichero;
    fichero.open("puntos.txt");

    cout << "Ingresa el tamaño del lado del triangulo: ";
    cin >> lado;

    cout << "Ingrese el numero de iteraciones: ";
    cin >> nIteraciones;

    A.x = 0;
    A.y = 0;

    B.x = 0;
    B.y = lado;

    C.x =lado/2;
    C.y = lado;

    fichero << A.x << " " << A.y << endl;
    fichero << B.x << " " << B.y << endl;
    fichero << C.x << " " << C.y << endl;

    dibujar_sierpinski(puntoA, puntoB, puntoC, n);


    return 0;
}
