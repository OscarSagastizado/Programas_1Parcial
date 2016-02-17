#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero:   ";
    cin >> numero;

    if ((numero>=0) and (numero<=50))
    {
        cout<<"Numero entre 0 y 50 \n";
    }
    else if ((numero>=51) and (numero<=100))
    {
        cout<<"Numero entre 51 y 100 \n";
    }
    else if (numero>100)
    {
         cout<<"Numero mayor que 100 \n";
    }
    else
    {
         cout<<"Numero menor que 0 \n";
    }

    return 0;
}
