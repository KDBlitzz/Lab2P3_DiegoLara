#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
#include<time.h>
#include<stdlib.h>
#include <locale>
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
	cout << "La desviación estándar es: " << desviacionTipica << endl;
}
void ejercicio_2() {
	int arreglo[10] = {6,-6,9,1,-8,2,-1,0,10,7};
	int contador = 1;
	int temporal = 0;
		for (int i = 1; i <= 10; i++)
		{
			if (contador == arreglo[i])
			{
				contador++;
				i = 0;
			}
			else {
				if (temporal > contador)
				{
					temporal = contador;
				}
				
			}
		}
	
}
void ejercicio_3() {
	int arreglo[7] = { 1,2,3,4,5,6,7 };

}
void swap(int n, int m) {
}
void recursiva() {

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
	setlocale(LC_ALL, "spanish");
	srand(time(NULL));
	menu();
}
