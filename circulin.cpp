
//funcion que regresa una pila con los puntos pra dibujar un circulo
Pila hacerCirculo(int xc, int yc, int r){

    Pila pi;
    int x = 0;
    double yr = r;
    int y = r;
    while (x < yr){
        pi.push((xc + x),(yc + y));
        pi.push((xc - x),(yc - y));
        pi.push((xc - x),(yc + y));
        pi.push((xc + x),(yc - y));

        pi.push((xc + y),(yc + x));
        pi.push((xc - y),(yc - x));
        pi.push((xc - y),(yc + x));
        pi.push((xc + y),(yc - x));
        x = x + 1;
        yr = sqrt(r*r-x*x);
        y = (int)round(yr);
    }
    pi.push((xc + x),(yc + y));
    pi.push((xc - x),(yc - y));
    pi.push((xc - x),(yc + y));
    pi.push((xc + x),(yc - y));
    return pi;
}
