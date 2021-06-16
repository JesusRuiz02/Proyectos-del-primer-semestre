#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

using namespace std;
void razita(int tipo)
{
	

}

void calle()
{


}
void pedigree()
{
	int raza=0,decision = 0;
	cout << "Tienes 3 meses y eres adoptado por una familia con mucho dinero, se hacen llamar los Alcapone" << endl;
	cout << "Escoge la raza que quieres ser (1), shiba inu, (2) Beagle, 3 pitbull blue" << endl; cin >> raza;

	switch (raza)
	{
	case 1:
		cout << " Vaya has escogido la raza, Shiba inu ";
		
		break;
	case 2:
		cout << "Vayas has escogido la raza, Beagle";
		break;

	case 3:
		cout << " Vaya has escogido la raza, Pitbull blue";
		break;
	}
	cout << "\n Te haces el mejor amigo de la hija menor Giovanna ";
	cout << "Juegas con ellas todos los dias, ha transcurrido un anio"<<endl;
	cout << "Todo va bien hasta que...." << endl;
	system("cls");
	cout << "Giovanna ha desaparecido" << endl;
	cout << "Decide salir a buscarla (1) o decides esperarla en casa(2)" << endl;
	cin >> decision;
	if (decision==1)
	{
		decision = 0;
		cout << "Has salido a buscarla decide para que camino ir (1) derecha, 2 (izquierda)"<<endl;
		cin >> decision;
		if (decision==1)
		{
			decision = 0;
			cout << "Oh no, Te has perdido"<<endl;
			cout << "Diambulas por un anio en las calles, hasta que te peleas con otro perro "<<endl;
			if (raza==3)
			{
				cout << " Eres un peleador nato y ganas, una semana despues te encuentra tu familia y Giovanna aparecio" << endl;
				cout << "Tienes una vida feliz.. por el resto de tu vida, excepto cuando comiste mucho y te dolio la panza por un mes, pero de ahi en fuera todo bien";

			}
			else
			{
				cout << "Eres muy malo peleando y te moriste en la pelea " << endl;
				cout << "F";
			}
		}
		else
		{
			decision = 0;
			cout << "La has encontrado..., pero notas algo raro decide.." << endl;
			cout << " Escoge 1 para ir a avisarle a tu familia o 2 para tratar de defenderla"<<endl;
			if (decision==1)
			{
				cout << "Llega su familia para salvarla y tienes una vida feliz, excepto cuando caiste de la escalera y tuviste que usar el cono de la verguenza";
			}
			else
			{
				cout << "Tratas de defenderla, pero te pegaron un plomazo aun asi hiciste suficiente escandalo para que se de cuenta la gente y salvan a Giovanna te recuerdan como un heroe ";
			}
		}
	}
	else
	{
		decision = 0;
		cout << "Giovanna nunca llego....";
		cout << "Poco a poco te vas acostuombrado pero ya no recibes la misma atencion en casa " << endl;
		cout << "En una de esas ves la puerta abierta, decide...";
		system("cls");
		cout << "Opcion 1 sales huyendo, opcion 2 te quedas en la casa";
		cin >> decision;
		if (decision==1)
		{
			decision = 0;
			cout << "Has decidido huir, decide para que camino ir (1) derecha, 2 (izquierda)" << endl;
			cin >> decision;
			if (decision==1)
			{
				cout << "Te encuentras una familia y te adopta, pero son chinos y te hacen un caldito de perro bien sabroso";
			}
			else
			{
				cout << "Te pierdes por un rato hasta que te peleas con un perro";
				if (raza == 3)
				{
					cout << " Eres un peleador nato y ganas, una semana despues te encuentras con una familia y te adoptan" << endl;
					cout << "Tienes una vida feliz.. por el resto de tu vida, excepto cuando te atoraste en un hueco y tuvieron que sacarte de ahi, los peores 30 minutos de tu vida";
				}
				else
				{
					cout << "Eres muy malo peleando y te moriste en la pelea " << endl;
					cout << "F";
				}
			}
		}
		else
		{
			cout << "Tienes una vida tranquila y mueres de viejo a la edad de 10 anios";
		}
	}


}

int main() {
	int comovida=0;
	cout << "Hola, mi nombre es Firulais y si soy un perro que habla, acompaniame a vivir mi vida desde 0"<<endl;
	cout << " A partir de hora me ayudaras a decidir cada una de mis acciones" << endl;
	system("cls");
	pedigree();
	



}




