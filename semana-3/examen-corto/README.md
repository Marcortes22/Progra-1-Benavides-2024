# Examen corto #1

## Gestión de Inventario

Has sido contratado por una empresa para un proyecto llamado "Mi Inventario", cuyo objetivo es desarrollar un programa que gestione una lista de productos utilizando un vector.

## Funcionalidades del Programa

El programa debe permitir a los usuarios gestionar su lista de productos con las siguientes funcionalidades:

1. **Agregar un Nuevo Producto:** Los usuarios pueden agregar un nuevo producto proporcionando su código, descripción, cantidad y precio.  
   El programa debe verificar si ya existe un producto con el mismo código y, en caso afirmativo, mostrar un mensaje de advertencia y no permitir el ingreso de un producto con un código ya existente.

2. **Mostrar Todos los Productos:** El usuario puede visualizar la lista completa de productos, con toda su información detallada, incluyendo el código, descripción, cantidad y precio.

3. **Actualizar un Producto:** Los usuarios pueden modificar la información de un producto existente utilizando su código como identificador.

   - Solo se permite la actualización de la descripción, cantidad y precio.
   - Si el producto a actualizar no existe, el programa deberá indicarlo.

4. **Buscar un Producto:**

   - Los usuarios pueden buscar productos en la lista utilizando el código del producto.
   - Si el producto existe, se mostrará su información; de lo contrario, se indicará que el producto no se encuentra en el inventario.

5. **Ver Total de Inventario:** Esta funcionalidad calcula el valor total del inventario multiplicando la cantidad por el precio de cada producto y sumando los resultados para obtener el valor total.

## Estructura del Programa

El programa utiliza dos clases principales:

- **Clase Producto:** Representa un producto específico.

  - Define los atributos mencionados anteriormente. **3 puntos.**
  - Constructor que recibe por parámetro e inicializa sus atributos. **4 puntos.**
  - Defina los métodos `set` y `get` que considere necesarios. **10 puntos.**

- **Clase ListaProductos:** Gestiona la lista de productos. La información de los productos se almacena en un vector dinámico dentro de esta clase.
  - `setAddProducto`: Recibe por parámetro un objeto de tipo producto y lo ingresa a la lista de productos (vector). **3 puntos.**
  - `setUpdateProducto`: Solicita el código del producto a actualizar y, en caso de que exista, solicita y actualiza los datos del producto seleccionado. **6 puntos.**
  - `getListProductos`: Muestra todos los datos de los productos ingresados. **3 puntos.**
  - `getSearchProducto`: Busca un producto en específico y muestra sus datos. **6 puntos.**
  - `getPriceInventario`: Calcula el valor total del inventario multiplicando la cantidad por el precio de cada producto y sumando los resultados para obtener el valor total. **10 puntos.**

## Diseño del Método `main()` **3 puntos.**

El método `main()` debe diseñarse de la siguiente manera:

- Mostrar un mensaje de bienvenida.
- Presentar un menú repetitivo (utilizando un `switch`) con las siguientes opciones:
  1. Ingresar un nuevo producto.
  2. Modificar un producto existente.
  3. Buscar un producto.
  4. Mostrar el total del valor del inventario.
  5. Salir del programa.

## Comentarios en el código **2 puntos.**
