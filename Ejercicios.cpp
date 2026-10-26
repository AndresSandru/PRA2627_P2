
#include <iostream>
#include <vector>

template <typename T> 
int Partition(std::vector<T>& V, int ini, int fin) {
    T x = V[fin];
    int i = ini;
    
    for(int j = ini; j < fin; j++) {
        if (V[j] <= x) {
            T aux = V[j];
            V[j] = V[i];
            V[i] = aux;
            i++;
        }
    }
    T aux2 = V[i];
    V[i] = V[fin];
    V[fin] = aux2;
    
    return i;
}

template <typename T> 
void quickSort(std::vector<T>& V, int ini, int fin) {
    if (ini < fin) {
        int pivot = Partition(V, ini, fin);
        quickSort(V, ini, pivot - 1);
        quickSort(V, pivot + 1, fin);
    }
}

template <typename T> 
int busquedaBinaria(T val, const std::vector<T>& V, int ini, int fin) {
    if (ini > fin) {
        std::cout << "No se encuentra en el array\n";
        return -1; 
    }
    
    int medio = ini + (fin - ini) / 2;
    
    if (V[medio] == val) {
        return medio;
    }
    else if (V[medio] > val) {
        return busquedaBinaria(val, V, ini, medio - 1);
    }
    else {
        return busquedaBinaria(val, V, medio + 1, fin);
    }
}
