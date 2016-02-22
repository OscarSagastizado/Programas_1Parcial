#include <iostream>

using namespace std;

int  zona;
char nombre[30];
int ventas;
double porcomision;
double comision;
double bono;

void Datos(int &zona,char nombre[], int &ventas)
  {
      cout<<"Nombre...:";
      cin.getline(nombre,30);
      cout<<"Las ventas son...:";
      cin>>ventas;

      do
      {
          cout<<"La zona es...:";
          cin>>zona;
      }
      while(!(zona>=1) and (zona<=3));
      }

      double xcomision(int ventas)
      {
          if((ventas>=1) and (ventas<=20000))
          {
            return 0.04;
          }
          else if((ventas>=20001) and (ventas<=50000))
          {
              return 0.05;
                         }
          else((ventas>=50001));
          {
              return 0.06;
          }
      }



      void TotalComision(double &comision,double &porcomision,int ventas, int zona)
  {
  porcomision=xcomision(ventas);
  comision=porcomision*ventas;

  }
int main()

{
    do
    {
        if((ventas>=30000) and (ventas<40000))
        {
            bono=500;
        }
    }
    while((zona==1) or (zona==3));


    do
    {
        if(ventas>4000)
        {
            bono=600;
        }}
    while(zona==2);


Datos(zona,nombre,ventas);
TotalComision(comision,porcomision,ventas,zona);
cout<<"El bono es de...:"<<bono<<"\n";
cout<<"La comision es de...:"<<comision<<"\n";
    return 0;

}
