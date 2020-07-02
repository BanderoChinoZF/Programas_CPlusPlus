#include <iostream>
#include <stdio.h>
#include <math.h>


using namespace std;


int tamanio = 75;
char pantalla[75][75];


void Imprime();


void LineaBresenham(int x1, int y1, int x2, int y2);


int main(){
bool sigue = true;
char decide;


while (sigue){


for (int i = 0; i <= tamanio; i++){


for (int j = 0; j <= tamanio; j++){


pantalla[j] = '.';


}
}
// Termina Llenado
int x1;
int y1;
int x2;
int y2;




cout << "Ingresa x1 " << endl;
cin >> x1;


cout << "Ingresa y1 " << endl;
cin >> y1;


cout << "Ingresa x2 " << endl;
cin >> x2;


cout << "Ingresa y2 " << endl;
cin >> y2;


if (x1<0 || x1 > 75 || x2 <0 || x2 >75 || y1<0 || y1> 75 || y2 <0 || y2>75){
cout << "Ingrese Coordenadas entre 0 y 75" << endl;

}
else{
LineaBresenham(x1, y1, x2, y2);




Imprime();
}




cout << "Si desea seguir trazando lineas oprima Y, en caso contrario oprima cualquier tecla" << endl;
cin >> decide;
if (decide == 'y' || decide == 'Y'){
sigue = true;
}
else {
sigue = false;
cout << "Adios" << endl;
}




}




return 0;


}


void LineaBresenham(int x1, int y1, int x2, int y2){
int pasoy;
int pasox;
int deltaX = (x2 - x1);
int deltaY = (y2 - y1);




if (deltaY < 0) {
deltaY = -deltaY;
pasoy = -1;


}
else {
pasoy = 1;
}


if (deltaX < 0) {
deltaX = -deltaX;
pasox = -1;
}
else {
pasox = 1;
}


int x = x1;
int y = y1;
pantalla[x][y] = 'I';


if (deltaX>deltaY){
int p = 2 * deltaY - deltaX;
int incE = 2 * deltaY;
int incNE = 2 * (deltaY - deltaX);
while (x != x2){
x = x + pasox;
if (p < 0){
p = p + incE;
}
else {
y = y + pasoy;
p = p + incNE;
}
pantalla[x][y] = '*';




}
}
else{
int p = 2 * deltaX - deltaY;
int incE = 2 * deltaX;
int incNE = 2 * (deltaX - deltaY);
while (y != y2){
y = y + pasoy;
if (p < 0){
p = p + incE;
}
else {
x = x + pasox;
p = p + incNE;
}
pantalla[x][y] = '*';




}
}


}







void Imprime(){
for (int i = 0; i <= tamanio; i++){


for (int j = 0; j <= tamanio; j++){




cout << pantalla[j];


}
cout << endl;






}
cin.get();
}
