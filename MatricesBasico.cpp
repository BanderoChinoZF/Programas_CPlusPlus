//Matrices en C++ Basico
#include <iostream>

using namespace std;

const int MaxDimensiones = 2;

int main()
{
	int v[][MaxDimensiones] = { 1, 2, 3, 4};
	
	for(int i=0;i<MaxDimensiones;i++)
	{
		for(int j=0;j<MaxDimensiones;j++)
		{
			cout << v[i][j] << endl;	
		}
	}
	
	return 0;
}
