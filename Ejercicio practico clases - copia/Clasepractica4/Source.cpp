
// 21-04-12ClasePractica4.cpp : Contador lento de 0 a 100.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "¿cómo hago que se muestre lentamente el texto?" << endl;
    //1er Ciclo - WHILE
    int contador1 = 0;
    while (contador1 <= 100) // La expresión dentro de los parentesis debe ser VERDADERA para ejecutar lo que hay dentro de las llaves.
    {
        cout << "Vas en la vuelta: " << contador1 << endl;
        contador1 = contador1 + 1;
    }
    cout << "Has llegado a la meta felicidades"<<endl;
    //2do Ciclo - DO WHILE
    bool disparar = false;
    int balas = 0;
    do
    {
        //Esto se ejecuta 1 vez y después se evalua la condición.
        cout << "Tienes " << balas << " gatos"<< endl;
        cout << "Quieres agarrar un gato?" << endl;
        cin >> disparar;
        if (disparar)
        {
            balas=balas+1;
            disparar = false;
        }
        else
        {
            cout << "Chale" << endl;
        }
    } while (balas < 10);
    cout << " \n Has agarrado el maximo de gatos";

    //(Parametro 1; Parametro 2; parametro 3)
    //Parametro 1 = Variable que nos ayudará a tener el control en todo momento.
    //Parametro 2 = Condición de recorrido.
    //Parametro 3 = el aumento de paso o disminución.
    for (int contador = 0; contador <= 100; contador = contador + 1)
    {
        cout << "Your time is: " << contador << endl;
    }
    cout << "Your time is up!" << endl;
}