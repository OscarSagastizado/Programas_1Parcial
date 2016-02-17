#include <iostream>

using namespace std;

int main()
{
    int ne,na, nt;
    cout << "Ingrese la nota de examen:   ";
    cin >> ne;

    cout << "Ingrese la nota acumulada:   ";
    cin >> na;

    nt=(na)+(ne);

    if ((nt>56) and (nt<60))
    {
        cout <<"Nota Final: " <<60 <<"  Condicion: Aprobado \n";
    }
    else if (nt>59)
    {
        cout <<"Nota Final: " <<nt <<"  Condicion: Aprobado \n";
    }
    else
    {
        cout <<"Nota Final: " <<nt <<"  Condicion: Reprobado \n";
    }
    return 0;
}
