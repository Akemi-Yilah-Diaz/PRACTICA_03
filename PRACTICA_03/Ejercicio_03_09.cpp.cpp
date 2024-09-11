/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 10/09/2024
// Número de ejercicio: 9
// Problema planteado: Generar (para un orden n): Sea n=5:
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
*/

#include <iostream>
using namespace std;

void fila(int n, bool impar) {
    for (int i = 0; i < n; ++i) 
        cout << (impar ? i % 2 : (i + 1) % 2);
    cout << endl;
}

void generar(int n) {
    for (int i = 1; i <= n; ++i)
        fila(n, i % 2 != 0);
}

int main() {
    int n;
    cout << "Ingrese un numero ";
    cin >> n;
    generar(n);
    return 0;
}
