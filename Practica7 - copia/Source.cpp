#include <iostream>
#include<stdlib.h>
#include<windows.h>

using namespace std;

int main () {
string pregunta1, pregunta2, pregunta3, pregunta4 ;
cout << "Hola!, tratare de adivinar el platillo que quieres de estas 5 opciones (Pollo a la plancha, papa rellena, carne a la plancha, maruchan y Pasta Alfredo"<<endl;
Sleep(8000);
system("cls");
cout << "Tu tipo de comida es carne de vaca responde con un si o un no?"<<endl; cin >> pregunta1;
if (pregunta1=="si" || pregunta1=="Si")
{
	
	system("cls");
	
	cout << "Tu comida se puede hacer en menos de media hora?"<<endl; cin >> pregunta2;
	if (pregunta2=="si" || pregunta2=="Si")
	{
		
		system("cls");

		cout << " El platillo que quieres preparar es carne a la plancha";
	}
	else
	{
		cout << "El platillo que quieres preparar es una papa rellena";
	}
}
else
{
	Sleep(3000);
	cout << "Tu comida es una pasta?"<<endl; cin >> pregunta3;
	system("cls");

	if (pregunta3 == "si" || pregunta3 == "Si")
	{
		Sleep(3000);
		cout << "Tu comida se puede hacer en menos de media hora?" << endl; cin >> pregunta4;
		system("cls");

		if  (pregunta4 == "si" || pregunta4 == "Si")
		{
			cout << "Lo que quieres es una maruchan";
		}
		else
		{
			cout << "Lo que quieres es una pasta Alfredo :)";
		}
	}
	else
	{
		cout << "Lo que quieres es pollo a la plancha";
	}
}






}