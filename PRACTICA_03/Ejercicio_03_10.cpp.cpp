/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 10/09/2024
// Número de ejercicio: 10
// Problema planteado: . En una guardería hay N niños de 1, 2 y 3 años:
- Los niños de 1 año consumen 6 pañales al día
- Los niños de 2 años consumen 3 pañales diarios
- Los niños de 3 años consumen 2 pañales diarios
Se desea conocer cuantos pañales por día se consumen.
La cantidad de niños de 1, 2 y 3 años, debe ser generada en forma aleatorio y la
suma no debe sobrepasar los N niños.
Por ejemplo, si el usuario ingresar N = 30, el programa debe generar en forma
aleatoria 5 niños de 1 año, 18 niños de 2 años y 3 niños de 3 años.
De acuerdo con esto el consumo de pañales seria (5 x 6) + (18 x 3) + (3 x 2) = 90
PAÑALES
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int N;
    int n1;
    int n2;
    int n3;

    cout << "Ingrese la cantidad de niños";
    cin >> N;

    n1 = rand() % (N + 1);
    n2 = rand() % (N - n1 + 1);
    n3 = N - n1 - n2;

    int pañales = n1 * 6 + n2 * 3 + n3 * 2;

    cout << "Niños de 1 año " << n1<< endl;
    cout << "Niños de 2 años " << n2<< endl;
    cout << "Niños de 3 años " << n3<< endl;
    cout << "el total de pañales es " << pañales << endl;

    return 0;
}