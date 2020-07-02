#include <stdio.h>
#include <iostream>
using namespace std;

//CLASE NODO QUE CONTIENE UN DOUBLE
class nodo {
    public:
    nodo(double x, nodo *sig = NULL) {
       valorX = x;
       siguiente = sig;
    }
    public:
    double valorX;
    nodo *siguiente;

    friend class Pila;
};

typedef nodo *pnodo;

//CLASE PILA DE DOUBLES
class Pila {
   public:
    Pila() : ultimo(NULL) {}
    ~Pila();

    void push(double x);
    double pop();
    bool esVacia();
    void printPila();
    void vaciaPila();

   private:
    pnodo ultimo;
};

Pila::~Pila() { }

//METODO PARA AGREGAR UN DOUBLE A LA PILA
void Pila::push(double x) {
   pnodo nuevo;
   nuevo = new nodo(x,ultimo);
   ultimo = nuevo;
}

//METODO QUE COMPRUEBA SI LA PILA ESTA VACÍA
bool Pila::esVacia()
{
    return (ultimo == NULL);
}

//METODO QUE SACA UN VALOR DE LA PILA
double Pila::pop() {
   pnodo nodo;
   if(esVacia()) {
        throw "Pila vacía, no se puede extraer.";
        return 0;
   }else{
       double  a;
       nodo = ultimo;
       a = nodo->valorX;
       ultimo = nodo->siguiente;
       return a;
   }
}

//METODO QUE VACIA LA PILA
void Pila::vaciaPila(){
    ultimo = NULL;
}


