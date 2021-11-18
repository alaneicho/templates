
template<class T>
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

template<class Contenedor>
// Ejercicio 3: Funcion es prefijo con un template contenedor
bool esPrefijo(Contenedor a, Contenedor b) {
    if (a.size() >= b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}


template<class Contenedor, class Elem>
// Ejercicio 4: Función maximo con un template contenedor y uno elemento
Elem maximo(Contenedor c) {
    Elem maximo = c[0];
    for (int i = 0; i < c.size(); i++){
        if (c[i] > maximo){
            maximo = c[i];
        }
    }
    return maximo;
}