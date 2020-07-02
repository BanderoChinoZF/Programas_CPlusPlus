/* ALGORITMO BRESENHAM PARA TRAZAR UNA LINEA */

#include <iostream>
#include <queue>
#include <math.h>
#include <stdlib.h>

using namespace std;

class Punto
{
    int x, y;
    queue<Punto> cola;

    public:
        //Consructor de objeto vacion "Sin parametros"
        Punto(){};

        //Constructo con parametros definidos
        Punto(int x1, int y1)
        {
            x = x1;
            y = y1;
        };

        //Metodo get para obtener los parametros del objeto punto
        int getX();
        int getY();
        void setX(int n);
        void setY(int n);
        queue<Punto> realizarBresenham(Punto A, Punto B, queue<Punto> cola);
        void verPila(queue<Punto> pilota);
};

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

queue<Punto> realizarBresenham(Punto i, Punto f, queue<Punto> pilita)
{
    int dX, dY, pDecision;

    bool bandera1 = true;
    bool bandera2 = false;

    if((f.getX()<i.getX() & f.getY()>i.getY())|
       (f.getX()>i.getX() & f.getY()<i.getY() & (f.getY()-i.getY())<0 & (f.getX()-i.getX())<0)|
       (f.getX()<i.getX() & f.getY()<i.getY())|
       (f.getX()==i.getX() & f.getY()<i.getY())|
       (i.getY()==f.getY() & i.getX()>f.getX() ))
    {
        /*Hacemos nuestras variables temporales, para poder intercambiar los puntos*/
        int tmp1=i.getX();  int tmp2=i.getY();

        //Intercambiamos los valoes de X e Y del punto inicial al final.
		i.setX(f.getX());	i.setY(f.getY());
		f.setX(tmp1);	    f.setY(tmp2);
	}

	int deltaX = f.getX() - i.getX();
	int deltaY = f.getY() - i.getY();

	if(deltaY > 0 & deltaX > 0 & deltaY > deltaX | deltaX == 0)
    {
        int temp1 = i.getX();	int temp2 = f.getX();
		i.setX(i.getY());	i.setY(temp1);
		f.setX(f.getY());	f.setY(temp2);

		bandera1 = false;
	}
	else if(deltaY < 0 & deltaX > 0 & deltaY < deltaX & (deltaY/deltaX) <= -1)
	{
	    int t1 = i.getX();	int t2 = i.getY();

		i.setX(f.getY());	i.setY(f.getX());
		f.setX(t2);		    f.setY(t1);

		bandera1 = false;
		bandera2 = true;
	}
	else if(deltaY < 0 & deltaX > 0 & deltaY < deltaX & (deltaY/deltaX)>-1)
	{
	    bandera2 = true;
    }

    dX = abs(f.getX() - i.getX());
    dY = abs(f.getY() - i.getY());
	pDecision = (2*dY)-dX;

	if(bandera1)
	{
	    Punto pF;
	    pF.setX(i.getX());
	    pF.setY(i.getY());

	    pilita.push(pF);
    }
	else
	{
	    Punto pF;
	    pF.setX(i.getX());
	    pF.setY(i.getY());

	    pilita.push(pF);
    }
	while(i.getX() < f.getX() )
	{
	    if(pDecision < 0)
	    {
	        i.setX(i.getX() + 1);
            pDecision = pDecision + 2*dY;
        }
        else if(pDecision >= 0)
        {
            i.setX(i.getX()+1);
            if(!bandera2)
            {
                i.setY(i.getY()+1);
            }
			else
			{
			    i.setY(i.getY()-1);
            }
            pDecision = pDecision + 2*(dY-dX);
        }
        if(bandera1)
            {
                Punto pF;
                pF.setX(i.getX());
                pF.setY(i.getY());

                pilita.push(pF);
            }
        else
        {
            Punto pF;
            pF.setX(i.getX());
            pF.setY(i.getY());

            pilita.push(pF);
        }
    }
    return pilita;
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
    int x1, y1;

    queue<Punto> pilaPuntos;
    queue<Punto> pilaPuntos2;

    //Ingresamos los dos puntos con los que trabajaremos el algoritmo
    cout << "Primer punto X -->";
    cin >> x0;

    cout << "Primer punto Y -->";
    cin >> y0;

    cout << "Segundo punto X -->";
    cin >> x1;

    cout << "Segundo punto y -->";
    cin >> y1;

    Punto puntoI;
    puntoI.setX(x0);
    puntoI.setY(y0);

    Punto puntoF;
    puntoF.setX(x1);
    puntoF.setY(y1);

    pilaPuntos2 = realizarBresenham(puntoI,puntoF,pilaPuntos);
    verPila(pilaPuntos2);

    return 0;
}
