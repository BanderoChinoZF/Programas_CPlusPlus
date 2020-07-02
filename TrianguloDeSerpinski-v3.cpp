#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<stdlib.h>
#include <iostream>
#include<fstream>

using namespace std;

void sierpinski(int iteraciones, int tamanio, ofstream f)
{
    int d;
    int i;
    int x1,y1,x2,y2;
    int tam2;

    x1=x2=tamanio;
    y1=y1=0;

    tam2 = tamanio/2;


    for(i=0;i<100*iteraciones;i++)
    {
        d = rand()%3;

        if(d == 0)
        {
            x1 = (x2+tamanio)/2;
            y1 = (y2+0)/2;

            f << x1 << "/t" << y1 << endl;
        }
        else if(d == 1)
        {
            x1 = (x2+0)/2;
            y1 = (y2+(tamanio+tam2))/2;

            f << x1 << "/t" << y1 << endl;
        }
        else if(d == 2)
        {
            x1 = (x2+tamanio*2)/2;
            y1 = (y2+(tamanio+tam2))/2;

            f << x1 << "/t" << y1 << endl;
        }

         f << x1 << "/t" << y1 << endl;

        putpixel(x1,y1,GREEN);
        x2=x1;
        y2=y1;
    }
}

int main()
{
    int it, tam;
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    //Abrimos nuestro fichero en donde guardaremos cado punto que se cree en nuestro archivo.
    ofstream fichero;
    fichero.open("puntos.txt"); //Abrimos nuestro achivo para escribir

    cout << "Ingrese el tamañano del triangulo --> ";
    cin >> tam;

    cout << "Ingrese el num de iteraciones --> ";
    cin >> it;

    sierpinski(it, tam, fichero);

    fichero.close();
    getch();
    closegraph();
    return 0;
}
