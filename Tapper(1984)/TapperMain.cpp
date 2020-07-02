/* INCLUIMOS NUESTRAS LIBRERIAS*/
#include "Personajes.h"
#include <conio.h>

/* LIBRERIAS ESTANDAR QUE CONTIENE EL IDE*/

using namespace std;

void pintarEscenario()
{
    paint(hacerLinea(10,10,910,10),   RED);
    paint(hacerLinea(10,10,10,710),   RED);
    paint(hacerLinea(10,710,910,710), RED);
    paint(hacerLinea(910,710,910,10), RED);

    paint(hacerLinea(6,6,914,6),WHITE);
    paint(hacerLinea(6,6,6,714),WHITE);
    paint(hacerLinea(6,714,914,714),WHITE);
    paint(hacerLinea(914,714,914,6),WHITE);


    //MESAS DE NUESTRA TABERNA :v
    paint(hacerLinea(11,100,550,100), RED);
    paint(hacerLinea(11,170,580,170), RED);
    paint(hacerLinea(550,100,580,170), RED);
    /*Punto pt2(12,45);
    dibujarBorrachin(pt2);*/

    paint(hacerLinea(11,260,550,260), YELLOW);
    paint(hacerLinea(11,330,580,330), YELLOW);
    paint(hacerLinea(550,260,580,330), YELLOW);

    paint(hacerLinea(11,420,550,420), GREEN);
    paint(hacerLinea(11,490,580,490), GREEN);
    paint(hacerLinea(550,420,580,490), GREEN);

    paint(hacerLinea(11,580,550,580), WHITE);
    paint(hacerLinea(11,650,580,650), WHITE);
    paint(hacerLinea(550,580,580,650), WHITE);
}

void iniciarJuego()
{
    int contadorM = 1;
    bool game_over = false;

    while(!game_over)
    {
        pintarEscenario();

        if(kbhit())
        {
            char tecla = getch();

            //PUNTOS DONDE SE MOVERÁ EL TABERNERO
            Punto p0(630,75);
            Punto p5(630,250);
            Punto p6(630,400);
            Punto p7(630,550);

            if(tecla == 'w')//DEFINIMOS A LA TECLA "W" PARA QUE EL TABERNERO SE MUEVA HACIA ARRIBA
            {
                switch(contadorM)
                {
                case 1:
                    dibujarTabernero(p0);
                    break;
                case 2:
                    dibujarTabernero(p0);
                    dibujarTaberneroColor(p5,BLACK);
                    contadorM--;
                    break;
                case 3:
                    dibujarTabernero(p5);
                    dibujarTaberneroColor(p6,BLACK);
                    contadorM--;
                    break;
                case 4:
                    dibujarTabernero(p6);
                    dibujarTaberneroColor(p7,BLACK);
                    contadorM--;
                    break;
                }
            }else if(tecla == 's')//DEFINIMOS A LA TECLA S PARA QUE NUESRO PERSONAJE SE MUEVA HACIA ABAJO
            {
                switch(contadorM)
                {
                case 1:
                    dibujarTabernero(p0);
                    contadorM++;
                    break;
                case 2:
                    dibujarTaberneroColor(p0,BLACK);
                    dibujarTabernero(p5);
                    contadorM++;
                    break;
                case 3:
                    dibujarTaberneroColor(p5,BLACK);
                    dibujarTabernero(p6);
                    contadorM++;
                case 4:
                    dibujarTaberneroColor(p6,BLACK);
                    dibujarTabernero(p7);
                }

            }else if(tecla == ' ') //DEFINIMOS A LA TECLA ESPACIO PARA QUE EL TABERNERO LANCE
            {
                cout << " Presiona la tecla SPACE BAR.";
            }

        }

        /*Punto pt2(12,45);
        dibujarBorrachin(pt2);

        int temp = pt2.getX();

        while()
        {

        }*/
    }
}

int main()
{
    initwindow(1000, 800, "Tapper");

    pintarEscenario();
    iniciarJuego();

    getch();
    closegraph();
}
