#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Clase Producto que representa un producto en el inventario
class Producto {
private:
    int codigo; // C�digo �nico del producto
    string descripcion; // Descripci�n del producto
    int cantidad; // Cantidad disponible del producto
    double precio; // Precio del producto

public:
    // Constructor para inicializar un producto con su c�digo, descripci�n, cantidad y precio
    Producto(int codigo, string descripcion, int cantidad, double precio) {
        this->codigo = codigo;
        this->descripcion = descripcion;
        this->cantidad = cantidad;
        this->precio = precio;
    }

    // M�todos getter para obtener los valores de los atributos privados
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

    // M�todos setter para modificar los valores de los atributos privados
    void setDescripcion(string descripcion) {
        this->descripcion = descripcion;
    }

    void setCantidad(int cantidad) {
        this->cantidad = cantidad;
    }

    void setPrecio(double precio) {
        this->precio = precio;
    }

    // M�todo para mostrar los datos de un producto
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
    // M�todo para agregar un nuevo producto a la lista
    void setAddProducto(Producto producto) {
        // Verificar si el c�digo del producto ya existe en la lista
        if (!verificarCodigoRepetido(producto.getCodigo())) {
            vectorProductos.push_back(producto);
            cout << "Producto agregado con exito!!!" << endl;
        }
        else {
            cout << "El codigo del producto a ingresar ya existe" << endl;
        }
    }

    // M�todo para verificar si un c�digo de producto ya existe en la lista
    bool verificarCodigoRepetido(int codigo) {
        bool esRepetido = false;
        for (int i = 0; i < vectorProductos.size(); i++) {
            if (vectorProductos[i].getCodigo() == codigo) {
                esRepetido = true; // Si el c�digo ya existe, marcar como repetido
                break; // Salir del bucle si se encuentra un c�digo repetido
            }
        }
        return esRepetido;
    }

    // M�todo para actualizar los datos de un producto existente en la lista
    void setUpdateProducto(int codigo) {
        bool Existe = false;

        // Buscar el producto por c�digo en la lista
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
                cin.ignore(); // Ignorar el car�cter de nueva l�nea pendiente
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

    // M�todo para listar todos los productos en la lista
    void getListProductos() {
        for (int i = 0; i < vectorProductos.size(); i++) {
            vectorProductos[i].mostrarDatos();
            cout << "---------------------------------------" << endl;
        }
    }

    // M�todo para buscar un producto por su c�digo
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

    // M�todo para calcular y mostrar el valor total del inventario
    void getPriceInventario() {
        double total = 0;

        for (int i = 0; i < vectorProductos.size(); i++) {
            // Sumar el valor total de cada producto (cantidad * precio)
            total += (vectorProductos[i].getCantidad() * vectorProductos[i].getPrecio());
        }

        cout << "El precio que hay en el inventario es de: " << total << endl;
    }
};

// Funci�n principal
int main() {
    ListaProductos lista; // Crear una instancia de la clase ListaProductos
    int opcion;

    do {
        // Mostrar el men� de opciones
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

        // Ejecutar la acci�n correspondiente seg�n la opci�n seleccionada
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
            cin.ignore(); // Ignorar el car�cter de nueva l�nea pendiente
            getline(cin, descripcion);

            cout << "Ingrese el precio del producto: ";
            cin >> precio;

            // Crear una instancia de Producto con los datos ingresados
            Producto producto(codigo, descripcion, cantidad, precio);

            // Agregar el producto a la lista
            lista.setAddProducto(producto);

            system("pause"); // Pausar la ejecuci�n para que el usuario pueda leer el mensaje
            system("cls"); // Limpiar la pantalla
            break;
        }
        case 2: {
            int codigo;
            // Solicitar el c�digo del producto a editar
            cout << "Ingrese el codigo del producto a editar: ";
            cin >> codigo;
            // Llamar a la funci�n para actualizar el producto
            lista.setUpdateProducto(codigo);
            system("pause");
            system("cls");
            break;
        }
        case 3: {
            int codigo;
            // Solicitar el c�digo del producto a buscar
            cout << "Ingrese el codigo del producto a buscar: ";
            cin >> codigo;
            // Llamar a la funci�n para buscar el producto
            lista.getSearchProducto(codigo);
            system("pause");
            system("cls");
            break;
        }
        case 4: {
            // Llamar a la funci�n para mostrar el valor total del inventario
            lista.getPriceInventario();
            system("pause");
            system("cls");
            break;
        }
        case 5: {
            // Llamar a la funci�n para listar todos los productos
            lista.getListProductos();
            system("pause");
            system("cls");
            break;
        }
        case 6: {
            // Opci�n para salir del programa
            cout << "Saliendo del programa..." << endl;
            system("pause");
            system("cls");
            break;
        }
        default: {
            // Opci�n inv�lida, se muestra un mensaje de error
            cout << "Opcion invalida. Por favor, intente de nuevo." << endl;
            system("pause");
            system("cls");
        }
        }

    } while (opcion != 6); // El bucle contin�a hasta que el usuario selecciona salir del programa

    return 0; // Indicar que el programa finaliz� correctamente
}
