#include <iostream>

using namespace std;

int main()
{
    int c=0; int numero; int suma=0; int mayor = 0; double prom;
    while (c<5)
    {
        c++;
        cout << "Numero" <<c << ": ";
        cin >> numero;
        suma+=numero;

        if (numero>mayor)
        {
           mayor=numero;
        }
    };
    prom = (suma/5);

    cout <<"\n" <<"La suma es igual a: " <<suma <<"  Numero mayor es: " <<mayor <<"  Promedio: " <<prom <<"\n";
    cout <<"\n" "Final del ciclo \n";
    return 0;
}
