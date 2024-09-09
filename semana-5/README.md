## Ejercicio: Gestión de Contactos

### Descripción

Crea un sistema básico de gestión de contactos utilizando clases en C++. El sistema debe permitir agregar nuevos contactos, buscar contactos por nombre y mostrar la lista completa de contactos.

### Instrucciones

1. **Define la clase base `Contacto`**

   - **Atributos**:
     - `Nombre` (cadena de texto): El nombre del contacto.
     - `Telefono` (cadena de texto): El número de teléfono del contacto.
   - **Métodos**:
     - **Constructor**: Inicializa `Nombre` y `Telefono`.
     - **Métodos getter**:
       - `getNombre()`: Devuelve el nombre del contacto.
       - `getTelefono()`: Devuelve el teléfono del contacto.
     - **Método `mostrarDatos()`**: Imprime el nombre y el teléfono del contacto.

2. **Define la clase `Agenda`**

   - **Atributos**:
     - `vector<Contacto> contactos`: Un vector para almacenar los contactos.
   - **Métodos**:
     - **Método `agregarContacto(Contacto nuevoContacto)`**: Añade un nuevo contacto al vector si no existe un contacto con el mismo nombre. Imprime un mensaje si el contacto ya existe.
     - **Método `buscarContacto(string nombre)`**: Busca y muestra los datos del contacto con el nombre dado. Imprime un mensaje si el contacto no se encuentra.
     - **Método `mostrarTodosContactos()`**: Muestra los datos de todos los contactos en la agenda. Imprime un mensaje si la agenda está vacía.

3. **En el `main()`**
   - Implementa un menú para permitir al usuario seleccionar una de las siguientes opciones:
     - **Agregar un nuevo contacto**:
       - Solicita al usuario el nombre y el teléfono del nuevo contacto.
       - Crea un objeto `Contacto` con los datos proporcionados y agrégalo a la agenda.
     - **Buscar un contacto por nombre**:
       - Solicita al usuario el nombre del contacto a buscar.
       - Llama al método `buscarContacto` para encontrar y mostrar los datos del contacto.
     - **Mostrar la lista completa de contactos**:
       - Llama al método `mostrarTodosContactos` para imprimir la información de todos los contactos.
     - **Salir del programa**:
       - Termina la ejecución del programa.
