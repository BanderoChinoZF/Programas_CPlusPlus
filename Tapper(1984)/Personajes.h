#include "Figuras.h"

void dibujarTabernero(Punto p)
{
    int t[] = {10,1};
    int contador = 2;
    int largo = 30;

    //PRIMERA LINEA DEL PERSONAJE TABERNERO
    while(contador < 7)
    {
        paint(traslacion(t,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), RED);

        contador++;
    }

    //SEGUNDA LINEA DEL PERSONAJE TABERNERO
    int t1[] = {5,1};
    contador = 7;
    largo = 40;
    while(contador < 12)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), RED);

        contador++;
    }

    //TERCERA LINEA DEL PERSONAJE TABERNERO
    //UN PUNTO
    int t2[] = {5,1};
    contador =12;
    largo = 5;
    while(contador <= 16)
    {
        paint(traslacion(t2,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BROWN);

        contador++;
    }

    int t3[] = {15, 1};
    contador =12;
    largo = 15;
    while(contador <= 16)
    {
        paint(traslacion(t3,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BROWN);

        contador++;
    }


    //CUARTA LINEA DEL PERSONAJE TABERNERO
    int t4[] = {5, 1};
    contador =17;
    largo = 25;
    while(contador <= 21)
    {
        paint(traslacion(t4,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BROWN);

        contador++;
    }

    int t5[] = {35,1};
    contador =17;
    largo = 5;
    while(contador <= 21)
    {
        paint(traslacion(t5,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BROWN);

        contador++;
    }


    //QUINTA LINEA DEL PERSONAJE TABERNERO
    int t6[] = {15,1};
    contador = 22;
    largo = 20;
    while(contador <= 26)
    {
        paint(traslacion(t6,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BROWN);

        contador++;
    }

    //SEXTA LINEA DEL PERSONAJE TABERNERO
    int t7[] = {10,1};
    contador =27;
    largo = 20;
    while(contador <= 31)
    {
        paint(traslacion(t7,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BROWN);

        contador++;
    }

    //SEPTIMA LINEA DEL PERSONAJE TABERNERO
    int t8[] = {15,1};
    contador = 32;
    largo = 10;
    while(contador <= 36)
    {
        paint(traslacion(t8,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), WHITE);

        contador++;
    }

    //OCTAVA LINEA DEL PERSONAJE TABERNERO
    int t9[] = {10,1};
    contador =37;
    largo = 25;
    while(contador <= 41)
    {
        paint(traslacion(t9,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), WHITE);

        contador++;
    }

    //NOVENA LINEA DEL PERSONAJE TABERNERO
    int t10[] = {5,1};
    contador = 42;
    largo = 25;
    while(contador <= 46)
    {
        paint(traslacion(t10,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), WHITE);

        contador++;
    }

    int t11[] = {35,1};
    contador = 42;
    largo = 5;
    while(contador <=46)
    {
        paint(traslacion(t11,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), WHITE);

        contador++;
    }

    //DECIMA LINEA DEL PERSONAJE TEBERNERO
    int t12[] = {15,1};
    contador = 47;
    largo = 15;
    while(contador <= 51)
    {
        paint(traslacion(t12,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), WHITE);

        contador++;
    }

    int t13[] = {35,1};
    contador = 47;
    largo = 5;
    while(contador <= 51)
    {
        paint(traslacion(t13,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), WHITE);

        contador++;
    }

    //ONCEAVA LINEA DE NUESTRO PERSONAJE TABERNERO
    int t14[] = {15,1};
    contador = 52;
    largo = 20;
    while(contador <= 56)
    {
        paint(traslacion(t14,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BLUE);

        contador++;
    }

    //DOCEAVA LINEA DE NUESTRO PERSONAJE TABERNERO
    int t15[] = {10,1};
    contador = 57;
    largo = 25;
    while(contador <= 61)
    {
        paint(traslacion(t15,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BLUE);

        contador++;
    }

    //TRECEAVA LINEA DEL PERSONAJE TABERNERO
    int t16[] = {10,1};
    contador = 62;
    largo = 10;
    while(contador <= 66)
    {
        paint(traslacion(t16,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BLUE);

        contador++;
    }

    int t17[] = {25,1};
    contador = 62;
    largo = 10;
    while(contador <= 66)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BLUE);

        contador++;
    }

    //CATORCEAVA LINEA DEL PERSONAJE TABERNERO
    contador = 67;
    largo = 10;
    while(contador <= 71)
    {
        paint(traslacion(t16,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BLUE);

        contador++;
    }

    contador = 67;
    largo = 10;
    while(contador <= 71)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BLUE);

        contador++;
    }

    //QUINCEAVA LINEA DEL PERSONAJE TABERNERO
    contador = 72;
    largo = 10;
    while(contador <= 76)
    {
        paint(traslacion(t16,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BLUE);

        contador++;
    }

    contador = 72;
    largo = 10;
    while(contador <= 76)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), BLUE);

        contador++;
    }

    //LINEA NUMERO DIEZCISEIS DEL PEERSONAJE TABERNERO
    contador = 77;
    largo = 10;
    while(contador <= 81)
    {
        paint(traslacion(t16,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), LIGHTGRAY);

        contador++;
    }

    contador = 77;
    largo = 10;
    while(contador <= 81)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), LIGHTGRAY);

        contador++;
    }

    //LINEA NUMERO 17 DEL PERSONAJE TABERNERO.
    contador = 82;
    largo = 10;
    while(contador <= 86)
    {
        paint(traslacion(t16,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    contador = 82;
    largo = 10;
    while(contador <= 86)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    //LINEA NUMERO 18 DEL PERSONAJE TABERNERO.
    int t18[] = {5,1};
    contador = 87;
    largo = 15;
    while(contador <= 91)
    {
        paint(traslacion(t18,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    contador = 87;
    largo = 10;
    while(contador <= 91)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }
}

void dibujarTaberneroColor(Punto p, int c)
{
    int t[] = {10,1};
    int contador = 2;
    int largo = 30;

    //PRIMERA LINEA DEL PERSONAJE TABERNERO
    while(contador < 7)
    {
        paint(traslacion(t,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //SEGUNDA LINEA DEL PERSONAJE TABERNERO
    int t1[] = {5,1};
    contador = 7;
    largo = 40;
    while(contador < 12)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //TERCERA LINEA DEL PERSONAJE TABERNERO
    //UN PUNTO
    int t2[] = {5,1};
    contador =12;
    largo = 5;
    while(contador <= 16)
    {
        paint(traslacion(t2,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    int t3[] = {15, 1};
    contador =12;
    largo = 15;
    while(contador <= 16)
    {
        paint(traslacion(t3,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }


    //CUARTA LINEA DEL PERSONAJE TABERNERO
    int t4[] = {5, 1};
    contador =17;
    largo = 25;
    while(contador <= 21)
    {
        paint(traslacion(t4,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    int t5[] = {35,1};
    contador =17;
    largo = 5;
    while(contador <= 21)
    {
        paint(traslacion(t5,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }


    //QUINTA LINEA DEL PERSONAJE TABERNERO
    int t6[] = {15,1};
    contador = 22;
    largo = 20;
    while(contador <= 26)
    {
        paint(traslacion(t6,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //SEXTA LINEA DEL PERSONAJE TABERNERO
    int t7[] = {10,1};
    contador =27;
    largo = 20;
    while(contador <= 31)
    {
        paint(traslacion(t7,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //SEPTIMA LINEA DEL PERSONAJE TABERNERO
    int t8[] = {15,1};
    contador = 32;
    largo = 10;
    while(contador <= 36)
    {
        paint(traslacion(t8,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //OCTAVA LINEA DEL PERSONAJE TABERNERO
    int t9[] = {10,1};
    contador =37;
    largo = 25;
    while(contador <= 41)
    {
        paint(traslacion(t9,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //NOVENA LINEA DEL PERSONAJE TABERNERO
    int t10[] = {5,1};
    contador = 42;
    largo = 25;
    while(contador <= 46)
    {
        paint(traslacion(t10,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    int t11[] = {35,1};
    contador = 42;
    largo = 5;
    while(contador <=46)
    {
        paint(traslacion(t11,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //DECIMA LINEA DEL PERSONAJE TEBERNERO
    int t12[] = {15,1};
    contador = 47;
    largo = 15;
    while(contador <= 51)
    {
        paint(traslacion(t12,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    int t13[] = {35,1};
    contador = 47;
    largo = 5;
    while(contador <= 51)
    {
        paint(traslacion(t13,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //ONCEAVA LINEA DE NUESTRO PERSONAJE TABERNERO
    int t14[] = {15,1};
    contador = 52;
    largo = 20;
    while(contador <= 56)
    {
        paint(traslacion(t14,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //DOCEAVA LINEA DE NUESTRO PERSONAJE TABERNERO
    int t15[] = {10,1};
    contador = 57;
    largo = 25;
    while(contador <= 61)
    {
        paint(traslacion(t15,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //TRECEAVA LINEA DEL PERSONAJE TABERNERO
    int t16[] = {10,1};
    contador = 62;
    largo = 10;
    while(contador <= 66)
    {
        paint(traslacion(t16,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    int t17[] = {25,1};
    contador = 62;
    largo = 10;
    while(contador <= 66)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //CATORCEAVA LINEA DEL PERSONAJE TABERNERO
    contador = 67;
    largo = 10;
    while(contador <= 71)
    {
        paint(traslacion(t16,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    contador = 67;
    largo = 10;
    while(contador <= 71)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //QUINCEAVA LINEA DEL PERSONAJE TABERNERO
    contador = 72;
    largo = 10;
    while(contador <= 76)
    {
        paint(traslacion(t16,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    contador = 72;
    largo = 10;
    while(contador <= 76)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //LINEA NUMERO DIEZCISEIS DEL PEERSONAJE TABERNERO
    contador = 77;
    largo = 10;
    while(contador <= 81)
    {
        paint(traslacion(t16,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    contador = 77;
    largo = 10;
    while(contador <= 81)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //LINEA NUMERO 17 DEL PERSONAJE TABERNERO.
    contador = 82;
    largo = 10;
    while(contador <= 86)
    {
        paint(traslacion(t16,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    contador = 82;
    largo = 10;
    while(contador <= 86)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    //LINEA NUMERO 18 DEL PERSONAJE TABERNERO.
    int t18[] = {5,1};
    contador = 87;
    largo = 15;
    while(contador <= 91)
    {
        paint(traslacion(t18,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }

    contador = 87;
    largo = 10;
    while(contador <= 91)
    {
        paint(traslacion(t17,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), c);

        contador++;
    }
}

void dibujarBorrachin(Punto p)
{
    //PRIMERA LINEA DE NUESTRO PERSOANJE CLIENTE
    int t0[] = {15,1};
    int contador = 2;
    int largo = 15;
    while(contador <= 6)
    {
        paint(traslacion(t0,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    //SEGUNDA LINEA DE NUESTRO PERSONAJE CLIENTE
    int t1[] = {5,1};
    contador = 7;
    largo = 5;
    while(contador <= 11)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    t1[0] = 15;  t1[1] = 1;
    contador = 7;
    largo = 15;
    while(contador <= 11)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    t1[0] = 35;  t1[1] = 1;
    contador = 7;
    largo = 5;
    while(contador <= 11)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    //TERCERA LINEA DE NUESTRO CLIENTE
    t1[0] = 5;  t1[1] = 1;
    contador = 12;
    largo = 30;
    while(contador <= 16)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    //QUINTA LINEA DEL PERSONAJE CLIENTE
    t1[0] = 10;  t1[1] = 1;
    contador = 17;
    largo = 5;
    while(contador <= 21)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    t1[0] = 20;  t1[1] = 1;
    contador = 17;
    largo = 5;
    while(contador <= 21)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    t1[0] = 30;  t1[1] = 1;
    contador = 17;
    largo = 5;
    while(contador <= 21)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    //SEXTA LINEA PARA DIBUJAR AL PERSONAJE CLIENTE
    t1[0] = 10;  t1[1] = 1;
    contador = 22;
    largo = 10;
    while(contador <= 26)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    t1[0] = 25;  t1[1] = 1;
    contador = 22;
    largo = 10;
    while(contador <= 26)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    //SEPTIMA LINEA DEL PERSONAJE BORRACHIN :v
    t1[0] = 15;  t1[1] = 1;
    contador = 27;
    largo = 15;
    while(contador <= 31)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    //OCTAVA LINEA DEL PERSONAJE BORRACHIN :v
    t1[0] = 15;  t1[1] = 1;
    contador = 32;
    largo = 10;
    while(contador <= 36)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    //NOVENA LINEA DEL PERSONAJE BORRACHIN :v
    t1[0] = 15;  t1[1] = 1;
    contador = 37;
    largo = 10;
    while(contador <= 41)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    //DECIMA LINEA DEL PEROSNAJE BORRACHIN :v
    t1[0] = 10;  t1[1] = 1;
    contador = 42;
    largo = 20;
    while(contador <= 46)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

    //ONCEAVA LINEA DEL PERSONAJE CLIENTE
    t1[0] = 5;  t1[1] = 1;
    contador = 47;
    largo = 30;
    while(contador <= 51)
    {
        paint(traslacion(t1,hacerLinea(p.getX(), p.getY() + contador, p.getX() + largo, p.getY()+ contador)), CYAN);

        contador++;
    }

}
