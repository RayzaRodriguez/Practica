#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double b,e,r;
    cout<<"Ingrese la base de la operacion: ";
    cin>>b;
    cout<<"\nIngrese el exponente de la operacion: ";
    cin>>e;
    int r2=b;
    r = pow(b,e);
    cout<<"\nEl resultado de la operacion es: "<<r<<endl;
    if(e==0)
        r2=1;
    else
    {
        for(int x=2;x<=e;x++)
            r2*=b;
    }

    cout<<"\nEl resultado de la operacion es: "<<r2<<endl;
    return 0;
}
