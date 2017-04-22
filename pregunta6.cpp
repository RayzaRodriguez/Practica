#include <stdio.h>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char lista[]="* 5 4";
    char buscar=lista[0];
    char n1,o,n2;
    int cont=0;
    for(int x=0;buscar != '\0';buscar=lista[++x])
       {
           if(buscar==' ')
           {
               cont++;
           }
           else if(isdigit(buscar))
            {
                if(cont==1)
                    n1=buscar;
                else
                    n2=buscar;
            }
            else if ((!isdigit(buscar))&&(buscar!=' '))
            {
                o=buscar;
            }
        }
    int n3 = (int) (n1 - 48);
    int n4 = (int) (n2 - 48);
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

    }


}
