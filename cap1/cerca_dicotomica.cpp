#include <iostream>
#include <vector>
#include <algorithm>

// Función de búsqueda dicotómica (binaria)
int busquedaDicotomica(const std::vector<int>& arr, int valor) {
    int inicio = 0, fin = arr.size() - 1;
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (arr[medio] == valor)
            return medio; // Retorna la posición donde se encontró el valor
        else if (arr[medio] < valor)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }
    return -1; // Retorna -1 si el valor no se encuentra en el arreglo
}

// Función recursiva de búsqueda dicotómica (binaria)
int busquedaDicotomicaRecursiva(const std::vector<int>& arr, int inicio, int fin, int valor) {
    if (inicio > fin) 
        return -1; // Caso base: no encontrado
    
    int medio = inicio + (fin - inicio) / 2;
    
    if (arr[medio] == valor)
        return medio; // Retorna la posición donde se encontró el valor
    else if (arr[medio] < valor)
        return busquedaDicotomicaRecursiva(arr, medio + 1, fin, valor);
    else
        return busquedaDicotomicaRecursiva(arr, inicio, medio - 1, valor);
}

int main() {
    int n, valor;
    std::vector<int> numeros;

    std::cout << "Ingrese la cantidad de números: ";
    std::cin >> n;
    
    std::cout << "Ingrese los números: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        numeros.push_back(num);
    }
    
    // Ordenamos el vector para aplicar la búsqueda dicotómica
    std::sort(numeros.begin(), numeros.end());
    
    std::cout << "Ingrese el número a buscar: ";
    std::cin >> valor;
    
    int resultado = busquedaDicotomica(numeros, valor);
    
    if (resultado != -1)
        std::cout << "El número " << valor << " se encuentra en la posición " << resultado << " (basado en índice 0).\n";
    else
        std::cout << "El número " << valor << " no se encuentra en la lista.\n";
    
    int resultado_recursivo = busquedaDicotomicaRecursiva(numeros, 0, numeros.size() - 1, valor);

    if (resultado_recursivo != -1)
        std::cout << "El número " << valor << " se encuentra en la posición " << resultado_recursivo << " (basado en índice 0).\n";
    else
        std::cout << "El número " << valor << " no se encuentra en la lista.\n";
    
    
    
    return 0;
}