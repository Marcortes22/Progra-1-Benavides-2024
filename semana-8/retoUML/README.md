### Enunciado para diagrama UML con sobreescritura

Una empresa de alquiler de vehículos necesita un sistema para gestionar su flota de automóviles, motocicletas y camiones. Los estudiantes deberán diseñar un diagrama UML que modele las siguientes entidades y relaciones, aplicando herencia, polimorfismo, agregación, composición, sobreescritura de métodos y relaciones simples.

#### Requisitos:

- **Vehículo**: Clase base (abstracta) que representa un vehículo genérico. Cada vehículo tiene una matrícula, un modelo, un año de fabricación y una tarifa diaria de alquiler. Además, tiene un método `calcularMontoAlquiler(días)` que calcula el costo del alquiler en función de los días que se alquila. Este método debe ser sobrescrito por las subclases.

- **Automóvil**, **Motocicleta** y **Camión**: Son subclases de Vehículo. Cada una sobrescribe el método `calcularMontoAlquiler(días)` para aplicar reglas específicas:

  - **Automóvil**: Si se alquila por más de 7 días, se aplica un 10% de descuento sobre el costo total.
  - **Motocicleta**: No tiene reglas adicionales, usa la tarifa diaria base multiplicada por los días de alquiler.
  - **Camión**: Si se alquila por más de 5 días, se aplica un cargo extra del 15% sobre el costo total.

- **Cliente**: Representa a una persona que alquila vehículos. Cada cliente tiene un nombre, un número de licencia de conducir y un historial de alquileres. Un cliente puede alquilar múltiples vehículos, pero no más de uno a la vez.

- **Empleado**: Representa al personal de la empresa que gestiona el proceso de alquiler. Hay dos tipos de empleados: **Agente de Alquiler** y **Gerente**. Los agentes gestionan los contratos de alquiler, mientras que los gerentes supervisan a los agentes y gestionan los vehículos.

- **Contrato de Alquiler**: Cuando un cliente alquila un vehículo, se crea un contrato que incluye la fecha de inicio, la fecha de finalización, el costo total calculado por el método `calcularMontoAlquiler(días)` y la relación con un vehículo específico. El contrato es gestionado por un Agente de Alquiler.

- **Flota**: La empresa tiene una flota de vehículos. Esta flota está compuesta por diferentes tipos de vehículos..

- **Empresa**: Representa a la empresa de alquiler en sí misma. La empresa tiene una flota de vehículos y empleados..
