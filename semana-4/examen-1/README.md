# Examen 1: Gestión de Pacientes en un Hospital

Has sido contratado por un hospital para desarrollar un programa, cuyo objetivo es gestionar una lista de pacientes.

## Funcionalidades del Programa (Total 30 puntos)

El programa debe permitir a los usuarios gestionar su lista de pacientes con las siguientes funcionalidades:

1. **Agregar un Nuevo Paciente: (Total 6 puntos)**

   - Los usuarios pueden agregar un nuevo paciente proporcionando su ID, nombre, edad, diagnóstico y estado de internación. **(2 ptos)**
   - El atributo "internado" se establece inicialmente en `true`, indicando que el paciente está internado. **(1 pto)**
   - El programa debe verificar si ya existe un paciente con el mismo ID y, en caso afirmativo, mostrar un mensaje de advertencia y no permitir el ingreso de un paciente con un ID ya existente. **(3 ptos)**

2. **Mostrar Todos los Pacientes: (Total 3 puntos)**

   - El usuario puede visualizar la lista completa de pacientes, con toda su información detallada, incluyendo el ID, nombre, edad, diagnóstico y estado de internación (internado o dado de alta). **(3 ptos)**

3. **Actualizar Información del Paciente: (Total 8 puntos)**

   - Los usuarios pueden modificar la información de un paciente existente utilizando su ID como identificador. **(1 pto)**
   - Solo se permite la actualización del nombre, edad y diagnóstico. **(2 ptos)**
   - El programa debe preguntar si se desea dar de alta al paciente. Si se indica que sí, el atributo "internado" se cambiará a `false`. **(3 ptos)**
   - Si el paciente a actualizar no existe, el programa deberá indicarlo. **(2 ptos)**

4. **Buscar un Paciente: (Total 5 puntos)**

   - Los usuarios pueden buscar pacientes en la lista utilizando el ID del paciente. **(3 ptos)**
   - Si el paciente existe, se mostrará su información; de lo contrario, se indicará que el paciente no se encuentra registrado. **(2 ptos)**

5. **Ver Promedio de Edad de los Pacientes: (Total 3 puntos)**

   - Esta funcionalidad calcula el promedio de edad de todos los pacientes registrados. **(3 ptos)**

6. **Estado de Internación de los Pacientes: (Total 5 puntos)**
   - El programa verificará el estado de internación de cada paciente y mostrará:
     - El total de pacientes registrados. **(1 pto)**
     - El total de pacientes que están internados. **(2 ptos)**
     - El total de pacientes que fueron dados de alta. **(2 ptos)**

## Estructura del Programa (Total 22 puntos)

El programa utiliza dos clases principales:

- **Clase Paciente: Representa a un paciente específico. (Total 6 puntos)**

  - Define los atributos mencionados anteriormente, incluyendo "internado" como un booleano. **(2 ptos)**
  - Constructor que recibe por parámetro e inicializa sus atributos. **(1 pto)**
  - Define los métodos `set` y `get` que considere necesarios. **(3 ptos)**

- **Clase ListaPacientes: Gestiona la lista de pacientes. La información de los pacientes se almacena en un vector dinámico dentro de esta clase. (Total 16 puntos)**
  - `setAddPaciente`: Recibe por parámetro un objeto de tipo paciente y lo ingresa a la lista de pacientes (vector). **(2 ptos)**
  - `setUpdatePaciente`: Solicita el ID del paciente a actualizar y, en caso de que exista, solicita y actualiza los datos del paciente seleccionado, incluyendo la posibilidad de darlo de alta. **(3 ptos)**
  - `getListPacientes`: Muestra todos los datos de los pacientes ingresados. **(2 ptos)**
  - `getSearchPaciente`: Busca un paciente en específico y muestra sus datos. **(3 ptos)**
  - `getPromedioEdad`: Calcula el promedio de edad de todos los pacientes. **(3 ptos)**
  - `getEstadoInternacion`: Verifica el estado de cada paciente y muestra el total de pacientes internados y dados de alta. **(3 ptos)**

## Diseño del Método `main()` (Total 5 puntos)

El método `main()` debe diseñarse de la siguiente manera:

- Mostrar un mensaje de bienvenida.
- Presentar un menú repetitivo (utilizando un `switch`) con las siguientes opciones:
  1. Ingresar un nuevo paciente. **(1 pto)**
  2. Modificar la información de un paciente existente. **(1 pto)**
  3. Buscar un paciente. **(1 pto)**
  4. Mostrar el promedio de edad de los pacientes. **(1 pto)**
  5. Ver el estado de internación de los pacientes. **(1 pto)**
  6. Salir del programa.
