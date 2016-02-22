#include <iostream>

using namespace std;
int num;

void Datos(int &num)
 {
     cout<<"ingrese un numero.....:";
     cin>>num;
     cout<<"\n";
 }
 void Calcular(int &num)
 {

     if ((num>=0) and (num<=50))
     {
         cout<<"El numero esta entre 0-50";
     }

     else if((num>=51) and (num<=100))
     {
         cout<<"El numero esta entre 51-100";
     }
     else
        {
            cout<<"El numero es mayor de 100";
     }

 }

int main()
{

    Datos(num);
    Calcular(num);
    return 0;
}
