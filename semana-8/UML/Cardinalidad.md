## Cardinalidad en UML

La **cardinalidad** especifica el número de instancias de una clase que pueden estar asociadas con instancias de otra clase. Ayuda a definir las reglas de negocio y las restricciones en las relaciones entre entidades o clases.

### Sintaxis de Cardinalidad

La cardinalidad se representa con rangos de valores cerca de los extremos de las líneas que conectan dos clases.

- **1..1**: Exactamente una instancia. (relación "uno a uno").
- **0..1**: Opcional, una instancia o ninguna.
- **1..\***: Una o más instancias.
- **0..\***: Ninguna o muchas instancias (relación "muchos a muchos").
- **n..m**: Un rango de n a m instancias.

### Ejemplos de Cardinalidad

#### 1. Uno a Uno (1..1)

Cada instancia de la clase A está asociada con exactamente una instancia de la clase B, y viceversa.

```uml
ClaseA "1" ---- "1" ClaseB
```

#### 2. Uno a Muchos (1..\*)

Una instancia de la clase A está asociada con muchas instancias de la clase B.

```uml
ClaseA "1" ---- "1..*" ClaseB
```

#### 3. Muchos a Muchos (0.._ a 0.._)

Una instancia de la clase A puede estar asociada con muchas instancias de la clase B, y una instancia de la clase B puede estar asociada con muchas instancias de la clase A.

```uml
ClaseA "0..*" ---- "0..*" ClaseB
```

#### 4. Opcional (0..1)

Una instancia de la clase A puede estar asociada con cero o una instancia de la clase B.

```uml
ClaseA "0..1" ---- "1" ClaseB
```

### Descripción de Cardinalidad

- **1..1**: Relación obligatoria en ambas direcciones. Ejemplo: Un pasaporte está asociado a exactamente una persona.
- **0..1**: Una instancia puede no estar asociada. Ejemplo: Un empleado puede tener o no un automóvil de la empresa.
- **1..\***: Una instancia de la clase "A" debe estar asociada con al menos una instancia de la clase "B". Ejemplo: Un profesor debe tener al menos un estudiante.
- **0..\***: No hay restricciones. Ejemplo: Un libro puede no tener reseñas o puede tener muchas.
