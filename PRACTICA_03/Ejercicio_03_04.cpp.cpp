/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 10/09/2024
// Número de ejercicio: 4
// Problema planteado:Mediante una función obtener la suma de la serie4
1 - 4 + 9 - 16 + 25 - 36 +…………………. Para n término4
*/
#include <iostream>
using namespace std;

int sumaserie(int n)
{
    int suma = 0;
    for (int i = 1; i <= n; ++i) 
    {

        suma += (i % 2 == 0 ? -1 : 1) * (i * i);
    }

    return suma;
}

int main()
{
    int n;

    cout << "Ingrese el número de términos n" ;
    cin >> n;

    cout << "La suma de los primeros " << n << " términos de la serie es " << sumaserie(n) << endl;

    return 0;
}