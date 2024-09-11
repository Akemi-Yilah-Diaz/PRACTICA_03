/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 10/09/2024
// Número de ejercicio: 1
// Problema planteado:Obtener la suma de la serie:
4 + 6 + 9 + 13 + 19 + 28 + 42 +……. Para n términos 
*/
#include <iostream>
using namespace std;

void sumaserie(int n)
{
    int sum = 0;
    int contador = 4; 
    int diferecia1 = 2;  
    int diferencia2 = 1;  

    cout << "La secuencia es";

    for (int i = 1; i <= n; i++) {
        cout << contador;  
        if (i < n) cout << " + ";  

        sum += contador;
        contador += diferecia1 ; 
        int siguiente = diferecia1  + diferencia2; 
        diferencia2 = diferecia1 ;  
        diferecia1  = siguiente;
    }

    cout << "\nLa suma de los " << n << " terminos" << sum << endl;
}

int main() 
{
    int n;
    cout << "Ingrese el número de términos n: ";
    cin >> n;
    sumaserie(n);
    return 0;
}