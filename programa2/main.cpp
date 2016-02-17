#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
   int num1,num2,suma;
   printf("Ingresar el primer numero   ");
   scanf("%d", &num1);

   printf("Ingresar el segundo numero   ");
   scanf("%d", &num2);

   suma = num1 + num2;

   printf("La Suma de los numeros es %d \n", suma);
   system("PAUSE");
}

