#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Clase Producto que representa un producto en el inventario
class Producto {
private:
    int codigo; // Código único del producto
    string descripcion; // Descripción del producto
    int cantidad; // Cantidad disponible del producto
    double precio; // Precio del producto

public:
    // Constructor para inicializar un producto con su código, descripción, cantidad y precio
    Producto(int codigo, string descripcion, int cantidad, double precio) {
        this->codigo = codigo;
        this->descripcion = descripcion;
        this->cantidad = cantidad;
        this->precio = precio;
    }

    // Métodos getter para obtener los valores de los atributos privados
    int getCodigo() {
        return codigo;
    }

    string getDescripcion() {
        return descripcion;
    }

    int getCantidad() {
        return cantidad;
    }

    double getPrecio() {
        return precio;
    }

    // Métodos setter para modificar los valores de los atributos privados
    void setDescripcion(string descripcion) {
        this->descripcion = descripcion;
    }

    void setCantidad(int cantidad) {
        this->cantidad = cantidad;
    }

    void setPrecio(double precio) {
        this->precio = precio;
    }

    // Método para mostrar los datos de un producto
    void mostrarDatos() {
        cout << "Codigo: " << codigo << "\nDescripcion: " << descripcion
            << "\nCantidad: " << cantidad << "\nPrecio: " << precio << endl;
    }
};

// Clase ListaProductos que gestiona una lista de productos
class ListaProductos {
private:
    vector<Producto> vectorProductos; // Vector que almacena los productos

public:
    // Método para agregar un nuevo producto a la lista
    void setAddProducto(Producto producto) {
        // Verificar si el código del producto ya existe en la lista
        if (!verificarCodigoRepetido(producto.getCodigo())) {
            vectorProductos.push_back(producto);
            cout << "Producto agregado con exito!!!" << endl;
        }
        else {
            cout << "El codigo del producto a ingresar ya existe" << endl;
        }
    }

    // Método para verificar si un código de producto ya existe en la lista
    bool verificarCodigoRepetido(int codigo) {
        bool esRepetido = false;
        for (int i = 0; i < vectorProductos.size(); i++) {
            if (vectorProductos[i].getCodigo() == codigo) {
                esRepetido = true; // Si el código ya existe, marcar como repetido
                break; // Salir del bucle si se encuentra un código repetido
            }
        }
        return esRepetido;
    }

    // Método para actualizar los datos de un producto existente en la lista
    void setUpdateProducto(int codigo) {
        bool Existe = false;

        // Buscar el producto por código en la lista
        for (int i = 0; i < vectorProductos.size(); i++) {
            if (vectorProductos[i].getCodigo() == codigo) {
                Existe = true;
                int cantidad;
                string descripcion;
                double precio;

                // Solicitar nuevos datos para el producto
                cout << "Ingrese la nueva cantidad del producto: ";
                cin >> cantidad;

                cout << "Ingrese la nueva descripcion del producto: ";
                cin.ignore(); // Ignorar el carácter de nueva línea pendiente
                getline(cin, descripcion);

                cout << "Ingrese el nuevo precio del producto: ";
                cin >> precio;

                // Actualizar los datos del producto
                vectorProductos[i].setCantidad(cantidad);
                vectorProductos[i].setDescripcion(descripcion);
                vectorProductos[i].setPrecio(precio);

                cout << "Producto actualizado exitosamente!!!" << endl;
                break;
            }
        }
        // Si el producto no existe, mostrar un mensaje
        if (!Existe) {
            cout << "El producto a editar no existe!!!" << endl;
        }
    }

    // Método para listar todos los productos en la lista
    void getListProductos() {
        for (int i = 0; i < vectorProductos.size(); i++) {
            vectorProductos[i].mostrarDatos();
            cout << "---------------------------------------" << endl;
        }
    }

    // Método para buscar un producto por su código
    void getSearchProducto(int codigo) {
        bool existe = false;

        for (int i = 0; i < vectorProductos.size(); i++) {
            if (vectorProductos[i].getCodigo() == codigo) {
                existe = true;
                vectorProductos[i].mostrarDatos();
                break;
            }
        }

        // Si el producto no existe, mostrar un mensaje
        if (!existe) {
            cout << "El producto con el codigo: " << codigo << " no existe!!!" << endl;
        }
    }

    // Método para calcular y mostrar el valor total del inventario
    void getPriceInventario() {
        double total = 0;

        for (int i = 0; i < vectorProductos.size(); i++) {
            // Sumar el valor total de cada producto (cantidad * precio)
            total += (vectorProductos[i].getCantidad() * vectorProductos[i].getPrecio());
        }

        cout << "El precio que hay en el inventario es de: " << total << endl;
    }
};

// Función principal
int main() {
    ListaProductos lista; // Crear una instancia de la clase ListaProductos
    int opcion;

    do {
        // Mostrar el menú de opciones
        cout << "========================================" << endl;
        cout << "   Gestion de Inventario - Menu Principal" << endl;
        cout << "========================================" << endl;
        cout << "1. Ingresar un nuevo producto" << endl;
        cout << "2. Modificar un producto existente" << endl;
        cout << "3. Buscar un producto" << endl;
        cout << "4. Mostrar el total del valor del inventario" << endl;
        cout << "5. Mostrar lista de productos" << endl;
        cout << "6. Salir del programa" << endl;
        cout << "========================================" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        // Limpiar la pantalla
        system("cls");

        // Ejecutar la acción correspondiente según la opción seleccionada
        switch (opcion) {
        case 1: {
            int codigo, cantidad;
            string descripcion;
            double precio;

            // Solicitar los datos del nuevo producto
            cout << "Ingrese el codigo del producto: ";
            cin >> codigo;

            cout << "Ingrese la cantidad del producto: ";
            cin >> cantidad;

            cout << "Ingrese la descripcion del producto: ";
            cin.ignore(); // Ignorar el carácter de nueva línea pendiente
            getline(cin, descripcion);

            cout << "Ingrese el precio del producto: ";
            cin >> precio;

            // Crear una instancia de Producto con los datos ingresados
            Producto producto(codigo, descripcion, cantidad, precio);

            // Agregar el producto a la lista
            lista.setAddProducto(producto);

            system("pause"); // Pausar la ejecución para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 2: {
            int codigo;
            // Solicitar el código del producto a editar
            cout << "Ingrese el codigo del producto a editar: ";
            cin >> codigo;
            // Llamar a la función para actualizar el producto
            lista.setUpdateProducto(codigo);
            system("pause");
            system("cls");
            break;
        }
        case 3: {
            int codigo;
            // Solicitar el código del producto a buscar
            cout << "Ingrese el codigo del producto a buscar: ";
            cin >> codigo;
            // Llamar a la función para buscar el producto
            lista.getSearchProducto(codigo);
            system("pause");
            system("cls");
            break;
        }
        case 4: {
            // Llamar a la función para mostrar el valor total del inventario
            lista.getPriceInventario();
            system("pause");
            system("cls");
            break;
        }
        case 5: {
            // Llamar a la función para listar todos los productos
            lista.getListProductos();
            system("pause");
            system("cls");
            break;
        }
        case 6: {
            // Opción para salir del programa
            cout << "Saliendo del programa..." << endl;
            system("pause");
            system("cls");
            break;
        }
        default: {
            // Opción inválida, se muestra un mensaje de error
            cout << "Opcion invalida. Por favor, intente de nuevo." << endl;
            system("pause");
            system("cls");
        }
        }

    } while (opcion != 6); // El bucle continúa hasta que el usuario selecciona salir del programa

    return 0; // Indicar que el programa finalizó correctamente
}
