/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 10/09/2024
// Número de ejercicio: 5
// Problema planteado: Simular el lanzamiento de una moneda n veces y determinar el porcentaje de
caras y el porcentaje de sellos.
*/
#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main()
{
    int n, caras = 0, sellos = 0;

    cout << "Ingrese el número de lanzamientos";
    cin >> n;

    srand(time(0));  

    for (int i = 0; i < n; ++i) 
    {
        if (rand() % 2 == 0) caras++;
        else sellos++;
    }

    cout << "Número de caras " << caras << " "<<(caras * 100.0 / n) << "%" << endl;
    cout << "Número de escudo " << sellos << " "<<(sellos * 100.0 / n) << "%" << endl;

    return 0;
}