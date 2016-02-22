#include <iostream>

using namespace std;

int n1,n2,suma;

void ingreso(int &n1, int &n2)

{
    cout<<"valor de n1 es....   ";
    cin>>n1;
    cout<<"valor de n2 es....   ";
    cin>>n2;
}
void SumaNumeros(int n1,int n2,int &suma)
{
    suma = n1+n2;

}

int main()
{
   ingreso(n1,n2);
    SumaNumeros(n1,n2,suma);
    cout<<"valor de n1 es....   "<<suma<<"\n";
    //Al copiar int main, podemos repetir el ciclo//


    return 0;
}
