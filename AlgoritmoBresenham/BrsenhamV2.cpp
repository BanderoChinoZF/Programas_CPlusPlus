/* ALGORITMO PARA TRAZAR LINEAS DE BRESENHAM*/
/* A continuacion esta la codificacion en lenguaje C++
   del algoritmo de bresenham para trazar cualquien linea
   según los puntos que nos de el usuario*/

   #include<iostream>
   #include<queue>

   using namespace std;

   typedef struct
   {
       int x;
       int y;

   }Punto;

   int deltaX, deltaY;
   int dosDeltaY;
   int dosDeltaXY;
   int pDecision;
   int dosDeltaX;
   int aux;
   int aux1, aux2;

   queue<Punto> puntos;
   queue<Punto> auxiliar;
   Punto A;
   Punto B;
   Punto C;

   /*Hacemos nuestro metodo del algoritmo de bresenham*/
   void iniciarBresenham(Punto A, Punto B, queue<Punto> puntos)
   {
       deltaX = B.x - A.x;
       deltaY = B.y - A.y;

       dosDeltaY = 2 * deltaY;

       dosDeltaXY = 2*(deltaY - deltaX);

       pDecision = (2*deltaY) - deltaX;

       while(A.x != B.x)
       {
           if(pDecision>0)
            {
               aux = pDecision;

               pDecision = aux + dosDeltaXY;

               A.x = A.x+1;
               A.y = A.y+1;

               puntos.push(A);

           }else if(pDecision < 0)
           {
               A.x = A.x+1;

               puntos.push(A);

               aux = pDecision;

               pDecision = aux + dosDeltaY;
           }
       }
   }

   void iniciarEspejoB(Punto A, Punto B, queue<Punto> puntos)
   {
       deltaX = B.x - A.x;
       deltaY = B.y - A.y;

       dosDeltaX = 2*deltaX;

       dosDeltaXY = deltaX - deltaY;

       pDecision = (2*deltaX) - deltaY;

       while(A.x != B.x || A.y != B.y)
       {
           if(pDecision>0)
            {
               aux = pDecision;

               pDecision = aux + dosDeltaXY;

               A.x = A.x+1;
               A.y = A.y+1;

               puntos.push(A);

           }else if(pDecision < 0)
           {
               A.y = A.y+1;

               puntos.push(A);

               aux = pDecision;

               pDecision = aux + dosDeltaY;
           }
       }
   }

   void imprimirCola(queue<Punto> puntos, queue<Punto> auxiliar)
   {

       while(!puntos.empty())
       {
           Punto C = puntos.front();
           puntos.pop();

           cout << "[ "<<C.x<<","<<C.y<<" ]"<<endl;

           auxiliar.push(C);
       }
   }

   int main()
   {
       /* Declaramos nuestras variables de tipo double */
       Punto x0;
       Punto x1;

       //Declaramos nuestras diferenciles o deltas
       int deltaX, deltaY;
       int restaDeltas;

       //Declaramos nuestras pilas para guardar los puntos que se calculen
       queue<Punto> puntos;
       queue<Punto> auxiliar;
       puntos.push(x0);

       //Ingresamos los dos puntos con los que trabajaremos el algoritmo
       cout << "Primer punto X -->";
       cin >> x0.x;

       cout << "Primer punto Y -->";
       cin >> x0.y;

       cout << "Segundo punto X -->";
       cin >> x1.x;

       cout << "Segundo punto y -->";
       cin >> x1.y;

       /*Comparamos nuestros puntos para saber si estos son invertidos o no*/
       if(x0.x > x1.x || x0.y > x1.y)
       {
           cout << "Invierto los puntos." << endl;
           cout << "Puntos --> X(0)[ "<< x0.x <<" "<<x0.y<<" ] X(1)[ "<<x1.x<<" "<<x1.y<<" ]"<<endl;

           Punto aux;

           aux.x = x0.x;
           aux.y = x0.y;

           x0.x = x1.x;
           x0.y = x1.y;

           x1.x = aux.x;
           x1.y = aux.y;

           cout << "Nuevos puntos --> X(0)[ "<< x0.x <<" "<<x0.y<<" ] X(1)[ "<<x1.x<<" "<<x1.y<<" ]"<<endl;

           //Despues de invertir nuestros puntos si es necesario, procedemos a caular nuetras deltas o incrementos.
           deltaX = x1.x - x0.x;
           deltaY = x1.y - x0.y;

           /*Restamos nuestras deltas para identificar que algoritmo aplicar si Bresenham o BresenhamEspejo*/
           restaDeltas = deltaX - deltaY;

           /*Realizamos la identificacion la posicion de nuestra recta si está vertical u horizontal*/
           if(deltaX > deltaY)
           {
               cout << "Linea en posicion horizontal."<<endl;

               /*La resta de las deltas nos determinara la direccion que tendra nuestra linea*/
               if(restaDeltas > 0)
               {
                   cout << "La linea tiene direccion de izquierda a derecha"<<endl;
                   cout << "Aplicamos Bresenham"<<endl;

                   /*Iniciamos la aplicacion de nuestro algorimo de bresenham*/
                   void iniciarBresenham(Punto x0, Punto x1, queue<Punto> puntos);

               }else
               {
                   cout << "La linea tiene direccion de derecha a izquierda"<<endl;
                   cout << "Aplicamos Bresenham Espejo"<<endl;

                   /*Iniciamos con el algoritmo espejo de bresenham*/
                   void iniciarEspejoB(Punto x0, Punto x1, queue<Punto> puntos);
               }

           }else
           {
               cout << "La linea esta en posicion vertical.";

               if(restaDeltas > 0)
               {
                   cout << "La linea tiene direccion de izquierda a derecha"<<endl;
                   cout << "Aplicamos Bresenham"<<endl;

                   void iniciarBresenham(Punto x0, Punto x1, queue<Punto> puntos);

               }else
               {
                   cout << "La linea tiene dirPila<Punto> puntoseccion de derecha a izquierda"<<endl;
                   cout << "Aplicamos Bresenham Espejo"<<endl;
                   void iniciarEspejoB(Punto x0, Punto x1, queue<Punto> puntos);
               }
           }
       }else
       {
           //Calculamos nuestras deltas
           deltaX = x1.x - x0.x;
           deltaY = x1.y - x0.y;

           /*Restamos nuestras deltas para identificar que algoritmo aplicar si Bresenham o Bresenham Espejo*/
           restaDeltas = deltaX - deltaY;

           /*Realizamos la identificacion la posicion de nuestra recta si está vertical u horizontal*/
           if(deltaX > deltaY)
           {
               cout << "Linea en posicion Horizontal."<<endl;

               /*La resta de las deltas nos determinara la direccion que tendra nuestra linea*/
               if(restaDeltas > 0)
               {
                   cout << "La linea tiene direccion de izquierda a derecha"<<endl;
                   cout << "Aplicamos Bresenham"<<endl;

                   /*Iniciamos la aplicacion de nuestro algorimo de bresenham*/
                   void iniciarBresenham(Punto x0, Punto x1, queue<Punto> puntos);

               }else
               {
                   cout << "La linea tiene direccion de derecha a izquierda"<<endl;
                   cout << "Aplicamos Bresenham Espejo"<<endl;

                   /*Iniciamos con el algoritmo espejo de bresenham*/
                   void iniciarEspejoB(Punto x0, Punto x1, queue<Punto> puntos);
               }

           }else /////////////-----------------------------------------------------------
           {
               cout << "La linea esta en posicion vertical.";

               if(restaDeltas > 0)
               {
                   cout << "La linea tiene direccion de izquierda a derecha"<<endl;
                   cout << "Aplicamos Bresenham"<<endl;

                   void iniciarBresenham(Punto x0, Punto x1, queue<Punto> puntos);

               }else
               {
                   cout << "La linea tiene direccion de derecha a izquierda"<<endl;
                   cout << "Aplicamos Bresenham Espejo"<<endl;
                   void iniciarEspejoB(Punto x0, Punto x1, queue<Punto> puntos);
               }
           }
       }

       imprimirCola(puntos, auxiliar);

       return 0;
   }
