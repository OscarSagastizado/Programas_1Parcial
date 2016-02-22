#include <iostream>

using namespace std;

int turno;
double ventas,comision,pcomis;
char nombre[30];

void Datos(int turno, double &ventas,char nombre[])

{
    cout<<"Ingresar nombre..:";
    cin.getline(nombre,30);
    cout<<"Ventas...:";
    cin>>ventas;
do
    {
        cout<<"Ingresar el turno...:";
        cin>>turno;
        cout<<"\n";


}while(!(turno>=1) and (turno<=3));
    }
        double porcomis(int turno)
        {


     if(turno==1)
     {
         return 0.05;
     }
     else if(turno==2)
        {
    return 0.06;
     }
     else
        {
         return 0.04;
     }

}
void Calcular(double &ventas,double &comision,double &pcomis)
{
    pcomis=porcomis(turno);
comision=pcomis*ventas;
}


int main()
{
    Datos(turno,ventas, nombre);
    Calcular(ventas,comision,pcomis);
    cout<<"la comision es de..:"<<comision<<"\n";
    return 0;
}
