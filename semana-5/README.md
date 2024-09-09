## Ejercicio: Gestión de Tareas Avanzada

### Descripción

Crea un sistema avanzado para la gestión de tareas utilizando clases en C++. El sistema debe permitir agregar nuevas tareas, marcar tareas como completadas, editar tareas, eliminar tareas y mostrar la lista completa de tareas, con validaciones adecuadas en cada operación.

### Instrucciones

1. **Define la clase base `Tarea`**

   - **Atributos**:
     - `Descripcion` (cadena de texto): La descripción de la tarea.
     - `Completada` (booleano): Indica si la tarea está completada o no.
   - **Métodos**:
     - **Constructor**: Inicializa `Descripcion` y `Completada` (por defecto, `Completada` debe ser `false`).
     - **Métodos getter**:
       - `getDescripcion()`: Devuelve la descripción de la tarea.
       - `isCompletada()`: Devuelve el estado de la tarea (completada o no).
     - **Método `marcarComoCompletada()`**: Marca la tarea como completada.
     - **Método `mostrarDatos()`**: Imprime la descripción y el estado de la tarea (completada o no).
     - **Método `setDescripcion(string nuevaDescripcion)`**: Permite cambiar la descripción de la tarea.

2. **Define la clase `ListaTareas`**

   - **Atributos**:
     - `vector<Tarea> tareas`: Un vector para almacenar las tareas.
   - **Métodos**:
     - **Método `agregarTarea(Tarea nuevaTarea)`**: Añade una nueva tarea al vector si no existe una tarea con la misma descripción. Imprime un mensaje si la tarea ya existe.
     - **Método `marcarTareaComoCompletada(string descripcion)`**: Busca la tarea con la descripción dada y la marca como completada. Imprime un mensaje si la tarea no se encuentra.
     - **Método `editarTarea(string descripcionActual, string nuevaDescripcion)`**: Busca la tarea con la descripción actual, cambia su descripción a la nueva, y valida que la nueva descripción no esté ya en uso. Imprime un mensaje si la tarea no se encuentra o la nueva descripción ya existe.
     - **Método `eliminarTarea(string descripcion)`**: Busca y elimina la tarea con la descripción dada. Imprime un mensaje si la tarea no se encuentra.
     - **Método `mostrarTodasTareas()`**: Muestra los datos de todas las tareas en la lista. Imprime un mensaje si la lista está vacía.

3. **En el `main()`**
   - Implementa un menú para permitir al usuario seleccionar una de las siguientes opciones:
     - **Agregar una nueva tarea**:
       - Solicita al usuario la descripción de la nueva tarea.
       - Crea un objeto `Tarea` con la descripción proporcionada y agrégalo a la lista de tareas.
     - **Marcar una tarea como completada**:
       - Solicita al usuario la descripción de la tarea a marcar como completada.
       - Llama al método `marcarTareaComoCompletada` para actualizar el estado de la tarea.
     - **Editar una tarea**:
       - Solicita al usuario la descripción actual y la nueva descripción de la tarea.
       - Llama al método `editarTarea` para cambiar la descripción de la tarea.
     - **Eliminar una tarea**:
       - Solicita al usuario la descripción de la tarea a eliminar.
       - Llama al método `eliminarTarea` para eliminar la tarea de la lista.
     - **Mostrar la lista completa de tareas**:
       - Llama al método `mostrarTodasTareas` para imprimir la información de todas las tareas.
     - **Salir del programa**:
       - Termina la ejecución del programa.
