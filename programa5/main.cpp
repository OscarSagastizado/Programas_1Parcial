#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int num;
    printf("Ingrese el numero:  ");
    scanf("%d", &num);

    if (num<0)
    {
    printf("El numero es negativo \n") ;
    }
    else if (num>0)
    {
    printf("El numero es positivo \n");
    }
    else
    printf("El numero es igual a Cero \n");

    system("PAUSE");
}
