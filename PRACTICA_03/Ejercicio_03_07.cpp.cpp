/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 10/09/2024
// Número de ejercicio: 7
// Problema planteado: Generar las secuencias:
1 2 3 4 …………..n
1 2 3 4……. n-1
1 2 3 …...n-2
……….
1
*/
#include <iostream>
using namespace std;

void secuencia(int n)
{
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j) 
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Ingresa un numero";
    cin >> n;
    secuencia(n);
    return 0;
}