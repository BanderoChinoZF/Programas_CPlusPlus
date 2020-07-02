
/* CREAMOS NUESTRA CLASE PUNTO PARA PODER CREAR OBJETOS PUNTO*/
class Punto
{
    /*VARIABLES PARA LAS COORDENADAS QUE GUARDARÁ EL PUNTO*/
    int x, y;

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
