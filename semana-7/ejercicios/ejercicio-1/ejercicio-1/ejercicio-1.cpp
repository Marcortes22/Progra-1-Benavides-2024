

#include<fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;


void crearArchivo( string nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (archivo) {
        cout << "Archivo creado exitosamente." << endl;
    }
    else {
        cout << "No se pudo crear el archivo." << endl;
    }
    archivo.close();
}

void cargarArchivo( string nombreArchivo, vector<string>& nombres) {
    ifstream archivo(nombreArchivo);
    if (archivo) {
        string nombre;
        nombres.clear();
        while (getline(archivo, nombre)) {
            nombres.push_back(nombre);
        }
        cout << "Archivo cargado exitosamente." << endl;
    }
    else {
        cout << "No se pudo cargar el archivo." << endl;
    }
    archivo.close();
}



// Función para limpiar un archivo
void limpiarArchivo( string nombreArchivo) {
    ofstream archivo(nombreArchivo, ofstream::trunc);
    if (archivo) {
        cout << "Archivo limpiado exitosamente." << endl;
    }
    else {
        cout << "No se pudo limpiar el archivo." << endl;
    }
    archivo.close();
}


// Función para limpiar un archivo
void mostrarNombres(vector <string> nombres) {
    for (int i = 0; i < nombres.size(); i++) {

		cout << nombres[i] << endl;
    }
}








// Función para agregar todos los nombres del vector al archivo
void guardarEnArchivo(string nombreArchivo, vector<string>& nombres) {

	ofstream archivo(nombreArchivo);

    for (int i = 0; i < nombres.size(); i++) {

        archivo << nombres[i] << endl;
    }

    archivo.close();
}



int main()
{
    string nombreArchivo = "nombres.txt";

    vector<string> nombres;
    int opcion;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Crear archivo txt" << endl;
        cout << "2. Cargar archivo txt" << endl;
        cout << "3. Limpiar archivo txt" << endl;
        cout << "4. Agregar nombre al vector" << endl;
        cout << "5. Mostrar nombres del vector" << endl;
        cout << "6. Guardar nombres en archivo" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;
        cin.ignore(); // Para ignorar el salto de línea después de la opción

        switch (opcion) {
        case 1:
            crearArchivo(nombreArchivo);
            system("pause");
            break;
        case 2:
            cargarArchivo(nombreArchivo, nombres);
            system("pause");

            break;
        case 3:
            limpiarArchivo(nombreArchivo);
            system("pause");

            break;
        case 4: {
            string nombre;
            cout << "Ingrese el nombre a agregar: ";
            getline(cin, nombre);
			nombres.push_back(nombre);
            system("pause");

            break;
        }
        case 5:
            mostrarNombres(nombres);
            system("pause");

            break;
        case 6:
			guardarEnArchivo(nombreArchivo, nombres);
            system("pause");

            break;

		case 7:
            cout << "saliendo del programa...";
            break;
        default:
            cout << "Opción no válida. Intente de nuevo." << endl;
            break;
        }
		system("cls");
    } while (opcion != 7);
    
}



