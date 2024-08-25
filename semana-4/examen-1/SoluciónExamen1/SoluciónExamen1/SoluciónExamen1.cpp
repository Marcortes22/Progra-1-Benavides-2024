

#include <iostream>
using namespace std;

int main()
{
    int opcion;

    do {
        cout << "========================================" << endl;
        cout << "\n--- Menu de Gestion de Pacientes ---\n\n";
        cout << "========================================" << endl;
        cout << "1. Ingresar un nuevo paciente\n";
        cout << "2. Modificar la informacion de un paciente existente\n";
        cout << "3. Buscar un paciente\n";
        cout << "4. Mostrar el promedio de edad de los pacientes\n";
        cout << "5. Ver el estado de internacion de los pacientes\n";
        cout << "6. Salir del programa\n";
        cout << "========================================\n" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Limpiar la pantalla
        system("cls");

        switch (opcion) {
        case 1: {
            cout << "Opcion 1: Ingresar un nuevo paciente\n";
            // Llamar a la función para ingresar un nuevo paciente
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 2: {
            cout << "Opcion 2: Modificar la informacion de un paciente existente\n";
            // Llamar a la función para modificar la información de un paciente
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 3: {
            cout << "Opcion 3: Buscar un paciente\n";
            // Llamar a la función para buscar un paciente
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 4: {
            cout << "Opcion 4: Mostrar el promedio de edad de los pacientes\n";
            // Llamar a la función para mostrar el promedio de edad
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 5: {
            cout << "Opcion 5: Ver el estado de internacion de los pacientes\n";
            // Llamar a la función para mostrar el estado de internación
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 6: {
            cout << "Saliendo del programa...\n";
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        default: {
            cout << "Opcion invalida. Por favor, seleccione una opcion valida.\n";
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
        }
        }
    } while (opcion != 6);
}
