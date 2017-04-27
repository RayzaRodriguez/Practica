#include <stdio.h>
#include <iostream>
#include <cctype>
#include <stdlib.h>

using namespace std;

int main()
{
    char lista[]="* 532 413";
    char buscar=lista[0];
    char n1[3],o,n2[3];
    int cont=0,x=0,y=0;
    for(int x=0;buscar != '\0';buscar=lista[++x])
       {
           if(buscar==' ')
           {
               cont++;
           }
           else if(isdigit(buscar))
            {
                if(cont!=1)
                {
                    n2[y]=buscar;
                    cout<<n2[y];
                    y++;

                }
                else
                {
                    n1[x]=buscar;
                    cout<<n1[x];
                    x++;
                }
            }
            else if ((!isdigit(buscar))&&(buscar!=' '))
            {
                o=buscar;
            }
        }
    /*int n3=atoi(n1);
    int n4=atoi(n2);

    switch(o)
    {
    case '+':
        cout<<n3+n4;
        break;
    case '-':
        cout<<n3-n4;
        break;
    case '*':
        cout<<n3*n4;
        break;
    case '/':
        if(n4>n3||n4==0)
            cout<<"No se puede realizar operacion";
        else
            cout<<n3/n4;
        break;
    default:
        cout<<"Operacion invalida";
        break;

    }*/

    return 0;
}
