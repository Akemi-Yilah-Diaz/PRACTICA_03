/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 10/09/2024
// Número de ejercicio: 2
// Problema planteado: Simular el lanzamiento de un dado n veces y determinar la frecuencia de
repetición de las caras pares.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int tirar()
{
    return rand() % 6 + 1;
}

int main() {
    srand(time(0)); 

    int n, pares = 0;
    cout << "Ingrese los tiros ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        if (tirar() % 2 == 0) {
            pares++;
        }
    }

    cout << "cantidad de caras pares " << pares << endl;
    cout << "porcentaje de pares " << (pares * 100.0 / n) << "%" << endl;

    return 0;
}
