///Tringulo de pascal
#include <iostream>

using namespace std;

int factorial(int n)
{
	if(n<2)
	{
		return 1;		
	}else
	{
		return n * factorial(n-1);
	}
}

//Para calcular el triangulo de pascal tenemos que hacer una combinacion
//De numero siguiendo la formula nCm
//Calculando los factoriales la formula queda de la sigueinte manera
// ----> m!/n!*(m-n)! , que definiremos en la siguiente funcion.

int combinacion(int n, int m)
{
	if(m==1)
	{
		return n;
	}else
	{
		if(n==m)
		{
			return 1;
		}else
		{
			return factorial(n)/(factorial(m) * factorial(n-m));
		}
	}	
}


int main()
{
	int numero;
	
	cout << "Cuantas iteraciones desea hacer? ";
	cin >> numero;
	
    for(int i=0; i<=numero; i++)
    {
        for(int j=0; j<=i; j++)
        {
        	cout << combinacion(i, j) << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}
