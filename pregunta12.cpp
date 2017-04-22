#include<stdio.h>
#include<iostream>

using namespace std;

void reversa(int lista[],int n)
{
    int temp=lista[0];
    int v=n/2;
    int y=n;
    for(int x=0;x<v;x++)
    {
        lista[x]=lista[n-1];
        lista[n-1]=temp;
        temp=lista[x+1];
        n--;
    }
}

int main()
{
    int n;
    cout<<"Ingrese la cantidad de elementos de la lista: ";
    cin>>n;
    int lista[n];
    for(int x=0;x<n;x++)
    {
        cout<<"Ingrese valor "<<x+1<<": ";
        cin>>lista[x];
    }
    reversa(lista,n);
    cout<<"la lista invertida es: ";
    for(int x=0;x<n;x++)
    {
        cout<<lista[x]<<" ";
    }

}
