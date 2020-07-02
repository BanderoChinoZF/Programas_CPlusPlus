#include "Punto.h"
#include "Pila.h"
#include <queue>
#include <math.h>
#include <stdlib.h>
#include <graphics.h>

using namespace std;

//METODO PARA REALIZAR EL CALCULO DE PUNTOS DE UNA LINEA POR EL ALGORITMO DE BRESENHAM
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

//funcion que regresa una pila con los puntos para dibujar una linea
Pila hacerLinea(int Xi, int Yi, int Xf, int Yf){
    Pila pi;
    int dx, dy, p;
    bool b = true;
    bool d = false;
	if((Xf<Xi & Yf>Yi)|(Xf>Xi & Yf<Yi & (Yf-Yi)<0 & (Xf-Xi)<0)|(Xf<Xi & Yf<Yi)|(Xf==Xi & Yf<Yi)|(Yi==Yf & Xi>Xf )){
		int t1 = Xi; 		int t2 = Yi;
		Xi = Xf;	Yi = Yf;	Xf = t1;	Yf = t2;
	}
	int aY = Yf -Yi;
	int aX = Xf -Xi;
	if(aY >0 & aX > 0 & aY > aX | aX == 0){
		int t1 = Xi;	int t2 = Xf;
		Xi = Yi;	Yi = t1;	Xf = Yf;	Yf = t2;
		b = false;
	}
	else if(aY < 0 & aX > 0 & aY < aX & (aY/aX)<=-1){
		int t1 = Xi;	int t2 = Yi;
		Xi = Yf;		Yi = Xf;		Xf = t2;		Yf = t1;
		b = false; 		d = true;
	}
	else if(aY < 0 & aX > 0 & aY < aX & (aY/aX)>-1){    d = true;	}

    dx=abs(Xf-Xi);
    dy=abs(Yf-Yi);
	p=(2*dy)-dx;
	if(b){   pi.push(Xi,Yi);       }
	else {   pi.push(Yi,Xi);       }
	while(Xi<Xf ){
        if(p<0){
            Xi=Xi+1;
            p=p+2*dy;
        }
        else if(p>=0){
            Xi=Xi+1;
            if(!d){ 	Yi=Yi+1; }
			else {	    Yi=Yi-1; }
            p=p+2*(dy-dx);
        }
        if(b){   pi.push(Xi,Yi);       }
        else {   pi.push(Yi,Xi);       }
    }
    return pi;
}

//pinta los puntos de una pila que recibe segun el color que recibe
//pila con los puntos,color
void paint(Pila pila, int color){
    Pila& p = pila;
    int * a = new int[2];
    while(!p.estaVacia()){
        a = p.pop();
        putpixel((a[0]),(a[1]),color);
    }
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

//funcion que realiza la traslacion a un punto x,y y regresa una pila con los nuevos puntos
Pila traslacion(int t [], Pila pila){
    Pila& p = pila;
    Pila temp;
    int x = t[0], y = t[1];
    int * a = new int[2];

    while(!p.estaVacia()){
      a = p.pop();
      temp.push((a[0]+x),(a[1]+y));
    }
    return temp;
}

//METODO PARA TRASLADAR UN PUNTO
Punto trasladarPunto(Punto punto, Punto T)
{
    int tmpX = punto.getX() + T.getX();
    int tmpY = punto.getY() + T.getY();

    punto.setX(tmpX);
    punto.setY(tmpY);

    return punto;
}

Punto escalarPunto(Punto punto, Punto S)
{
    int tmpX = punto.getX() * S.getX();
    int tmpY = punto.getY() * S.getY();

    punto.setX(tmpX);
    punto.setY(tmpY);

    return punto;
}

