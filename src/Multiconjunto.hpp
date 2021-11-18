#include "Diccionario.hpp"

template <class T>

        class Multiconjunto{
        public:
            Multiconjunto();
            void agregar(T x);
            int ocurrencias(T x) const;

        private:
            Diccionario<T, int> diccionario_;
        };

template<class T>
Multiconjunto<T>::Multiconjunto() {

}

template<class T>
void Multiconjunto<T>::agregar(T x) {
    if (diccionario_.def(x)){
        diccionario_.definir(x, diccionario_.obtener(x) + 1);
    } else {
        diccionario_.definir(x, 1);
    }
}

template<class T>
int Multiconjunto<T>::ocurrencias(T x) const {
    if (diccionario_.def(x)){
        return diccionario_.obtener(x);
    } else {
        return 0;
    }
}
