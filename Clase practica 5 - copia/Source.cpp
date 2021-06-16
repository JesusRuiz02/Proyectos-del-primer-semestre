#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

using namespace std;

int main()
{
//ciclo anidado
	for (int C_externo = 0; C_externo <= 10; C_externo++) //C_externo=C_externo+1
	{
		for (int C_interno = 0; C_interno <= 10; C_interno++)
		{
			
			
			cout << "El contador interno lleva: " << C_interno << endl;
			Sleep(500);
			

		}
		cout << "El contador externo lleva: " << C_externo << endl;
	}






}