//Librerias a utilizar en el programa de entrada y salida
//Libreria de manejo de archivos.
//Libreria donde econtramos funciones matematicas.
#include<conio.h>
#include<stdlib.h>
//#include<graphics.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;

//Definimos un propio tipo de dato en este caso es de tipo punto
//Para que podamos almacenar en una variable punto un punto X e un punto Y
    typedef struct{
        double x;
        double y;
        }punto;

    punto resultado;

/* Se define una funcion llamada dibujar triangulo en donde solo se
    tiene los puntos para formar un triangulo por decirlo asi en la iteracion 0*/
    dibujarTriangulo(punto A, punto B, punto C)
    {
        //Abrimos nuestro fichero en donde guardaremos cado punto que se cree en nuestro archivo.
        ofstream fichero;
        fichero.open("puntos.txt"); //Abrimos nuestro achivo para escribir

        fichero << A.x << " " << A.y << endl;
        fichero << B.x << " " << B.y << endl;
        fichero << C.x << " " << C.y << endl;

        /*putpixel(A.x, A.y,GREEN);
        putpixel(B.x, B.y,GREEN);
        putpixel(C.x, C.y,GREEN);*/

        fichero.close(); //Cerramos nuestro fichero despues de escribir en el.

    }

/* Se define una funcion llamada calcular mitad por que necesitamos que por cada iteracion
    calculemos el punto medio del nuevo segmento que se tiene.*/
    punto calcularMitad(punto p1,punto p2)
    {
        resultado.x = (p1.x + p2.x)/2;
        resultado.y = (p1.y + p2.y)/2;

        return resultado; //Se retorna un valor de tipo punto con valores en X e Y.
    }

    /* Esta el funcion recursiva que se manda a llamar a si misma cada que iteracion que pasa,
    ya que trabaja con los vertices o puntos que se le pasa commo argumentos, y las iteraciones que debe de ir haciendo.*/
    dibujarSierpinski(punto A, punto B, punto C, int N)
    {
        //Definimos si la iteracion N es igual a cero
        if(N == 0)
        {
            dibujarTriangulo(A, B, C);

        }else
        {
            //abrimos el fichero para que vuelva a escribir en el los puntos restantes segun la n iteracion.
            ofstream fichero;
            fichero.open("puntos.txt");

            punto AB = calcularMitad(A, B);
            fichero << AB.x << " " << AB.y << endl;

            punto BC = calcularMitad(B, C);
            fichero << BC.x << " " << BC.y << endl;

            punto CA = calcularMitad(C, A);
            fichero << CA.x << " " << CA.y << endl;

            fichero.close();

            //Mandamos a llamar de nuevo a funcion para que calcule de nuevo
            //los puntos de los demas triangulos de la iteraciones restantes.
            dibujarSierpinski(A, AB, CA, N-1);
            dibujarSierpinski(AB, B, BC, N-1);
            dibujarSierpinski(CA, BC, C, N-1);
        }
    }

    //Funcion principal donde se empieza a contruir el triangulo de sierpinski.
    iniciarSierpinski(punto A, punto B, punto C, int iteraciones)
    {
        dibujarSierpinski(A,B,C,iteraciones);
    }

    //Aca es donde hacemos las entradas pir el usuario como el tamaño que tendra el triangulo y
    //el numero de iteraciones o el numero de veces que se ejecutara el metodo recursivo.
    int main()
    {
        int lado;
        double res1;
        double res2;
        double res3;
        int iteracionesN;

        //int gd = DETECT, gm;
        //initgraph(&gd,&gm,"C:\\TC\\BGI");

        cout << "Ingresa el tamaño de lado del triangulo: ";
        cin >> lado;

        cout << "Cuantas iteraciones se harán?";
        cin >> iteracionesN;

        //Comenzamos en nuestro punto en las coordenadas [0,0] del plano cartesiano.
        punto A;
        A.x = lado;
        A.y = 0;
        punto B;
        B.x = lado;
        B.y = 0;

        //Calculamos el tercer vertice para el triangulo equilatero.
        //Primero la distancia que ya sabemos que es el tamaño del lado.
        //Calculamos el punto media entre A y b.
        //y despues calculamos la coordena y del tercer vertice.

        punto temp = calcularMitad(A,B);

        res1 = pow(B.x - A.x, 2);
        res2 = lado - res1;

        punto C;

        C.x = temp.x;
        C.y = res2;

        iniciarSierpinski(A, B, B , iteracionesN);

        //getch();
        //closegraph();
        return 0;
    }
