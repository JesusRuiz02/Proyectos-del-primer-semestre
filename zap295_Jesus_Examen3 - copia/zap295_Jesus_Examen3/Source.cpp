#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<string>

using namespace std;

void matrizestatica3x3() {
	 int matriz[3][3];

	 for (int i = 0; i < 3; i++)
	 {
		 for (int i2 = 0; i2 < 3; i2++)
		 {
			 cout << "Digite el dato que quieras llenar en la casilla" <<"["<< i+1 <<"] "<<"["<<i2+1<<"]"<<endl;
			 cin >> matriz[i][i2];
		 }
	 }
	 for (int i = 0; i < 3; i++)
	 {
		 for (int i2 = 0; i2 < 3; i2++)
		 {
			 cout <<"["<< matriz[i][i2]<<"] ";
		 }
		 cout << "\n";
	 }




}

void arreglo2()
{
	char* arreglo=NULL;
	char* arreglo2=NULL;
	int n1, n2;
	cout << "Digite tamano de tu arreglo 1" << endl;
	cin >> n1;
	cout << "Digite el tamano de tu arreglo 2" << endl;
	cin >> n2;
	 arreglo = new char[n1];
	 arreglo2 = new char[n2];
	for (int i = 0; i < n1; i++)
	{
		cout << "digite el caracter del primer arreglo que quieras llenar" << endl;
		cin >> arreglo[i];

	}
	for (int j = 0; j < n2; j++)
	{
		cout << "digite el caracter del segundo arreglo que quieras llenar" << endl;
		cin >> arreglo2[j];
	}
	for (int i = 0; i < n1; i++)
	{
		cout << " El "<< i+1<<" caracter del primer arreglo es "<<arreglo[i] << endl;
	}
	for (int j = 0; j < n2; j++)
	{
		cout << " El "<<j+1<<" caracter del segundo arreglo que quieras llenar es "<<arreglo2[j] << endl;
	}

	

}

void matrizdinamica() {
	string** matrizdinamica=NULL;
	int fila, columna;
	cout << "ingrese el numero de filas que quieras poner"<<endl;
	cin >> fila;
	cout << "ingrese el numero de filas que quieras poner" << endl;
	cin >> columna;

	string** matrizdinamicaa = new string * [columna];//generando nueva variable para los arreglos
	for (int i = 0; i < columna; i++)
	{
		matrizdinamicaa[i] = new string[fila];
	} //Es necesario tener crear el for para poder crear un puntero para poder hacer la matriz bidemnsional

	for (int i = 0; i < columna; i++) //arreglo para poder registar los datos
	{
		for (int j = 0; j < fila; j++)
		{
			cout << "Escribe el dato de la matriz [" << i + 1 << "] [" << j + 1 << "]" << endl;
			if (i == 0)
			{
				cin.ignore();
			}
			getline(cin, matrizdinamicaa[i][j]);


		}
	}
	for (int i = 0; i < columna; i++) //arreglo para poder registar los datos
	{
		for (int j = 0; j < fila; j++)
		{
			cout << "El valor es de la casilla [" << i + 1 << "] [" << j + 1 << "]"<<" es "<<matrizdinamicaa[i][j] << endl;
			


		}
	}
	
	matrizdinamicaa = NULL;
	delete matrizdinamicaa;


}
int main() {
	matrizestatica3x3();
	arreglo2();
	matrizdinamica();







}