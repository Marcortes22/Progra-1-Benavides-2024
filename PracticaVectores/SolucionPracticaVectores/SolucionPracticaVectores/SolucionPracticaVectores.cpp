#include<iostream>
using namespace std;


void Ejercicio1();
void Ejercicio2();


int main() {

	int opcion;

	do {
		// Mostrar el menú
		cout << "===== MENU PRINCIPAL =====" << endl;
		cout << "1. Sumatoria de arreglo " << endl;
		cout << "2. Arreglo en order inverso" << endl;
		cout << "3. " << endl;
		cout << "4. " << endl;
		cout << "5. Salir" << endl;
		cout << "Seleccione una opción: ";
		cin >> opcion;

		// Procesar la opción seleccionada
		switch (opcion) {
		case 1:
			Ejercicio1();
			// Agrega el código para la Opción 1 aquí
			break;
		case 2:
			Ejercicio2();
			break;
		case 3:
			cout << "Has seleccionado la Opción 3" << endl;
			// Agrega el código para la Opción 3 aquí
			break;
		case 4:
			cout << "Has seleccionado la Opción 4" << endl;
			// Agrega el código para la Opción 4 aquí
			break;
		case 5:
			cout << "Saliendo del programa..." << endl;
			break;
		default:
			cout << "Opción no válida. Intente de nuevo." << endl;
		}

		cout << endl;

	} while (opcion != 5);

	return 0;
}

//Declara un arreglo de 5 elementos enteros e inicialízalo con valores consecutivos del 1 al 5. Luego,
// escribe un programa que sume todos los elementos del arreglo y muestre el resultado
void Ejercicio1() {
	int sumatoria = 0;

	int numeros[5] = {1,2,3,4,5};

	for (int i = 0; i < 5; i++)
	{
		sumatoria = sumatoria + numeros[i];
	}

	cout << "La sumatoria de los elementos del arreglo es: " << sumatoria << endl;
}  


//Crea un programa que reciba 5 números enteros desde el teclado, 
// los almacene en un arreglo y luego imprima el arreglo en orden inverso.
void Ejercicio2() {

	int numeros[5] = {0,0,0,0,0};
	int numeroAgregar = 0;

	for (int i = 0; i < 5; i++) {
		cout << "\nIngrese el numero que va estar el la pos: " << i + 1 << ": ";
		cin >> numeroAgregar;
		numeros[i] = numeroAgregar;
	}
	system("cls");
	cout << "Orden ascendente: "<<endl;
	for (int i = 0; i < 5; i++)
	{
		cout << numeros[i] << " - ";
	}

	cout << "\nOrden descendente: " << endl;
	for (int i = 4; i >= 0; i--)
	{
		cout << numeros[i] << " - ";
	}
	system("pause");


}


