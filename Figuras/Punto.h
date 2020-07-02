class Punto
{
    private: //ATRIBUTOS DE NUESTRA CLASE PUNTO
        int x, y;

    public:
        //CONSTRUCTOR DE UN PUNTO CON PARAMETROS DEFINIDOS
        Punto(int, int);

        //METODOS GET PARA OBTENER LAS COORDENADAS X,Y DEL PUNTO
        int getX();
        int getY();

        //METODO SET PARA MODIFICAR LAS COORDENADAS DE NUESTRO INSTANCIADO
        void setX(int n);
        void setY(int n);
};

Punto::Punto(int x1, int y1)
{
    x = x1;
    y = y1;
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

int main()
{
    return 0;
}
