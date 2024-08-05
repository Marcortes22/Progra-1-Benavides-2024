#include <iostream>
using namespace std;

//1 funcion sin parametros ni valor de retorno
void decirHola()
{
    cout << "Hola a tod@s!!!!!" << endl;
}

//2. funcion con parametros y sin valor de retorno
void MostrarSuma(int a, int b)
{
    cout << "La suma de " << a << " + " << b << " es: " << a + b << endl;
}

//3. funcion sin parametros con valor de retorno
int obtenerNumero()
{
    int num;
    cout << "Ingrese un numero" << endl;
    cin >> num;
    return num;
}

//4 funcion con parametros y valor de retorno
int multiplicar(int a, int b)
{
    return a * b;
}


int main()
{

    //

    // inicio del menu.....

    int opcion;

    do
    {
        system("cls");
        cout << "******** Menu principal ***********" << endl;
        cout << "1- para funcion sin parametros sin valor de retorno" << endl;
        cout << "2- para funcion con parametros sin valor de retorno" << endl;
        cout << "3- para funcion sin parametros con valor de retorno" << endl;
        cout << "4- para funcion con parametros con valor de retorno" << endl;
        cout << "5- para salir del programa" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            decirHola();
            system("pause");
            break;
        }
        case 2:
        {
            MostrarSuma(8, 5);
            system("pause");
            break;
        }
        case 3:
        {
            int valorObtenido = obtenerNumero();
            cout << "El valor obtenido de la funcion es: " << valorObtenido << endl;
            system("pause");
            break;
        }
        case 4:
        {
            int multiplicacionObtenida = multiplicar(9, 5);
            cout << "El valor obtenido es: " << multiplicacionObtenida << endl;
            system("pause");
            break;
        }
        case 5:
        {
            cout << "Saliendo del programa.......";
            break;
        }
        default:
        {
            cout << "Ïngrese un valor valido !!" << endl;
            system("pause");
            break;
        }

        }
    } while (opcion != 5);













}