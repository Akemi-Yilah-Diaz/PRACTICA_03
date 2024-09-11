/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 10/09/2024
// Número de ejercicio: 6
// Problema planteado: Escribir un algoritmo que permita adivinar un número que se genere internamente
al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en
base a aproximaciones para lo cual se dispone de 5 intentos.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numeroaleatorio= rand() % 51, intento, min = 0, max = 50;

    cout << "Elige un numero entre 0 y 50\n";
    for (int i = 1; i <= 5; ++i) {
        cout <<"\n ";
        cin >> intento;

        if (intento == numeroaleatorio) 
        {
            cout << "Felicidades adivinaste el número\n";
            return 0;
        } else if (intento < numeroaleatorio) {
            min = intento;
        } else {
            max = intento;
        }
        cout << "El numero esta entre " << min << " y " << max << endl;
    }

    cout << "El numero era el " << numeroaleatorio << endl;
    return 0;
}
