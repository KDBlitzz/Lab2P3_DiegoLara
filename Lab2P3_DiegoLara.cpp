#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
#include<time.h>
#include<stdlib.h>
int generarNumRandom(int minimo, int maximo) {
	int random;
	random = 0;
	random = minimo + (rand() % maximo);
	return random;
}
void ejercicio_1() {
	double promedio = 0;
	double sumatoria = 0;
	double desviacionTipica = 0;
	double arreglo[10];
	int random = 0;
	for (int i = 0; i < 10; i++)
	{
		random = 0;
		random = generarNumRandom(100, 401);
		arreglo[i] = random;
	}
	for (int i = 0; i < 10; i++)
	{
		promedio += arreglo[i];
	}
	promedio = promedio / 10;
	for (int i = 0; i < 10; i++)
	{
		sumatoria += ((arreglo[i] - promedio) * (arreglo[i] - promedio)) / 10;
		desviacionTipica = sqrt(sumatoria);
	}


	cout << "Arreglo Generado: " << endl;
	cout << "[";
	for (int i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			cout << arreglo[i] << ",";
		}
		else {
			cout << arreglo[i];
		}
	}
	cout << "]" << endl;
	cout << "La desviaci�n est�ndar es: " << desviacionTipica << endl;
}

void menu() {
	bool menu = true;
	int op = 0;
	while (menu) {
		cout << "Ejercicio Pr�ctico 1 � Desviaci�n Est�ndar\n";
		cout << "Ejercicio pr�ctico 2 � Entero positivo m�nimo faltante\n";
		cout << "Ejercicio pr�ctico 3 � Easy Swap\n";
		cout << "4. Salir\n";
		cin >> op;
		switch (op) {
		case 1:
			ejercicio_1();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			menu = false;
			break;
		default:
			cout << "Numero Invalido\n";
		}
	}
}
int main()
{
	srand(time(NULL));
	menu();
}
