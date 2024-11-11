# Práctica de Examen: Inventario de Tienda de Videojuegos con Consolas Disponibles

Estás desarrollando un sistema para gestionar el inventario de una tienda de videojuegos. El sistema permitirá agregar videojuegos, buscar y mostrar la información, y guardar o cargar la lista en un archivo de texto. Además, la tienda ya cuenta con un archivo de texto que contiene la información de las consolas disponibles, el cual debe ser cargado al inicio del programa.

## Archivo Inicial (`consolas.txt`)

Se proporcionará un archivo llamado `consolas.txt` que contiene la lista de consolas disponibles en la tienda. Cada consola tiene un ID y un nombre, separados por una coma en cada línea. Por ejemplo:

```plaintext
1,PS5
2,Xbox
3,Switch
4,PC
```

[consolas.txt](./consolas.txt)

El programa debe cargar el archivo `consolas.txt` al inicio para mostrar la lista de consolas disponibles y permitir que el usuario seleccione una consola utilizando el ID correspondiente.

## Requerimientos del Programa (Total: 29 puntos)

El programa debe cumplir con las siguientes funcionalidades:

### 1. Cargar Consolas Disponibles (5 puntos)

- Al iniciar el programa, debe leer las consolas desde `consolas.txt` y almacenar cada consola en un vector de objetos de la clase `Consola` en la clase `Inventario`. (5 puntos)
- Si el archivo no se encuentra, debe mostrar un mensaje de error y finalizar el programa.

### 2. Agregar un Nuevo Videojuego (6 puntos)

- Permitir agregar un videojuego proporcionando su ID, título, género, consola (seleccionada de la lista de consolas disponibles mediante su ID) y precio. (2 puntos)
- Antes de seleccionar la consola, mostrar la lista de consolas cargada desde el archivo para que el usuario elija el ID de una consola válida. (2 puntos)
- Verificar si ya existe un videojuego con el mismo ID; si es así, mostrar un mensaje de advertencia y no permitir duplicados. (2 puntos)

### 3. Mostrar Todos los Videojuegos (3 puntos)

- Permitir ver la lista completa de videojuegos, mostrando ID, título, género, consola y precio. (3 puntos)

### 4. Buscar un Videojuego (5 puntos)

- Permitir buscar un videojuego por ID y mostrar su información si existe; si no, indicar que no está registrado. (5 puntos)

### 5. Guardar y Cargar Inventario (10 puntos)

- **Guardar en Archivo:** Guardar el inventario de videojuegos en un archivo de texto, donde cada videojuego esté en una línea con los datos separados por comas. (5 puntos)
- **Cargar desde Archivo:** Leer los videojuegos desde un archivo y agregarlos al inventario (5 puntos)

## Estructura del Programa (Total: 20 puntos)

### Clase Consola (5 puntos)

- **Atributos:** `id` (entero) y `nombre` (cadena de texto).
- Constructor que inicialice los atributos `id` y `nombre` de la consola. (2 puntos)
- Métodos de acceso `getId`, `getNombre`, `setId`, y `setNombre` para gestionar los atributos. (2 puntos)
- Método `mostrarInformacion()` que imprime el ID y nombre de la consola. (1 punto)

### Clase Videojuego (8 puntos)

- **Atributos:** `ID`, `título`, `género`, `consola` (almacenada como el ID de la consola) y `precio`. (3 puntos)
- Constructor que inicialice todos los atributos. (2 puntos)
- Métodos `set` y `get` para cada atributo. (3 puntos)

### Clase Inventario (7 puntos)

- **Atributos:**
  - Un vector dinámico de objetos `Videojuego` que almacena el inventario de la tienda. (3 puntos)
  - Un vector dinámico de objetos `Consola` que almacena las consolas cargadas desde `consolas.txt`. (2 puntos)
- **Método `cargarConsolas`:** Carga la lista de consolas desde el archivo `consolas.txt` y las almacena en el vector de consolas. (1 punto)
- **Método `agregarVideojuego`:** Agrega un nuevo videojuego al inventario si el ID es único, mostrando la lista de consolas disponibles con sus IDs para seleccionar. (1 punto)

### Diseño del Método `main()` (5 puntos)

El método `main()` debe presentar un menú interactivo con opciones para:

- Agregar un nuevo videojuego (mostrando primero la lista de consolas disponibles y solicitando el ID de la consola)
- Mostrar todos los videojuegos
- Buscar un videojuego por ID
- Guardar y cargar el inventario
- Salir del programa
