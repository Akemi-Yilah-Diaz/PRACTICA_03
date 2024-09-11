/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 10/09/2024
// Número de ejercicio: 3
// Problema planteado:Convertir un número en base n a base 10, empleando el Teorema Fundamental de
la Numeración:
Ej: Convertir 10102 base 10
1 * 23 + 0 * 22 + 1 * 21 + 0 * 20 = 10

*/
#include <iostream>
using namespace std;

int base10(int numero, int base) {
    int resultado = 0, potencia = 1;

    while (numero > 0) {
        resultado += (numero % 10) * potencia;
        numero /= 10;
        potencia *= base;
    }

    return resultado;
}

int main() {
    int numero;

    cout << "Ingrese un numero";
    cin >> numero;

    int base = 2; 
    cout << "El número en base 10 es " << base10(numero, base) << endl;

    return 0;
}
