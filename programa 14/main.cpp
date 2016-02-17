#include <iostream>
#include <stdio.h>
using namespace std;

int main()
//Ingresar un numero entero entre 50-100,luego preguntarle si desea continuar
//al final del ciclo debera de presentar el promedio de los numeros entre 80-100
//y el cual fue el numero mayor
{
    int num, mayor=0, conta=0, suma=0, contaPar;
    double prom;
    char resp;
    do

{   do
    {
      cout << "ingresar numero entre 50 y 100...";
      cin>>num;
    }
          while (!((num<=100) and (num>=50)));
          _flushall();
          do
          {
             cout<< "Desea continuar...";
             cin.get(resp);
             _flushall();

          }
 while((toupper(resp) !='S') and (toupper(resp) !='N'));
 suma=suma+num;
 if(num>mayor)
 {
     mayor=num;
 }

 conta++;
 if(num%2==0)
 {
     contaPar++;
 }
}
while((toupper(resp)=='S'));

prom=suma/conta;

cout<<"El numero mayor es...."<< mayor<<"\n";
cout<<"El promedio es...."<< prom<<"\n";
cout<<"los numeros pares son...."<< contaPar<<"\n";



    return 0;
}
