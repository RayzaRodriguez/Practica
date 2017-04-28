#include <stdio.h>
#include <iostream>
#include <cctype>
#include <stdlib.h>

using namespace std;

int main()
{
    char lista[]="+ 51.3 4";
    char buscar=lista[0];
    char n1[10],o,n2[10];
    int cont=0,z=0,y=0;
    for(int x=0;buscar != '\0';buscar=lista[++x])
       {
           if(buscar==' ')
           {
               cont++;
           }
           else if((isdigit(buscar))||(buscar == '.'))
            {
                if(cont!=1)
                {
                    n2[y]=buscar;
                    y++;

                }
                else
                {
                    n1[z]=buscar;
                    z++;
                }
            }
            else if ((!isdigit(buscar))&&(buscar!=' '))
            {
                o=buscar;
            }
        }
	double n3=atof(n1);
	double n4=atof(n2);
    switch(o)
    {
    case '+':
        cout<<n3+n4<<endl;
        break;
    case '-':
        cout<<n3-n4<<endl;
        break;
    case '*':
        cout<<n3*n4<<endl;
        break;
    case '/':
        if(n4>n3||n4==0)
            cout<<"No se puede realizar operacion";
        else
            cout<<n3/n4<<endl;
        break;
    default:
        cout<<"Operacion invalida";
        break;
    }

    return 0;
}
