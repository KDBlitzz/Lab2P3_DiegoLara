#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
#include<time.h>
#include<stdlib.h>
#include <locale>
int generarNumRandom(int minimo, int maximo) { // metodo para generar numeros al azar de un rango
	int random;
	random = 0;
	random = minimo + (rand() % maximo);
	return random;
}
void ejercicio_1() { // Ejercicio 1
	double promedio = 0;
	double sumatoria = 0;
	double desviacionTipica = 0;
	double arreglo[10];
	int random = 0;
	for (int i = 0; i < 10; i++) // for que genera los numeros al azar y los pone en el arreglo
	{
		random = 0;
		random = generarNumRandom(100, 401);
		arreglo[i] = random;
	}
	for (int i = 0; i < 10; i++)
	{
		promedio += arreglo[i];
	} // for que agarra los valores del arreglo y los acumula en una variable
	promedio = promedio / 10; // para despues sacarles el promedio
	for (int i = 0; i < 10; i++)
	{
		sumatoria += ((arreglo[i] - promedio) * (arreglo[i] - promedio)) / 10;
		desviacionTipica = sqrt(sumatoria);
	} // for que hace todo la ecuacion


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
	} // imprime el arreglo
	cout << "]" << endl;
	cout << "La desviación estándar es: " << desviacionTipica << endl;
}
void ejercicio_2() { // Ejercio 2
	int random = 0;
	int arreglo[10];
	for (int i = 0; i < 10; i++) // meter los numeros al azar adentro del arreglo
	{
		random = generarNumRandom(-9, 19);
		arreglo[i] = random;
	}
	cout << "Arreglo Generado: ";
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
	} // imprimir el arreglo

	cout << "]" << endl;
	int contador = 1;
	int temporal = 0;
	for (int i = 1; i <= 10; i++) // for que va del 1 al 10 validando que numeros estan adentro del arreglo
	{
		if (contador == arreglo[i])
		{
			contador++;
			i = 1;
		}
		else {
			if (temporal > contador) // condicion if que comprueba el minimo numero entero
			{
				temporal = contador;
			}
			temporal = contador;
		}
	}
	if (contador == 10)
	{
		cout << "No hay ningún número positivo faltante en el arreglo" << endl;
	}
	else {
		cout << temporal << endl;
	}
}

void recursiva(int& a, int& b) { // recursiva
	if (&a != &b)
	{
		cout << a << " " << b;
		cout << endl;
	}
	else {
		a++;
		b--;
		recursiva(a, b);
	}
}
void swap(int& a, int& b) { // swap para las variables adentro del arreglo
	int acumulador;
	acumulador = b;
	b = a;
	a = acumulador;
	recursiva(a, b);
}
void ejercicio_3() { // ejercicio 3
	int arreglo[7] = { 1,2,3,4,5,6,7 };
	cout << "Antes de Divertirme" << endl;
	for (int i = 0; i < 7; i++) // Imprimir el arreglo
	{
		if (i != 6)
		{
			cout << arreglo[i] << " ";
		}
		else {
			cout << arreglo[i];
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 1; j < 7; j++)
		{
			swap(arreglo[i], arreglo[j]);
		}
	}
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
			ejercicio_2();
			break;
		case 3:
			ejercicio_3();
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
