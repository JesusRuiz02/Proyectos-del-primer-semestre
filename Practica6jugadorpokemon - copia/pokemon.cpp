#include<iostream>
#include<cstdlib>
#include<ctime>
#include<stdlib.h>
#include<windows.h>

using namespace std;
int main() 
{	
	//declara variables
	int  Venosaur = 1, Charizard = 2, Greninja = 3, pokemon, mi_pokemon=0, vs_pokemon=0, mi_pokemon_vida=0, vs_pokemon_vida=0, accion, ataque, azar, defender=0, special=0 ;
	cout << "Hola!, escoge el pokemon que quieras utilizar  1.Venosaur (Tipo Planta) , 2.Charizard (Tipo fuego), 3.Greninja (Tipo agua)" << endl; cin >> pokemon;
	switch (pokemon) //switch para escoger pokemon
	{
	case 1: //pokemon venosaur
		cout << "\n Has escogido al gran Venosaur (Tipo planta) Lvl 50"<<endl;
		cout << "\n O vaya parece que te has topado un Charizard salvaje Lvl 50, tendremos que derrotarlo!"<<endl;
		mi_pokemon = 1;
		vs_pokemon = 2;
		mi_pokemon_vida = 220;
		vs_pokemon_vida = 170;
		break;
	case 2:  //pokemon charizard
		cout << "\n Has escogido al poderoso Charizard (Tipo fuego) Lvl 50" << endl;
		cout << "\n O vaya parece que te has topado un Greninja Lvl 50, tendremos que derrotarlo!"<<endl;
		mi_pokemon = 2;
		vs_pokemon = 3;
		mi_pokemon_vida = 170;
		vs_pokemon_vida = 230;

		break;
	case 3: //pokemon greninja
		cout << "\n Has escogido al genial Greninja (Tipo agua) Lvl 50" << endl;
		cout << "\n O vaya parece que te has topado un Charizard salvaje Lvl 50, tendremos que derrotarlo!"<<endl;
		mi_pokemon = 3;
		vs_pokemon = 1;
		mi_pokemon_vida = 230;
		vs_pokemon_vida = 220;


		break;


	default:
		break;
	}
	srand((unsigned)time(0));
	do
	{
		Sleep(3000);
		system("cls");
		cout << "Escoge la accion que haras 1.Ataque 2. Defiende 3.Ataque especial (Bajas probabilidades)"<<endl ; cin >> accion;
	  switch (accion) //Switch para escoger accion
	  {
		case 1: //Caso de Atacar
			if (mi_pokemon == 1)
			{
				cout << "Has escogido atacar, escoge tus ataques 1. Embestida, 2. Latigo cepa, 3.Sintesis (Recuperas vida) " << endl; cin >> ataque; //Ataque Venosaur
				switch (ataque)
				{
				case 1: //Caso embestida Venosaur
					cout << "Has escogido embestida" << endl; 
					azar = (rand() % 11 + 1);
					if ((azar != 2) && (azar != 10) && (azar != 7)) //probabilidades para que salga el ataque exitoso
					{
						if ((vs_pokemon_vida - 40) >= 0) //if para que no de negativo
						{
							vs_pokemon_vida = vs_pokemon_vida - 40;
						}
						else
						{
							vs_pokemon_vida = 0;
						}
						cout << " Genial le has hecho dano a Charizard, su vida es de  " << vs_pokemon_vida << endl;
						azar = (rand() % 11 + 1);
						if (mi_pokemon_vida - (azar * 7) >= 0) //if para que no de negativo
						{
							mi_pokemon_vida = mi_pokemon_vida - (azar * 7);
						}
						else
						{
							mi_pokemon_vida = 0;
						}
						cout << "Charizard te ataco tu vida es de  " << mi_pokemon_vida << endl;
					}
					else
					{
						cout << "Que mala suerte tu ataque ha sido nulo" << endl;
						azar = (rand() % 11 + 1);
						if (mi_pokemon_vida - (azar * 7) >= 0) //if para que no de vida negativa
						{
							mi_pokemon_vida = mi_pokemon_vida - (azar * 7);
						}
						else
						{
							mi_pokemon = 0;
						}
						cout << "Charizard te ataco tu vida es de  " << mi_pokemon_vida << endl;
					}
					break;

				case 2: //caso latigo cepa Venosaur
					cout << "Has escogido Latigo cepa" << endl;
					azar = (rand() % 11 + 1);
					if (azar != 6)
					{
						if ((vs_pokemon_vida - 20) >= 0)
						{
							vs_pokemon_vida = vs_pokemon_vida - 20;
						}
						else
						{
							vs_pokemon_vida = 0;
						}
						cout << " Genial le has hecho dano a Charizard, su vida es de  " << vs_pokemon_vida << endl;
						
						azar = (rand() % 11 + 1);
						if ((mi_pokemon_vida - (azar * 7)) >= 0 )
						{
							mi_pokemon_vida = mi_pokemon_vida - (azar * 7);
							
						}
						else
						{
							mi_pokemon_vida = 0;
						}
						cout << "Charizard te ataco tu vida es de  " << mi_pokemon_vida << endl;
					}
					else
					{
						cout << "Que mala suerte tu ataque ha sido nulo" << endl;
						azar = (rand() % 11 + 1);
						if ((mi_pokemon_vida - (azar * 7)) >= 0)
						{
							mi_pokemon_vida = mi_pokemon_vida - (azar * 7);
						}
						else
						{
							mi_pokemon_vida = 0;
						}
						
						cout << "Charizard te ataco tu vida es de  " << mi_pokemon_vida << endl;
					}
					break;
				case 3: //Caso para sintesis Venosaur
					cout << "Has escogido sintesis";
					if (mi_pokemon_vida == 220)
					{
						cout << "Ya tienes tu salud maxima" << endl;
					}
					else
					{
						mi_pokemon_vida = mi_pokemon_vida + 24;
						cout << "Tu vida actual es de  " << mi_pokemon_vida;
						azar = (rand() % 11 + 1);
						if ((mi_pokemon_vida - (azar * 7)) >= 0)
						{
							mi_pokemon_vida = mi_pokemon_vida - (azar * 7);
						}	
						else
						{
							mi_pokemon_vida = 0;
						}
						cout << "Charizard te ataco tu vida es de  " << mi_pokemon_vida << endl;
					}
					break;


				default:
					break;
				}

			}
			else
			{
				if (mi_pokemon == 2) //caso Charizard
				{
					cout << "Has escogido atacar, escoge tus ataques 1. Aranazo, 2. Garra dragon , 3.Envio igneo " << endl; cin >> ataque;
					switch (ataque)
					{
					case 1: //aranazo charizard
						cout << "Has escogido aranazo" << endl;
						azar = (rand() % 11 + 1);
						if ((azar != 4) && (azar != 8) && (azar != 2))
						{
							if (vs_pokemon_vida - 45 >= 0)
							{
								vs_pokemon_vida = vs_pokemon_vida - 45;
							}
							else
							{
								vs_pokemon_vida = 0;
							}
							cout << " Genial le has hecho dano a Greninja, su vida es de  " << vs_pokemon_vida << endl;
							azar = (rand() % 11 + 1);
							if (mi_pokemon_vida - (azar * 5) >= 0)
							{
								mi_pokemon_vida = mi_pokemon_vida - (azar * 5);
							}
							else
							{
								mi_pokemon_vida = 0;
							}
							cout << "Greninja te ataco tu vida es de  " << mi_pokemon_vida << endl;
						}
						else
						{
							cout << "Que mala suerte tu ataque ha sido nulo" << endl;
							azar = (rand() % 11 + 1);
							if (mi_pokemon_vida - (azar * 5)  >= 0)
							{
								mi_pokemon_vida = mi_pokemon_vida - (azar * 5);
							}
							else
							{
								mi_pokemon_vida = 0;
							}
							cout << "Greninja te ataco tu vida es de  " << mi_pokemon_vida << endl;
						}
						break;

					case 2: //garra dragom charizard
						cout << "Has escogido Garra Dragon" << endl;
						azar = (rand() % 11 + 1);
						if ((azar != 3) && (azar != 9))
						{
							if (vs_pokemon_vida - 30 >= 0)
							{
								vs_pokemon_vida = vs_pokemon_vida - 30;
							}
							else
							{
								vs_pokemon_vida = 0;
							}
							cout << " Genial le has hecho dano a Greninja, su vida es de  " << vs_pokemon_vida << endl;
							azar = (rand() % 11 + 1);
							if (mi_pokemon_vida - (azar * 5) >= 0)
							{
								mi_pokemon_vida = mi_pokemon_vida - (azar * 5);
							}
							else
							{
								mi_pokemon_vida = 0;
							}
							cout << "Greninja te ataco tu vida es de  " << mi_pokemon_vida << endl;
						}
						else //ataque nulo
						{
							cout << "Que mala suerte tu ataque ha sido nulo" << endl;
							azar = (rand() % 11 + 1);
							if (mi_pokemon_vida - (azar * 5) >= 0)
							{
								mi_pokemon_vida = mi_pokemon_vida - (azar * 5);
							}
							else
							{
								mi_pokemon_vida = 0;
							}
							cout << "Greninja te ataco tu vida es de  " << mi_pokemon_vida << endl;
						}
						break;
					case 3: //ataque igneo charizard
						cout << "Has escogido envio igneo" << endl;
						cout << "Tu Pokémon se cubre de llamas y carga contra el rival, aunque él también recibe daños.";
						if (vs_pokemon_vida - 50 >= 0)
						{
							vs_pokemon_vida = vs_pokemon_vida - 50;
						}
						else
						{
							vs_pokemon_vida = 0;
						}
						cout << " Genial le has hecho dano a Greninja, su vida es de  " << vs_pokemon_vida << endl;
						if (mi_pokemon_vida - 15 >=0)
						{
							mi_pokemon_vida = mi_pokemon_vida - 15;
						}
						else
						{
							mi_pokemon_vida = 0;
						}
						cout << " Tu vida es de " << mi_pokemon_vida;

						break;
						cout << " Genial le has hecho dano a Greninja, su vida es de  " << vs_pokemon_vida << endl;
						cout << "Te has hecho dano con ese ataque tu vida es de " << mi_pokemon_vida << endl;
						azar = (rand() % 11 + 1);
						if (mi_pokemon_vida - (azar * 5) >= 0)
						{
							mi_pokemon_vida = mi_pokemon_vida - (azar * 5);
						}
						else
						{
							mi_pokemon_vida = 0;
						}
						cout << "Greninja te ataco tu vida es de  " << mi_pokemon_vida << endl;

					default:
						break;
					}

				}
				else
				{
					if (mi_pokemon == 3) //Caso de greninja
					{
						cout << "Has escogido atacar, escoge tus ataques 1. Hidrobomba, 2. Hidropulso, 3.Aguas locas (Recuperas vida) " << endl; cin >> ataque;
						switch (ataque)
						{
						case 1: //Hidrobomba greninja
							cout << "Has escogido hidrobomba" << endl;
							azar = (rand() % 11 + 1);
							if ((azar != 3) && (azar != 6) && (azar != 10))
							{
								if (vs_pokemon_vida - 40 >=0 )
								{
									vs_pokemon_vida = vs_pokemon_vida - 40;
								}
								else
								{
									vs_pokemon_vida = 0;
								}
								cout << " Genial le has hecho dano a Venosaur, su vida es de  " << vs_pokemon_vida << endl;
								azar = (rand() % 11 + 1);
								if (mi_pokemon_vida - (azar * 6) >= 0)
								{
									mi_pokemon_vida = mi_pokemon_vida - (azar * 6);
								}
								else
								{
									mi_pokemon_vida = 0;
								}
								cout << "Venusaur te ataco tu vida es de  " << mi_pokemon_vida << endl;
							}
							else
							{
								cout << "Que mala suerte tu ataque ha sido nulo" << endl;
								azar = (rand() % 11 + 1);
								if (mi_pokemon_vida - (azar * 6) >= 0 )
								{
									mi_pokemon_vida = mi_pokemon_vida - (azar * 6);
								}
								else
								{
									mi_pokemon_vida = 0;
								}
								cout << "Venusaur te ataco tu vida es de  " << mi_pokemon_vida << endl;
							}
							break;

						case 2: //hidropulso greninja
							cout << "Has escogido Hidropulso" << endl;
							azar = (rand() % 11 + 1);
							if (azar != 3)
							{
								if (vs_pokemon_vida - 15 >= 0)
								{
									vs_pokemon_vida = vs_pokemon_vida - 15;
								}
								else
								{
									vs_pokemon_vida = 0;
								}
								cout << " Genial le has hecho dano a Venosaur, su vida es de  " << vs_pokemon_vida << endl;
								azar = (rand() % 11 + 1);
								if (mi_pokemon_vida - (azar * 6) >= 0)
								{
									mi_pokemon_vida = mi_pokemon_vida - (azar * 6);
								}
								else
								{
									mi_pokemon_vida = 0;
								}
								cout << "Venusaur te ataco tu vida es de  " << mi_pokemon_vida << endl;
							}
							else
							{
								cout << "Que mala suerte tu ataque ha sido nulo" << endl;
								azar = (rand() % 11 + 1);
								if (mi_pokemon_vida - (azar * 6) >= 0)
								{
									mi_pokemon_vida = mi_pokemon_vida - (azar * 6);
								}
								else
								{
									mi_pokemon_vida = 0;
								}
								cout << "Venusaur te ataco tu vida es de  " << mi_pokemon_vida << endl;
							}
							break;
						case 3: //aguas locas greninja
							cout << "Has escogido aguas locas"<<endl;
							if (mi_pokemon_vida == 220)
							{
								cout << "Ya tienes tu salud maxima" << endl;
								azar = (rand() % 11 + 1);
								if (mi_pokemon_vida - (azar * 6) >= 0)
								{
									mi_pokemon_vida = mi_pokemon_vida - (azar * 6);
								}
								else
								{
									mi_pokemon_vida = 0;
								}
								cout << "Venusaur te ataco tu vida es de  " << mi_pokemon_vida << endl;
							}
							else
							{
								mi_pokemon_vida = mi_pokemon_vida + 20;
								cout << "Tu vida actual es de " << mi_pokemon_vida;
								azar = (rand() % 11 + 1);
								if (mi_pokemon_vida - (azar * 6) >= 0)
								{
									mi_pokemon_vida = mi_pokemon_vida - (azar * 6);
								}
								else
								{
									mi_pokemon_vida = 0;
								}
								cout << "Venusaur te ataco tu vida es de  " << mi_pokemon_vida << endl;
							}
							break;


						default:
							break;
						}

					}
				}

			}
			break;
		case 2:
			//defiendo uno
			if (mi_pokemon == 1) //caso venosaur defender
			{
				cout << "Has escogido defender, escoge tus opciones 1. Esquivar(Bajas probabilidades), 2. Bloquear " << endl; cin >> defender;
				switch (defender)
				{
				case 1:
					cout << "Has escogido esquivar" << endl; //esquivar venosaur
					azar = (rand() % 11 + 1);
					if ((azar != 2) && (azar != 10) && (azar != 7) && (azar != 5) && (azar != 8))
					{
						cout << " Genial lo has esquivado  " << mi_pokemon_vida << endl;
					}
					else
					{
						cout << "Que mala suerte no has podido esquivarlo" << endl;
						azar = (rand() % 11 + 1);
						if (mi_pokemon_vida - (azar * 7) >= 0)
						{
							mi_pokemon_vida = mi_pokemon_vida - (azar * 7);
						}
						else
						{
							mi_pokemon_vida = 0;
						}
						cout << "Charizard te ataco tu vida es de  " << mi_pokemon_vida << endl;
					}
					break;

				case 2: //defender venosaur
					cout << "Has escogido Defender" << endl;
					azar = (rand() % 11 + 1);
					if (mi_pokemon_vida - (azar * 3) >= 0)
					{
						mi_pokemon_vida = mi_pokemon_vida - (azar * 3);
					}
					else
					{
						mi_pokemon_vida = 0;
					}
					cout << "Alcanzaste a bloquear, pero recibiste la mitad de dano a Charizard te ataco tu vida es de  " << mi_pokemon_vida << endl;

					break;
				}
			}
		    if (mi_pokemon == 2) //caso charizard defender
					{
						cout << "Has escogido defender, escoge tus opciones 1. Esquivar(Bajas probabilidades), 2. Bloquear " << endl; cin >> defender;
						switch (defender)
						{
						  case 1:
							cout << "Has escogido esquivar" << endl; //esquivar charizard
							azar = (rand() % 11 + 1);
							if ((azar != 2) && (azar != 10) && (azar != 7) && (azar != 5))
							{
								cout << " Genial lo has esquivado  " << mi_pokemon_vida << endl;
							}
							else
							{
								cout << "Que mala suerte no has podido esquivarlo" << endl;
								azar = (rand() % 11 + 1);
								if (mi_pokemon_vida - (azar * 5) >= 0)
								{
									mi_pokemon_vida = mi_pokemon_vida - (azar * 5);
								}
								else
								{
									mi_pokemon_vida = 0;
								}
								cout << "Greninja te ataco tu vida es de  " << mi_pokemon_vida << endl;
							}
							break;

						  case 2: //defender charizard
							cout << "Has escogido Defender" << endl;
							azar = (rand() % 11 + 1);
							if (mi_pokemon_vida - (azar * 2) >= 0 )
							{
								mi_pokemon_vida = mi_pokemon_vida - (azar * 2);
							}
							else
							{
								mi_pokemon_vida = 0;
							}
							cout << "Alcanzaste a bloquear, pero recibiste la mitad de dano a Greninja te ataco tu vida es de  " << mi_pokemon_vida << endl;
							break;
						}
					}
			if (mi_pokemon == 3) //caso greninja
					{
						cout << "Has escogido defender, escoge tus opciones 1. Esquivar(Bajas probabilidades), 2. Bloquear " << endl; cin >> defender;
						switch (defender)
						{
						  case 1: //grening esquivar
							cout << "Has escogido esquivar" << endl;
							azar = (rand() % 11 + 1);
							if ((azar != 2) && (azar != 10) && (azar != 7) && (azar != 5))
							{
								cout << " Genial lo has esquivado  " << mi_pokemon_vida << endl;
							}
							else
							{
								cout << "Que mala suerte no has podido esquivarlo" << endl;
								azar = (rand() % 11 + 1);
								if ((azar * 5) >= 0)
								{
									mi_pokemon_vida = mi_pokemon_vida - (azar * 5);
								}
								else
								{
									mi_pokemon_vida = 0;
								}
								cout << "Venusaur te ataco tu vida es de  " << mi_pokemon_vida << endl;
							}
							break;

						  case 2:
							cout << "Has escogido Defender" << endl; //greninja defender
							azar = (rand() % 11 + 1);
							if (mi_pokemon_vida - (azar * 2) >= 0)
							{
								mi_pokemon_vida = mi_pokemon_vida - (azar * 2);
							}
							else
							{
								mi_pokemon_vida = 0;
							}
							cout << "Alcanzaste a bloquear, pero recibiste la mitad de dano a Venusaur te ataco tu vida es de  " << mi_pokemon_vida << endl;
							break;
						}

					}

				
			
		break;
		case 3: //caso ataque especial
			cout << "Has escogido el atatque especial" << endl;
			if (mi_pokemon == 1) //caso venosaur
			{
				azar = (rand() % 11 + 1);
				if ((azar != 2) && (azar != 10) && (azar != 7) && (azar != 5) && (azar != 6) && (azar != 3) && (azar != 9) && (azar!=8))
				{
					cout << "GENIAL HAS PODIDO HACER EL ATAQUE ESPECIAL DE VENOSAUR"<<endl;
					if (vs_pokemon_vida - 100 >= 0)
					{
						vs_pokemon_vida = vs_pokemon_vida - 100;
					}
					else
					{
						vs_pokemon_vida = 0;
					}
					cout << "A tu rival le queda " << vs_pokemon_vida;
					if (mi_pokemon_vida - (azar * 7) >= 0 )
					{
						mi_pokemon_vida = mi_pokemon_vida - (azar * 7);
					}
					else
					{
						mi_pokemon_vida = 0;
					}
					cout << "Charizard te ataco tu vida es de " << mi_pokemon_vida << endl;
				}
				else
				{
					cout << "Has fallado en el ataque especial y dejado descubierta tu defensa ";
					if (mi_pokemon_vida - 100 >= 0)
					{
						mi_pokemon_vida = mi_pokemon_vida - 100;
					}
					else
					{
						mi_pokemon_vida = 0;
					}
					cout << "tu vida es de  " << mi_pokemon_vida;
				}
			}
			if (mi_pokemon == 2) //caso charizard
			{
				azar = (rand() % 11 + 1);
				if ((azar != 2) && (azar != 10) && (azar != 7) && (azar != 5) && (azar != 6) && (azar != 3) && (azar != 9) && (azar!=8))
				{
					cout << "GENIAL HAS PODIDO HACER EL ATAQUE ESPECIAL DE Charizard"<<endl;
					if ((vs_pokemon_vida - 100) >= 0)
					{
						vs_pokemon_vida = vs_pokemon_vida - 100;
					}
					else
					{
						vs_pokemon_vida = 0;
					}
					cout << "A tu rival le queda " << vs_pokemon_vida << endl;
					
					if ((mi_pokemon_vida - (azar * 5)) >= 0)
					{
						mi_pokemon_vida = mi_pokemon_vida - (azar * 5);
					}
					else
					{
						mi_pokemon_vida = 0;
					}
						cout << "Greninja te ataco tu vida es de  " << mi_pokemon_vida << endl;
					

				}
				else
				{

					cout << "Has fallado en el ataque especial y dejado descubierta tu defensa ";
					if ((mi_pokemon_vida - 100) >= 0)
					{


						mi_pokemon_vida = mi_pokemon_vida - 100;

					}
					else
					{
						mi_pokemon_vida = 0;
					}
						cout << "tu vida es de " << mi_pokemon_vida<<endl;
				}
			}
			if (mi_pokemon == 3) //caso de greninja
			{
				azar = (rand() % 11 + 1);
				if ((azar != 2) && (azar != 10) && (azar != 7) && (azar != 5) && (azar != 6) && (azar != 3) && (azar != 9)&&(azar!=8))
				{
					cout << "GENIAL HAS PODIDO HACER EL ATAQUE ESPECIAL DE Greninja"<<endl;
					if (vs_pokemon_vida - 100 >= 0)
					{
						vs_pokemon_vida = vs_pokemon_vida - 100;
					}
					else
					{
						vs_pokemon_vida = 0;
					}
					cout << "A tu rival le queda " << vs_pokemon_vida<<endl;
					if (mi_pokemon_vida - (azar * 6) >= 0)
					{
						mi_pokemon_vida = mi_pokemon_vida - (azar * 6);
					}
					else
					{
						mi_pokemon_vida = 0;
					}
					cout << "Charizard te ataco tu vida es de " << mi_pokemon_vida << endl;

				}
				else
				{
					cout << "Has fallado en el ataque especial y dejado descubierta tu defensa"<<endl;
					if (mi_pokemon_vida - 100 >= 0)
					{
						mi_pokemon_vida = mi_pokemon_vida - 100;
					}
					else
					{
						mi_pokemon_vida = 0;
					}
					cout <<  "tu vida es de " << mi_pokemon_vida;

				}
			}
		break;
			
		
	  }

		

	} while (mi_pokemon_vida > 0 && vs_pokemon_vida > 0); //condicion para salir

	if (mi_pokemon_vida >0) //condicion para determinar ganador
	{
		cout << " \n Has ganado!!!!";
	}
	else
	{
		
		cout << " \n Has perdido :(";
	}








}