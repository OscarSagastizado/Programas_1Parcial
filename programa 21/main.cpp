#include <iostream>

using namespace std;

int n1,n2,suma;

void SumaNumeros(int n1,int n2,int &suma)
{
    suma = n1+n2;
}

int main()
{
    n1=45;
    n2=55;
    suma=0;
    SumaNumeros(n1,n2,suma);
    cout<<"suma de los numeros es....   "<<suma<<"\n";



    return 0;
}
