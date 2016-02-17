#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*
1) -GENERAR 10 NUMEROS ALEATORIOS
   -NUMERO MAYOR
   -EL PROMEDIO
*/
int main()

{srand(time(0));
int i;
int numero, maxi=0, contador=0, suma=0, promedio;

    for (i=1;i<=10;i++)
        {
        numero=30 + rand()%(80-30);
        cout <<"\n El valor de i es: " <<i <<"\n Valor del numero es: " <<numero <<"\n";
        if (numero>maxi)
        maxi=numero;
        contador++;
        suma+=numero;
        }
        promedio=suma/contador;

    cout <<"Promedio: " <<promedio <<"\n";
    cout <<"Numero mayor es: " <<maxi <<"\n";
    system("PAUSE");

    return 0;
}
