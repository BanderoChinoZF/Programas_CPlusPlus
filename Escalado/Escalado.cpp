#include <iostream>

using namespace std;

class Punto
{
    int x, y;

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
        Punto escalarPunto(Punto A, Punto S);
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

Punto escalarPunto(Punto punto, Punto S)
{
    int tmpX = punto.getX() * S.getX();
    int tmpY = punto.getY() * S.getY();

    punto.setX(tmpX);
    punto.setY(tmpY);

    return punto;
}


int main()
{
    int xT, yT, x, y;

    cout << "" << endl;
    cin >> x;

    cout << "" << endl;
    cin >> y;

    cout << "" << endl;
    cin >> xT;

    cout << "" << endl;
    cin >> yT;

    Punto p;
    p.setX(x);
    p.setY(y);

    cout << "[" << p.getX() << " , " << p.getY() <<"]" << endl;

    Punto s;
    s.setX(xT);
    s.setY(yT);

    p = escalarPunto(p, s);

    cout << "Punto Trasladado" << endl;
    cout << "[" << p.getX() << " , " << p.getY() <<"]" << endl;

    return 0;
}
