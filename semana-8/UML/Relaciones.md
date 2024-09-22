# Tipos de Relaciones en UML

## 1. Asociación (Association)

La **asociación** es una relación estructural que define un enlace entre dos clases. Representa cómo una clase se comunica o se relaciona con otra.

### Detalles:

- **Descripción**: Una clase "A" está asociada a una clase "B", lo que significa que una instancia de "A" puede interactuar con una instancia de "B". Las asociaciones son la base de muchas relaciones en UML.

```uml
ClaseA --- ClaseB
```

## 2. Agregación (Aggregation)

La agregación es una forma especial de asociación que indica una relación "todo/parte", donde la clase "todo" está formada por varias "partes".

### Detalles:

- **Descripción**: Una clase "A" (el todo) contiene una clase "B" (la parte), pero "B" puede existir de manera independiente de "A".
- **Relación débil**: Las partes (clase "B") pueden existir por sí solas incluso si el todo (clase "A") se destruye.
- **Símbolo**: Un rombo vacío en el extremo de la clase "todo".

```uml
ClaseA o---- ClaseB
```

## 3. Composición (Composition)

La composición es una forma más fuerte de agregación, donde la relación entre las partes y el todo es mucho más rígida.

### Detalles:

- **Descripción**: Si la clase "A" (el todo) se destruye, entonces todas las instancias de la clase "B" (las partes) también se destruyen.
- **Relación fuerte**: Las partes (clase "B") no pueden existir independientemente del todo (clase "A").
- **Símbolo**: Un rombo relleno en el extremo de la clase "todo".

```uml
ClaseA ●---- ClaseB
```

## 4. Herencia o Generalización (Inheritance / Generalization)

La **herencia** o **generalización** representa una relación jerárquica entre una clase base (padre) y una o más clases derivadas (hijas). Las clases hijas heredan los atributos y métodos de la clase padre.

### Detalles:

- **Descripción**: La clase "hija" hereda el comportamiento y los atributos de la clase "padre". Esto permite la reutilización de código.
- **Polimorfismo**: Las clases hijas pueden modificar o ampliar el comportamiento de la clase padre.

```uml
ClaseHija --|> ClasePadre
```
