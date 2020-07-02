#include <iostream>

int main()
{
    int numero1;
    int numero2;
    int suma;

    std::cout << "Escriba el primer numero -> ";
    std::cin >> numero1;

    std::cout << "Escriba el segundo numero -> ";
    std::cin >> numero2;

    suma = numero1 + numero2;

    std::cout << "La suma es " << suma << std::endl;

    return 0;
}
