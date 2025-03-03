#include <iostream>
#include <vector>

using namespace std;

int fibonacci(int n) {
    if (n <= 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Ingrese el número de términos de Fibonacci: ";
    cin >> n;
    
    if (n < 1) {
        cout << "Por favor, ingrese un número mayor o igual a 1." << endl;
        return 1;
    }
    cout << "Secuencia de Fibonacci: ";
    cout << fibonacci(n) << " ";
    cout << endl;
    return 0;
}