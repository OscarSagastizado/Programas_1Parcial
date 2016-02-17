#include <iostream>

using namespace std;

int ne,nf,na;
//para escribir un nombre de 30 caracteres
char nombre[30];

void LecturaDatos(int &na, int &ne, char nombre[])
{
    cout<<"Nombre del alumno..: ";
    cin.getline(nombre,30);
    cout<<"nota acumulada..:";
    cin>>na;
    cout<<"nota examen..:";
    cin>>na;

}

int notafinal(int na, int ne)
{
    int xnf;
    xnf=na+ne;
    return xnf;
}

void Observacion(int nf)
{
    if(nf>=60)
    {
        cout<<"Aprobado"<<"\n";
    }
    else
    {
        cout<<"Reprobado"<<"\n";
    }
}


int main()
{
    LecturaDatos(na,ne,nombre);
    nf=notafinal(na,ne);

    cout<<"nota final es..:"<<nf;
Observacion(nf);
    return 0;
}
