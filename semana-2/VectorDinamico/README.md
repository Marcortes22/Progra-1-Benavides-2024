# Operaciones Básicas con Vectores en C++

## Acceso a Elementos

- `v[i]`: Accede al elemento en la posición `i`.
- `v.at(i)`: Accede al elemento en la posición `i` con verificación de límites.
- `v.front()`: Accede al primer elemento.
- `v.back()`: Accede al último elemento.

## Modificación

- `v.push_back(x)`: Añade el elemento `x` al final del vector.
- `v.pop_back()`: Elimina el último elemento del vector.
- `v.insert(v.begin() + pos, x)`: Inserta el elemento `x` en la posición `pos`.
- `v.erase(v.begin() + pos)`: Elimina el elemento en la posición `pos`.
- `v.clear()`: Elimina todos los elementos del vector.

## Información del Vector

- `v.size()`: Devuelve el número de elementos en el vector.
- `v.empty()`: Verifica si el vector está vacío (devuelve `true` o `false`).
- `v.capacity()`: Devuelve la capacidad actual del vector (cuántos elementos puede contener antes de necesitar realocarse).
- `v.resize(new_size)`: Cambia el tamaño del vector a `new_size`.
- `v.shrink_to_fit()`: Reduce la capacidad del vector para igualar su tamaño actual.

## Iteradores

- `v.begin()`: Devuelve un iterador al primer elemento.
- `v.end()`: Devuelve un iterador al elemento siguiente al último.
- `v.rbegin()`: Devuelve un iterador inverso al último elemento.
- `v.rend()`: Devuelve un iterador inverso al elemento anterior al primero.

## Operaciones Útiles

- `std::sort(v.begin(), v.end())`: Ordena los elementos del vector.
- `std::reverse(v.begin(), v.end())`: Invierte el orden de los elementos.
- `std::find(v.begin(), v.end(), x)`: Busca el valor `x` en el vector y devuelve un iterador a su posición o `v.end()` si no se encuentra.
