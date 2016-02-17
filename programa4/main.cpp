#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
   int num1,num2,mayor;
   printf("Ingresar el primer numero    ");
   scanf("%d", &num1);

   printf("Ingresar el segundo numero   ");
   scanf("%d", &num2);
   printf("\n");

   if (num1>num2)
   {
       mayor = num1;
   }

   else
   {
       mayor = num2;
   }

   printf("***El numero mayor es ...... %d  \n", mayor);
   system("PAUSE");
}
