

#include <iostream>
using namespace std;

void saludar() {
    cout << "Hola a todos";
}


//funcion que pida 3 numeros enteros y muestre la suma de los primeros 2
//y la resta de el resultado de la suma - el tercer numero
void sumaYresta(int a, int b, int c) {
    int resutladoSuma = a + b;
    int resultadoResta = resutladoSuma - c;
    cout << "La suma de los primeros numeros es: " << resutladoSuma<<endl;
    cout << "La resta de el resultado de la suma - el tercer numero es" << resultadoResta;
}

int suma(int a, int b) {
    return a + b;
}

int main()
{
    cout << suma(5,6);
    //cout << resultado;
}

