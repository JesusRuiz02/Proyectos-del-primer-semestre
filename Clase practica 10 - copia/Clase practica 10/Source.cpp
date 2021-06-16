#include<iostream>
#include<Windows.h>
#include<string>
#include<stdio.h>
#include<conio.h>

using namespace std;

//sintaxis de estructura
//declarar la estructura- Nombre de la y las estucturas
//Tipo de dato que se guarda
struct Libro{
	string titulo;
	string autor;
	int fecha=0;
	
}Guardados[10];
//El es arreglo que hace referencia a la estructura

class Alumnos
{
public:
	string nombre;
	int edad;
	Alumnos* next;
};

enum Entrada_Alarma{nada, sensor1, sensor2, sensor3};

enum Estado_Alarma {
	Alarma_armada,
	Alarma_on,
	Alarma_off,
	Alarma_home
};


int main()
{
	string Entrada_Alarma1[] = { "sensor 1", "sensor 2" , "sensor 3" };
	
	Entrada_Alarma Sensor_Puerta = sensor1;
	Entrada_Alarma Sensor_Ventana = sensor2;
	Entrada_Alarma Sensor_Cocina = sensor3;
	Estado_Alarma Bocina;
	bool Act_Alarma;
	cout << Entrada_Alarma1[0] << "Arreglo" << endl;
	cout << Sensor_Puerta << "Enum" << endl;
	cout << "Deseas armar la alarma Y=1 N=0"<<endl;
	cin >> Act_Alarma;

	if (Act_Alarma)
	{
		cout << "Alarma armada" << endl;
		/*si el sensor de la puerta y el sensor de la ventana no se activan*/
		if (Sensor_Puerta==nada && Sensor_Ventana==nada )
		{
			Bocina = Alarma_off;
			cout << "Alarma activada pero sin ruidos porque no se activaron los sensores"<<Bocina<<endl;

		}
		if (Sensor_Puerta==sensor1 || Sensor_Ventana==sensor2)
		{
			Bocina = Alarma_on;
			cout << "Alarma activada y con ruidio autsilio!" << Bocina << endl;
		}
	}

	/*Alumnos* Al1 = NULL;
	Alumnos* Al2 = NULL;
	Alumnos* AL3 = NULL;

	Al1 = new Alumnos();
	Al2 = new Alumnos();
	AL3 = new Alumnos();

	Al1-> nombre = "Eva";
	Al1->edad = 22;
	Al1->next = Al2;

	Al2->nombre = "Cebreros";
	Al2->edad = 20;
	Al2->next = AL3;

	AL3->nombre = "Juve";
	AL3->edad = 20;
	AL3->next = NULL;

	while (Al1 != NULL)
	{
		cout << Al1->nombre << endl;
		cout << Al1->edad << endl;
		Al1 = Al1->next;
	}*/

	//Libro Guardados[100];
	//Guardados[0].autor="El yisus";
	//Guardados[0].titulo = "La biblia";
	//Guardados[0].fecha = 000;
	//
	///*investigar como imprimir con arreglos*/
	//cout << Guardados[0].autor << endl;
	//cout << Guardados[0].titulo << endl;
	//cout << Guardados[0].fecha << endl;
	//return 0;






}