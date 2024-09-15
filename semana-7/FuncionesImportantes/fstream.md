# Gestión de Archivos en C++

Este documento proporciona información sobre las clases `std::fstream`, `std::ofstream` y `std::ifstream` en C++, utilizadas para la manipulación de archivos.

## Clases Principales

### `fstream`

- **Descripción:** Clase que permite realizar operaciones tanto de entrada como de salida en archivos. Es una combinación de `ifstream` y `ofstream`.
- **Modos Comunes:**
  - `ios::in` - Abrir archivo para lectura.
  - `ios::out` - Abrir archivo para escritura.
  - `ios::app` - Añadir datos al final del archivo.
  - `ios::trunc` - Truncar el archivo a cero longitud.
  - `ios::binary` - Abrir el archivo en modo binario.

### `ofstream`

- **Descripción:** Clase para realizar operaciones de salida (escritura) en archivos.
- **Modos Comunes:**
  - `ios::out` - Abrir archivo para escritura.
  - `ios::app` - Añadir datos al final del archivo.
  - `ios::trunc` - Truncar el archivo a cero longitud.
  - `ios::binary` - Abrir el archivo en modo binario.

### `ifstream`

- **Descripción:** Clase para realizar operaciones de entrada (lectura) desde archivos.
- **Modos Comunes:**

  - `ios::in` - Abrir archivo para lectura.
  - `ios::binary` - Abrir el archivo en modo binario.

    ```

    ```

## Flags Comunes

- **`ios::out`**: Abre el archivo para escritura.
- **`ios::app`**: Añade datos al final del archivo.
- **`ios::trunc`**: Trunca el archivo a cero longitud.
- **`ios::binary`**: Abre el archivo en modo binario.

## Notas Adicionales

- **Manejo de Errores:** Siempre verifica si el archivo se abrió correctamente usando `is_open()`.
- **Posicionamiento del Cursor:** Usa `seekg()` y `seekp()` para mover el cursor de lectura y escritura, respectivamente.
- **Modo Binario:** El modo binario es útil para leer y escribir datos binarios y evita las conversiones automáticas que se realizan en modo texto.
