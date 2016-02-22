#include <iostream>

using namespace std;

int main()
{
    int s=0; int number; int s1=0;
    int s2=0; int s3=0; int mayor = 0;
    int menor=111111; double prom;

    while (s<5)
    {

        s++;
        cout << "Numero" <<s << ": ";
        cin >> number;

        if (number<menor)
        {
            menor=number;

        }

        if (number>mayor)
        {
           mayor=number;

        }

        if ((number>=0) and (number<51))
        {
            s1++;
            sumar+=number;
        }
        else if ((number>50)and (number<101))
        {
            s2++;
            sumar+=number
        }
        else
        {
            s3++;
            sumar+=number
        }

    }


    cout <<"\n" <<"Numeros entre 1-50: " <<s1 <<"\n";
    cout<<  "Numeros entre 51-100: " <<s2 <<"\n";
    cout<< "Numero mayor a 100: " <<s3 <<"\n";
    cout <<"Numero mayor: " <<mayor <<"\n"<<  " Numero menor: " <<menor <<"\n";
    cout <<"\n" "Final del ciclo \n";

    return 0;
}
