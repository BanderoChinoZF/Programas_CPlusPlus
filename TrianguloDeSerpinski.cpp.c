#include <iostream> //Funciones Estandar
#include <fstream> //Libreria para manejar ficheros.
#include <time.h> //Libreria donde encontramos el timepo.

using namespace std;

typedef struct{
    double x;
    double y;
    }punto;

/* Funcion de encontrar la mitad de un segmento*/
//Dados dos puntos encontramos el punto medio entre estos.
punto calcularMitad(punto a, punto b)
{
    punto centro;

    centro.x = (a.x + b.x)/2;
    centro.y = (a.y + b.y)/2;

    return centro;
}

int main()
{
    //Crearemos un fichero .txt de salida llamados
    ofstream fichero;
    fichero.open("puntos.txt");

    punto triangulo[3] = {
        {0,0},
        {-1,-1},
        {1,-1}
    };

    for(int i = 0; i < N; i++)
    {
        variable = encontrarMitad(triangulo[r], variable);

        /*Por ultimo escribimos el resultado en el fichero
        //con el formato:
          x1 y1
          x2 y2
          x3 y3
          ...
        */
        fichero << variable.x << " " << variable.y << endl;
    }

    fichero.close(); //Es importante cerrar el fichero


    return 0;


}

