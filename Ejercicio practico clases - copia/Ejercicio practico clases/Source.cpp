#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

void primer_arreglo( ) 
{
	string arrreglo1[100];
	for (int i = 0; i < 100; i++)
	{
		arrreglo1[i] = 'A';
		cout << arrreglo1[i] << i + 1 << " ";

	}

	cout << endl;

}

void segundo_arreglo (string matriz[15][15])
{
	int contador=0;
	char rellenar=0;
	cout << "Digite el caracter que quieras rellenar"<<endl; cin >> rellenar;
	for (int fila = 0; fila< 15; fila++)
	{
		for (int columna = 0; columna< 15; columna++)
		{
			matriz[fila][columna] = rellenar;
			contador = contador + 1;
			cout << matriz[fila][columna] << contador << " ";
		}
		cout << endl;
	}



}

void tercer_arreglo()
{
	for (int  filas = 0; filas < 5; filas++)
	{
		for (int columnas = 0; columnas < 5; columnas ++)
		{
			if (filas==columnas)
			{
				cout << "0";
			}
			else
			{
				cout << "-";
			}
			
		}
		cout << "\n";
	}



}

void cuarto_arreglo()
{
	string arrreglo4[5][5];
	for (int filas2 = 0; filas2 < 5; filas2++)
	{
		for (int columnas2 = 0; columnas2 < 5; columnas2++)
		{
			arrreglo4[columnas2][filas2] = "-";
			if (arrreglo4[0][4]=="-")
			{
				arrreglo4[0][4] = "0";
			}
			else
			{
				arrreglo4[0][4] = "-";
			}
			if (arrreglo4[1][3] == "-")
			{
				arrreglo4[1][3] = "0";
			}
			else
			{
				arrreglo4[1][3] = "-";
			}
			if (arrreglo4[2][2] == "-")
			{
				arrreglo4[2][2] = "0";
			}
			else
			{
				arrreglo4[2][2] = "-";
			}
			if (arrreglo4[3][1] == "-")
			{
				arrreglo4[3][1] = "0";
			}
			else
			{
				arrreglo4[3][1] = "-";
			}
			if (arrreglo4[4][0] == "-")
			{
				arrreglo4[4][0] = "0";
			}
			else
			{
				arrreglo4[4][0] = "-";
			}
			cout << arrreglo4[filas2][columnas2];
		}
		cout << "\n";
	}
}



int main() {
	string matriz[15][15];
	primer_arreglo();
	segundo_arreglo(matriz);
	tercer_arreglo();
	cuarto_arreglo();
	
}







