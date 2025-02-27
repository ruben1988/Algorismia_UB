#ifndef ORDENACIOH
#define ORDENACIOH

#include <iostream>

class ordenacio{
    public:
        void ordenacio_per_seleccio(int n, int T[]);
        void ordenacio_per_insercio(int n, int T[]);
        void print_array(int len, int T[]);
};

void ordenacio::print_array(int len, int T[]){

    for(int i = 0; i< len; i++){
        std::cout << T[i] << ' ';
    }
    std::cout << "\n";
}

void ordenacio::ordenacio_per_insercio(int n, int T[]){
    for (int i=1; i<n; i++){
        int x = T[i];
        int j = i - 1;
        while (j>=0 && x<T[j]){
            T[j+1] = T[j];
            j = j - 1;
        }
        T[j+1] = x;
        print_array(n, T);
    }
    print_array(n, T);
}

void ordenacio::ordenacio_per_seleccio(int n, int T[]){    
    
    for(int i=0; i<=n-1; i++){
        int minj = i;
        int minx = T[i];
        for (int j = i+1; j<n; j++){
            if(T[j]<minx){
                minj=j;
                minx=T[j];
            }

        }
    T[minj]=T[i];
    T[i]=minx;
    }
    print_array(n, T);
}

#endif