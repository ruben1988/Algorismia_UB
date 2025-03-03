#include <iostream>
#include <vector>

using namespace std;

vector<long long> fibonacci(int n) {
    vector<long long> fib;
    if (n < 1) return fib;
    fib.push_back(0);
    if (n == 1) return fib;
    fib.push_back(1);
    for (int i = 2; i < n; i++) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    return fib;
}

int main() {
    int n;
    cout << "Ingrese el número de términos de Fibonacci: ";
    cin >> n;
    
    if (n < 1) {
        cout << "Por favor, ingrese un número mayor o igual a 1." << endl;
        return 1;
    }
    
    vector<long long> result = fibonacci(n);
    cout << "Secuencia de Fibonacci: ";
    for (long long num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}