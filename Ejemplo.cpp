#include <iostream>
#include <string>
#include <queue>

using namespace std;

// Clase del punto
class Punto {
    public:
    double x, y;
    Punto(double, double);
};

// Constructor
Punto::Punto(double x1, double y1) {
    x = x1;
    y = y1;
}

//metodo para dibujar la linea, con el algoritmo de bresenham
//retorna una cola con las coordenadas de los puntos
queue<Punto> linea(int x0, int y0, int x1, int y1) {
    // se crea la cola en la cual se insertaran los puntos
    queue<Punto> cola;

    // se inserta el punto incial
    cola.push(Punto(x0, y0));

    // se calculan los diferenciales
    int dy = y1-y0;
    int dx = x1-x0;

    // si dx es menor, se cambian los puntos
    if(dx < 0) {
        // variables auxiliares
        int aux1 = x1;
        int aux2 = y1;
        // punto final a punto inicial
        x1 = x0;
        y1 = y0;
        // punto inicial a punto final
        x0 = aux1;
        y0 = aux2;

        // se calculan nuevamente los diferenciales
        dy = y1-y0;
        dx = x1-x0;

    }

    // en caso de que no se mueva el eje y o x
    if (dx == 0) {
        if(dy < 0) {

            //variables auxiliares
            int aux1 = x1;
            int aux2 = y1;

            // punto final a inicial e inicial a final
            x1 = x0;
            y1 = y0;
            x0 = aux1;
            y0 = aux2;
        }

        //se incrementa unicamnete y
        while(y0 < y1) {
            y0++;
            cola.push(Punto (x0,y0));
        }
    }

    if(dy == 0) {
        //se incrementa unicamente x
        while(x0 < x1) {
            x0++;
            // se guardan en la cola
            cola.push(Punto (x0,y0));
        }
    }

    // si dy menor a 0, se invierten los diferenciales
    if(dy < 0 && dy*-1 > dx) {
         while(x0 != x1 && y0 != y1) {
            // calcular diferenciales a cada iteracion
            dx = x1 - x0;
            dy = y1 - y0;

            // calculo de las diferenciales invertidas
            int p = 2 * dx + dy;

            // Si p < 0 entonces, decrementar de lo contrario incremetar x y decrementar y
            if(p < 0) {
                y0--;
            } else {
                x0++;
                y0--;
            }
            //ingresar datos a la cola
            cola.push(Punto(x0,y0));
        }
        cola.push(Punto(x1,y1));

        //segundo caso
    }else if(dy < 0 && dy*-1 < dx) {
        while(x0 != x1 && y0 != y1) {
            // calcular diferenciales a cada iteracion
            dx = x1 - x0;
            dy = y1 - y0;

            // calculo de p con diferenciales de signo diferente
            int p = 2 * dy + dx;

            // Si p < 0 entonces, decrementar de lo cotrario incremetar x y decrementar y
            if(p < 0) {
                x0++;
                y0--;
            } else {
                x0++;
            }
            cola.push(Punto (x0,y0));
        }
    }

    // si dy > dx incrementar en y usando p = 2dx -dy
    if(dy > dx){
        while(x0 != x1 && y0 != y1) {
            // calcular diferenciales para cada iteracion
            dx = x1 - x0;
            dy = y1 - y0;

            // calculo de p = 2dx -dy
            int p = 2 * dx - dy;

            // si p < 0, incrementar y de lo contrario incrementar ambos
            if(p < 0) {
                y0++;
            } else {
                x0++;
                y0++;
            }
            //guardar en la cola
            cola.push(Punto(x0,y0));
        }
        cola.push(Punto(x1,y1));
    }else {
        // ocupar p = 2dy-dx
        while(x0 != x1 && y0 != y1) {
            // calcular los diferenciales
            dx = x1 - x0;
            dy = y1 - y0;

            int p = 2 * dy - dx;
            // si p < 0 entonces, incrementar x de lo contrario incrementar ambos
            if(p < 0) {
                x0++;
            } else {
                x0++;
                y0++;
            }
            cola.push(Punto (x0, y0));
        }
        cola.push(Punto(x1,y1));
    }
    return cola;
}

