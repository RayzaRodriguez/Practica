#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cout<<"\nIngrese un numero: ";
    cin>>n;
    while(n!=-1)
    {
        if(n%2==0)
            cout<<"El numero ingresado es par"<<endl;
        else
            cout<<"El numero ingresado es impar"<<endl;
        cout<<"\nIngrese un numero: ";
        cin>>n;
    }
    cout<<"Salio del programa"<<endl;
    return 0;
}
