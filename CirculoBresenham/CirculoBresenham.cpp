/* ALGORITMO DE BRESENHAM PARA LAS CIRCUNFERENCIAS*/

#include <iostream>
#include <queue>
#include <math.h>
#include <stdlib.h>

using namespace std;

/* CREAMOS NUESTRA CLASE PUNTO PARA PODER CREAR OBJETOS PUNTO*/
class Punto
{
    /*VARIABLES PARA LAS COORDENADAS QUE GUARDARÁ EL PUNTO*/
    int x, y;
    queue<Punto> cola; //COLA EN DONDE SE GUARDARAN LOS PUNTOS GENERADOS

    public:
        //Consructor de objeto vacio "Sin parametros"
        Punto(){};

        //Constructo con parametros definidos
        Punto(int x1, int y1)
        {
            x = x1;
            y = y1;
        };

        //METODOS GET PARA OBTENER Y SET PARA ESTABLECER LOS PARAMETROS (X,Y) EN EL OBJETO.
        int getX();
        int getY();
        void setX(int n);
        void setY(int n);

        /*METODO QUE NOS REGRESA UNA COLA LLENA DE PUNTOS GENERADOS POR EL ALGORITMO*/
        queue<Punto> realizarCirculo(Punto A, Punto B, queue<Punto> cola);

        //METODO EXTRA PARA PODER VER LA PILA O MEJOR DICHO VER LOS PUNTOS GENERADOS
        void verPila(queue<Punto> colita);

        //queue<Punto> realizarC(int pX, int pY, queue<Punto> cola);
};

/*DEFINIMOS NUESTROS METODOS GET Y SET YA ANTES DECLARADOS*/
int Punto::getX()
{
    return x;
}

int Punto::getY()
{
    return y;
}

void Punto::setX(int n)
{
    x = n;
}

void Punto::setY(int n)
{
    y = n;
}

/* COMENZAMOS EL METODO QUE GENERARÁ LOS PUNTOS DE LA CIRCUNFERENCIA POR EL ALGORITMO DE BRESENHAM*/
queue<Punto> realizarCirculo(Punto A, queue<Punto> cola)
{
    /*SEGÚN EL ALGORITMO r VA A SER IGUAL A LOQUE NOS PASEN EN LA COORDENADA "X", DADO LA SIG. FORMA P=(r,0)*/
    int r;
    int x, y;
    int e, Es, Ed;

    /*COMENZAMOS CON LAS REGLAS O LIMITACIONES QUE TIENEN LOS PUNTOS INGRESADOS*/
    if(A.getX() >= 0 & A.getY() >= 0)
    {
        while( A.getX() > A.getY() )
        {
            /* INSERTAMOS EN NUESTRA COLA LOS PUNTOS TRAZADOS POR SIMETRIA.*/
            /* P = (X,Y)*/
            Punto pF;
            pF.setX(A.getX());
            pF.setY(A.getY());
            cola.push(pF);
            /* P = (-X, -Y)*/
            Punto pA;
            pA.setX(-1*A.getX());
            pA.setY(-1*A.getY());
            cola.push(pA);
            /* P = (-X, Y)*/
            Punto pB;
            pB.setX(-1*A.getX());
            pB.setY(A.getY());
            cola.push(pB);
            /* P = (X, -Y)*/
            Punto pC;
            pC.setX(A.getX());
            pC.setY(-1*A.getY());
            cola.push(pC);
            /* INVERTIMOS LOS PUNTOS X PASA A Y Y VICEVERSA.*/
            /* P = (Y, X)*/
            Punto pD;
            pD.setX(A.getY());
            pD.setY(A.getX());
            cola.push(pD);
            /* P = (-Y, -X)*/
            Punto pE;
            pE.setX(-1*A.getY());
            pE.setY(-1*A.getX());
            cola.push(pE);
            /* P = (-Y, X)*/
            Punto pG;
            pG.setX(-1*A.getY());
            pG.setY(A.getX());
            cola.push(pG);
            /* P = (Y, -X)*/
            Punto pH;
            pH.setX(A.getY());
            pH.setY(-1*A.getX());
            cola.push(pH);

            e = pow(A.getX(),2) + pow(A.getY(),2) - pow(r,2);
            Es = e + 2*(A.getY()) + 1;
            Ed = Es - 2*(A.getX()) +1;

            if( abs(Es) > abs(Ed))
            {
                int rx = A.getX();
                int ry = A.getY();

                A.setX(rx-1);
                A.setY(ry+1);

            }else
            {
                int rx = A.getX();
                int ry = A.getY();

                A.setX(rx);
                A.setY(ry+1);
            }
        }
    }

    return cola;
}

void verPila(queue<Punto> pilota)
{
    cout << "Imprimiendo la pila de puntos";

    while(!pilota.empty())
    {
        Punto punto;
        punto = pilota.front();

        pilota.pop();
        cout << "[ "<<punto.getX()<<" , "<<punto.getY()<<"]"<<endl;
    }
}

int main()
{
    int x0, y0;

    queue<Punto> colaPuntos;
    queue<Punto> cola2;

    //INGRESAREMOS EL PUNTO CON EL QUE TRABAJAREMOS PARA CALCULAR LA CIRCUNFERENCIA
    cout << "COORDENADA EN X -->";
    cin >> x0;

    cout << "COORDENADA EN Y -->";
    cin >> y0;


    Punto puntoI;
    puntoI.setX(x0);
    puntoI.setY(y0);

    /*cout << "- "<<puntoI.getX()<<" , "<<puntoI.getY()<<" -";

    puntoI.setX(-1*x0);
    puntoI.setY(-1*y0);

    cout << "- "<<puntoI.getX()<<" , "<<puntoI.getY()<<" -";*/

    cola2 = realizarCirculo(puntoI, colaPuntos);
    verPila(cola2);


    return 0;
}
