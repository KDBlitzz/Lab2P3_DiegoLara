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
	cout << random << endl;
	return random;
}
void ejercicio_1() {
	double promedio = 0;
	double sumatoria = 0;
	double desviacionTipica = 0;
	double arreglo[10] = { 256,432,178,387,123,499,310,189,275,418 };
	for (int i = 0; i < 10; i++)
	{
		promedio += arreglo[i];
	}
	promedio = promedio / 10.0;
	cout << promedio << endl;
	for (int i = 0; i < 10; i++)
	{
		sumatoria += ((arreglo[i] - promedio) * (arreglo[i] - promedio))/10;
	}
	cout << sumatoria << endl;
	desviacionTipica = sumatoria / 10;
	cout << desviacionTipica << endl;
	/*int random = 0;
	for (int i = 0; i < 10; i++)
	{
		random = 0;
		random = generarNumRandom(100, 401);
		arreglo[i] = random;

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
	cout << "]" << endl;*/
}

void menu() {
	bool menu = true;
	int op = 0;
	while (menu) {
		cout << "Ejercicio Práctico 1 – Desviación Estándar\n";
		cout << "Ejercicio práctico 2 – Entero positivo mínimo faltante\n";
		cout << "Ejercicio práctico 3 – Easy Swap\n";
		cout << "4. Salir\n";
		cin >> op;
		switch (op) {
		case 1:
			ejercicio_1();
			//generarNumRandom(100, 401);
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
