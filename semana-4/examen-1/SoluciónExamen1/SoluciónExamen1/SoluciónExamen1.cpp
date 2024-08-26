

#include <iostream>
#include<vector>
#include <string>
using namespace std;


// ID, nombre, edad, diagnóstico y estado de internación
class Paciente {
private:
    int Id;
	string Nombre;
	int Edad;
	string Diagnostico;
	bool Internado;

public:
    Paciente(int Id, string Nombre, int Edad, string Diagnostico) {
		this->Id = Id;
		this->Nombre = Nombre;
		this->Edad = Edad;
		this->Diagnostico = Diagnostico;
		this->Internado = true;
	}

    Paciente() {
        this->Id = 0;
        this->Nombre = "";
        this->Edad = 0;
        this->Diagnostico = "";
        this->Internado = true;
    }

	void setId(int Id) {
		this->Id = Id;
    }

	void setNombre(string Nombre) {
		this->Nombre = Nombre;
	}

    void setEdad(int Edad) {
        this->Edad = Edad;
    }

	void setDiagnostico(string Diagnostico) {
		this->Diagnostico = Diagnostico;
	}

	void setInternado(bool Internado) {
		this->Internado = Internado;
	}

	int getId() {
		return this->Id;
    }

	string getNombre() {
		return this->Nombre;
	}

	int getEdad() {
		return this->Edad;
	}

	string getDiagnostico() {
		return this->Diagnostico;
	}

	bool getInternado() {
		return this->Internado;
	}

    void mostrarDatos() {
        cout << "\n======================\n";
        cout << "Id: " << Id
            << "\nNombre: " << Nombre
            << "\nEdad: " << Edad
            << "\nDiagnostico: " << Diagnostico
            << "\nEstado: ";
        if (Internado == true) {
            cout << "Paciente Internado";
        }
        else {
            cout << "Paciente dado de alta";
        }
        cout << "\n======================\n";
	}
    
};


class ListaPacientes {
private:
	vector<Paciente> vectorPacientes;

public:
	ListaPacientes() {}

    void setAddPaciente(Paciente nuevoPaciente) {

        if (verificarIdPaciente(nuevoPaciente.getId()) == true) {
            cout << "Ya existe un paciente con ese Id, intente de nuevo con uno diferente!!";
        }
        else {
            vectorPacientes.push_back(nuevoPaciente);
			cout << "Paciente agregado exitosamente!";
        }

    }

    bool verificarIdPaciente(int Id) {

		bool esRepetido = false;

		for (int i = 0; i < vectorPacientes.size(); i++) {
            if (vectorPacientes[i].getId() == Id) {
				esRepetido = true;
            }
        }

		return esRepetido;
    }


    void mostrarPacientes() {
        for (int i = 0; i < vectorPacientes.size(); i++) {
			vectorPacientes[i].mostrarDatos();
        }
    }


    void setUpdatePaciente(int Id) {
        string nombre, diagnostico;
        int edad;
        bool darDeAlta;
        bool encontrado = false;
        for (int i = 0; i < vectorPacientes.size(); i++) {

            // |p1|p2|p3|p4|

            if (vectorPacientes[i].getId() == Id) {
                encontrado = true;
                cout << "Ingrese el nuevo nombre del paciente: ";
				cin >> nombre;
				cin.ignore();

                cout << "Ingrese el nuevo diagnostico del paciente: ";  
				getline(cin, diagnostico);

                cout << "Ingrese el nuevo edad del paciente: ";
                cin >> edad;

                cout << "1. Internar \n0. Dar de alta\n";
                cin >> darDeAlta;

                vectorPacientes[i].setNombre(nombre);
				vectorPacientes[i].setDiagnostico(diagnostico);
				vectorPacientes[i].setEdad(edad);
				vectorPacientes[i].setInternado(darDeAlta);

                cout << "Datos editados exitosamente!!!";
            }
            

        }

        if (!encontrado) {
            cout << "Paciente no fue encontrado, intente con otro id";
        }
    }

    void getSearchPaciente(int Id) {
       
        bool encontrado = false;

        for (int i = 0; i < vectorPacientes.size(); i++) {

            if (vectorPacientes[i].getId() == Id) {
                encontrado = true;
				vectorPacientes[i].mostrarDatos();
            }

        }

        if (!encontrado) {
            cout << "Paciente no fue encontrado, intente con otro id";
        }
    }


    void getPromedioEdad() {
        int sumatoriaEdades = 0;
		int cantidadEdades = 0;
        for (int i = 0; i < vectorPacientes.size(); i++) {

            sumatoriaEdades += vectorPacientes[i].getEdad();
			cantidadEdades++;
        }

        cout << "El promedio de edades de los pacientes es: "<<sumatoriaEdades / cantidadEdades;
    }

    void getEstadoInternacion() {
        int nInternados = 0;
        int nDadosDeAlta = 0;

        for (int i = 0; i < vectorPacientes.size(); i++) {

            if (vectorPacientes[i].getInternado() == 1) {
                nInternados++;
            }
            else {
				nDadosDeAlta++;
            }

        }

        cout << "Numero de pacientes registrados: " << vectorPacientes.size()
            << "\nNumero de pacientes internados: " << nInternados
            << "\nNumero de pacientes dados de alta: " << nDadosDeAlta;

    }
};



























int main()
{
    int opcion;
	ListaPacientes lista;

    int Id, Edad;
    string Nombre, Diagnostico;

    do {
        cout << "========================================" << endl;
        cout << "\n--- Menu de Gestion de Pacientes ---\n\n";
        cout << "========================================" << endl;
        cout << "1. Ingresar un nuevo paciente\n";
        cout << "2. Modificar la informacion de un paciente existente\n";
        cout << "3. Buscar un paciente\n";
        cout << "4. Mostrar el promedio de edad de los pacientes\n";
        cout << "5. Ver el estado de internacion de los pacientes\n";
        cout << "6. Ver lista pacientes\n";
        cout << "7. Salir del programa\n";
        cout << "========================================\n" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Limpiar la pantalla
        system("cls");

        switch (opcion) {
        case 1: {
          

            cout << "\t\t\t\t .:INGRESANDO UN NUEVO PACIENTE:.\n";
			cout << "Ingrese el Id del nuevo paciente: ";
			cin >> Id;
			cin.ignore();

            cout << "Ingrese la edad del nuevo paciente: ";
			cin >> Edad;
			cin.ignore();

			cout << "Ingrese el nombre del nuevo paciente: ";
			getline(cin, Nombre); 
            

			cout << "Ingrese el diagnostico del nuevo paciente: ";
			getline(cin, Diagnostico);

			Paciente nuevoPaciente(Id, Nombre, Edad, Diagnostico);
            
			lista.setAddPaciente(nuevoPaciente);
            
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 2: {
            cout << "Ingrese el id del paciente a editar: ";
			cin >> Id;
            lista.setUpdatePaciente(Id);
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 3: {
            cout << "Ingrese el id del paciente a editar: ";
            cin >> Id;
            lista.getSearchPaciente(Id);
                            // Llamar a la función para buscar un paciente
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 4: {
            lista.getPromedioEdad();
            // Llamar a la función para mostrar el promedio de edad
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 5: {
            lista.getEstadoInternacion();
            // Llamar a la función para mostrar el estado de internación
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 6: {
			lista.mostrarPacientes();
            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 7: {
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
    } while (opcion != 7);
}
