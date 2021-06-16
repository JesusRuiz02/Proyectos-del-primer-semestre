#include<iostream>
#include<string>
#include<windows.h>
#include<stdio.h>

using namespace std;

void array_2_3()
{
	string matriz1[2][3];
	for (int columna  = 0; columna < 2; columna++)
	{
		for (int fila = 0; fila < 3; fila++)
		{
			cout << "Ingrese el valor de que quieras registrar en la columna "<<"["<<columna+1<<"]"<<"["<<fila+1<<"]" <<endl;
			getline(cin, matriz1[columna][fila]);
		}
	}
	for (int columna1 = 0; columna1 < 2; columna1++)
	{
		for (int fila1 = 0; fila1 < 3; fila1++)
		{
			cout << "El valor del arreglo de la casilla " << "[" << columna1 + 1 << "]" << "[" << fila1 + 1 << "] es "<< matriz1[columna1][fila1] << endl;
			
		}
	}
	
	



}

void arreglo_sin_limites()
{
	string **datos2 = NULL;//creando puntero para poder generar despues es variable

	int columnitas = 0;
	int filitas = 0;
	cout << "Cuantas columnas quieres tener? " << endl;
	cin >> columnitas;
	cout << "Cuantas filas quieres tener? " << endl;
	cin >> filitas;
	string **datos = new string*[columnitas];//generando nueva variable para los arreglos
	for (int i = 0; i < columnitas; i++)
	{
		datos[i] = new string[filitas];
	} //Es necesario tener crear el for para poder crear un puntero para poder hacer la matriz bidemnsional

	for (int i = 0; i < columnitas; i++) //arreglo para poder registar los datos
	{
		for (int j = 0; j < filitas; j++)
		{
			cout << "Escribe el dato de la matriz [" << i+1 << "] [" << j+1 << "]"<<endl;
			if (i == 0)
			{
				cin.ignore();
			}
			getline(cin, datos[i][j]);
			

		}
	}
	for (int i = 0; i < columnitas; i++) //arreglo para poder registar los datos
	{
		for (int j = 0; j < filitas; j++)
		{
			cout << "El dato de la matriz [" << i+1 << "] [" << j+1 << "] es "<< datos[i][j]<<endl;
			


		}
	}
	delete[]datos;
	datos = NULL;





}
int main() {
	array_2_3();
	arreglo_sin_limites();



}