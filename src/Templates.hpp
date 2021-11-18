
template <class T>

// Ejercicio 1: Pasar a templates
T cuadrado(T x) {
    return x * x;
}

template<class Contenedor, class Elem>

// Ejercicio 2: Pasar a templates
bool contiene(Contenedor s, Elem c) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            return true;
        }
    }
    return false;
}

// Ejercicio 3: Funcion es prefijo con un template contenedor
