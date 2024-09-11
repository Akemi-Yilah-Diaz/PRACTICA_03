/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 10/09/2024
// Número de ejercicio: 8
// Problema planteado: Generar:
121
12321
1234321
123454321
12345654321
1234567654321
123456787654321
12345678987654321
*/

#include <iostream>
using namespace std;

void secuencia(int i) {
    for (int j = 1; j <= i; ++j) cout << j;
    for (int j = i - 1; j >= 1; --j) cout << j;
    cout << endl;
}

void generarSecuencias(int n) {
    for (int i = 1; i <= n; ++i) secuencia(i);
}

int main() {
    int numero;
    cout << "Ingrese un numero ";
    cin >> numero;
    generarSecuencias(numero);
    return 0;
}
