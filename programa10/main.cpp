#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{srand(time(0));
int i;
int n, numero;
    cout <<"Ingreses la cantidad de numeros aleatorios que requiere: ";
    cin >>n;

    for (i=1;i<=n;i++)
        {
        numero=50 + rand()%(100-50);
        cout <<"\n El valor de i es: " <<i <<"\n Valor del numero es: " <<numero <<"\n";
        }

   return 0;
}
