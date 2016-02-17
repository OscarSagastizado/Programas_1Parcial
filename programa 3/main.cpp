#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
   double ne,na,nf;

   printf("Ingrese la nota examen...");
   scanf("%lf",&ne);

   printf("Ingrese la nota acumulada...");
   scanf("%lf",&na);

   nf = (na*0.3) + (ne*0.7);

   printf("NOTA FINAL %lf \n", nf);

   if (nf >= 60)
    {
    printf("Estado de la nota: Aprovado \n");
    }
    else
    {
    printf("Estado de la nota: Reprobado \n");
    printf("Necesita tutorias \n");
    }




   system("PAUSE");

    return 0;
}
