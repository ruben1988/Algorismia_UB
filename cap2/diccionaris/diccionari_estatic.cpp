#include "element.h"
#include <cstring>
#include <iostream>
#define K 1000

class diccionari_vector
{
    char T[K][MAXLEN];
    int n;
public:
    diccionari_vector(){
        n = 0;
        memset(T, K*MAXLEN, 0);
    }

    bool inserir(element e){
        if (0<=e.clau && e.clau<K){
            strcpy(&T[e.clau][0], e.descripcio);
            n++;
            return true;
        }
        return false;
    }

    bool cercar(element& e){
        if (0<=e.clau && e.clau<K){
            strcpy(e.descripcio, &T[e.clau][0]);
            return true;
        }
        return false;
    }
    
};

int main() {
    diccionari_vector dicc;

    // Crear un elemento para insertar
    element e1;
    e1.clau = 123;
    strcpy(e1.descripcio, "Descripcio de prova");

    // Insertar el elemento en el diccionario
    if (dicc.inserir(e1)) {
        std::cout << "Element inserit correctament." << std::endl;
    } else {
        std::cout << "Error en inserir l'element." << std::endl;
    }

    // Crear un elemento para buscar
    element e2;
    e2.clau = 123;

    // Buscar el elemento en el diccionario
    if (dicc.cercar(e2)) {
        std::cout << "Element trobat: " << e2.descripcio << std::endl;
    } else {
        std::cout << "Element no trobat." << std::endl;
    }

    // Intentar buscar un elemento que no existe
    element e3;
    e3.clau = 999;

    if (dicc.cercar(e3)) {
        std::cout << "Element trobat: " << e3.descripcio << std::endl;
    } else {
        std::cout << "Element no trobat." << std::endl;
    }

    return 0;
}