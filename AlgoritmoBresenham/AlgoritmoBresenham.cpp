/* Programa implementado el algoritmo de Bresenham que estamos proponiendo,
   este algoritmo que estamos proponiendo es para poder trazar cualquier
   linea mediante el algoritmo.


   A L G O R I T M O   P A R A   C U A L Q U I E R   L I N E A*/

#include<iostream>
using namespace std;

int calcularP(int deltaX, int deltaY)
{
    //Calculamos nuesstra P o parametro de decision.
    int p;

    p = ((2 * deltaY) + deltaX);

    return p;
}

int calcularP2(int t, int deltaX, int deltaY)
{
    //Calculamos nuesstra P o parametro de decision.
    int p;

    p = p + (2 * deltaY) - (2 * deltaX);

    return p;
}

void iniciarBresenham(int x0, int y0, int x1, int y1, int deltaX, int deltaY)
{
    int arre;
    int xt;
    int yt;
    int pt;

    cout << "Bresenham Iniciado";

    arre = calcularP(deltaX, deltaY);

    while(xt!=x1 && yt!=y1)
    {
        if(arre>0)
        {
            xt = x0+1;
            yt = y0+1;

            cout << xt << "  " << yt << endl;

        }else
        {
            xt = x0+1;
            yt = y0;

            arre = calcularP2(arre, deltaX, deltaY);

            cout << xt << "  " << yt << endl;

        }
    }

}

void iniciarEspejoBresenham(int x0, int y0, int x1, int y1, int deltaX, int deltaY)
{
    int arre;
    int xt;
    int yt;
    int pt;

    cout << "Espejo Iniciado";

    arre = calcularP(deltaX, deltaY);

    while(xt!=x1 && yt!=y1)
    {
        if(arre>0)
        {
            xt = x0+1;
            yt = y0+1;

            cout << xt << "  " << yt << endl;

        }else
        {
            xt = x0+1;
            yt = y0;

            arre = calcularP2(arre, deltaX, deltaY);

            cout << xt << "  " << yt << endl;

        }
    }

}

//Inicializamos nuestro metodo main.
int main()
{
    /*Definimos nuestras variables con las que vamos a trabajar
      a Delta X y Deslta Y, se utilizan como deltaX y deltaY
      para poder trabajar mas comodamente, tambien definimos nuestras variables de entrada.*/

      int x0, y0;
      int x1, y1;
      int deltaX, deltaY;
      int resta;

    //Imprimimos en pantalla un pequeño encabezado.
    cout << "Programa basado en el algoritmo de Brsenham." << endl;

    //Solicitamos los puntos con los que empezara el algoritmo
    //Ubicando el primer punto en (x0, y0), y el segundo punto en (x1,y1)
    cout << "Ingresa la coordenada X del primer punto --->" << endl;
    cin >> x0;

    cout << "Ingresa la coordenada Y del primer punto --->" << endl;
    cin >> y0;

    cout << "Ingresa la coordenada X del segundo punto --->" << endl;
    cin >> x1;

    cout << "Ingresa la coordenada Y del segundo punto --->" << endl;
    cin >> y1;

    //Hacemas el calculo de nuestras deltas para saber el incremento que se tuvo
    deltaX = x1-x0;
    deltaY = y1-y0;

    //Restamos nuestras deltas para ver la posicion de nuestra recta a trazar
    resta = deltaX - deltaY;

    /* Comparacion para ver si intercambiamos los puntos*/
    if(x0>x1 || y0>y1)
    {
        cout << "Invirtiendo puntos";

        if(deltaX > deltaY)
        {
            cout << "La linea esta horizontal" << endl;

            if(resta > 0)
            {
                cout << "Direccion de izquierda a derecha";
                iniciarBresenham(x0, y0, x1, y1, deltaX, deltaY);
            }else
            {
                cout << "Direccion de derecha a izquierda.";
                iniciarEspejoBresenham(x0, y0, x1, y1, deltaX, deltaY);
            }

        }else
        {
            cout << "La linea es vertical!";

            if(resta > 0)
            {
                cout << "Direccion de izquierda a derecha";
                iniciarBresenham(x0, y0, x1, y1, deltaX, deltaY);
            }else
            {
                cout << "Direccion de derecha a izquierda.";
                iniciarEspejoBresenham(x0, y0, x1, y1, deltaX, deltaY);
            }
        }
    }

    return 0; //retornamos cero para finalizar el programa.
}
