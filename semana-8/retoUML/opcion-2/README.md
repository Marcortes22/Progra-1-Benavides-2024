# Examen corto #1:

Has sido contratado por una empresa para un proyecto llamado **"Mi Inventario"**, cuyo objetivo es desarrollar un programa que gestione una lista de productos utilizando un vector polimórfico.

## Funcionalidades del Programa

El programa debe permitir a los usuarios gestionar su lista de productos con las siguientes funcionalidades:

1. **Agregar un Nuevo Producto**:

   - Los usuarios pueden agregar diferentes tipos de productos proporcionando su código, descripción, cantidad y precio.
   - El programa debe verificar si ya existe un producto con el mismo código y, en caso afirmativo, mostrar un mensaje de advertencia y no permitir el ingreso de un producto con un código ya existente.

2. **Mostrar Todos los Productos**:

   - El usuario puede visualizar la lista completa de productos, con toda su información detallada, incluyendo el código, descripción, cantidad y precio.

3. **Actualizar un Producto**:

   - Los usuarios pueden modificar la información de un producto existente utilizando su código como identificador.
   - Solo se permite la actualización de la descripción, cantidad y precio.
   - Si el producto a actualizar no existe, el programa deberá indicarlo.

4. **Buscar un Producto**:

   - Los usuarios pueden buscar productos en la lista utilizando el código del producto.
   - Si el producto existe, se mostrará su información; de lo contrario, se indicará que el producto no se encuentra en el inventario.

5. **Ver Total de Inventario**:

   - Esta funcionalidad calcula el valor total del inventario multiplicando la cantidad por el precio de cada producto y sumando los resultados para obtener el valor total.

6. **Mostrar Cantidad de Productos por Tipo**:
   - El programa deberá mostrar cuántos productos de cada tipo (por ejemplo: electrónicos, alimentos, ropa, etc.) existen en el inventario.

## Estructura del Programa

El programa utiliza herencia y sobreescritura con las siguientes clases:

### Clase Base `Producto`:

Representa un producto genérico en el inventario, con atributos como código, descripción, cantidad y precio.

- **Atributos protegidos**: código, descripción, cantidad, precio.
- **Constructor** que inicializa estos atributos.
- **Métodos** getters y setters que se consideren necesarios.
- **Método Virtual `mostrarInformacion`**: Un método que mostrará la información del producto. Este método será sobrescrito en las clases derivadas para mostrar información específica de cada tipo de producto.
- **Método Virtual `getTipoProducto`**: Este método devuelve una cadena de texto que indica el tipo de producto (como "Electrónico", "Alimento", etc.). Será sobrescrito en las clases derivadas.

### Clases Derivadas (`Electrónico`, `Alimento`, `Ropa`, etc.):

Extienden la clase base `Producto` y pueden incluir atributos adicionales específicos de cada tipo de producto.

- **Sobrescritura del método `mostrarInformacion`**: En cada clase derivada, el método `mostrarInformacion` se sobrescribirá para agregar detalles específicos de ese tipo de producto.
- **Sobrescritura del método `getTipoProducto`**: Cada clase derivada devolverá su tipo correspondiente ("Electrónico", "Alimento", "Ropa", etc.).

### Clase `ContenedorProductos`:

Gestiona una lista polimórfica de productos utilizando un vector dinámico. La lista puede almacenar productos de diferentes tipos derivados de la clase base `Producto`.

#### Métodos de la clase:

- `setAddProducto`: Recibe un objeto de tipo Producto (o derivado) y lo ingresa a la lista de productos (vector polimórfico).
- `setUpdateProducto`: Solicita el código del producto a actualizar y, en caso de que exista, solicita y actualiza los datos del producto seleccionado.
- `getListProductos`: Llama al método `mostrarInformacion` para cada producto en el vector polimórfico, mostrando su información específica.
- `getSearchProducto`: Busca un producto en específico y muestra sus datos utilizando `mostrarInformacion`.
- `getCountProductosPorTipo`: Recorre el vector de productos, cuenta cuántos productos hay de cada tipo (utilizando el método `getTipoProducto`), y muestra la cantidad de productos de cada tipo.
- `getPriceInventario`: Calcula el valor total del inventario multiplicando la cantidad por el precio de cada producto y sumando los resultados para obtener el valor total.

## Diseño del Método `main()`

El método `main()` debe diseñarse de la siguiente manera:

1. Mostrar un mensaje de bienvenida.
2. Presentar un menú repetitivo (utilizando un `switch`) con las siguientes opciones:
   - Ingresar un nuevo producto (de diferentes tipos: electrónicos, alimentos, ropa, etc.).
   - Modificar un producto existente.
   - Buscar un producto.
   - Mostrar el total del valor del inventario.
   - Mostrar la cantidad de productos por tipo.
   - Salir del programa.
