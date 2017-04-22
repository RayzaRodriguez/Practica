#include<stdio.h>
#include<iostream>
#include<cctype>

using namespace std;

int main ()
{
  char p[]="somos";
  char temp;
  int cont=0, error=0;
  temp=p[0];
  for(int x=0;temp!='\0';temp=p[++x])
  {
    cont++;
  }
  if(cont%2==0)
  {
    cout<<"La palabra no es palindroma";
    error++;
  }
  else
  {
    int n=cont-1;
    for(int x=0;x<cont/2;x++)
    {
      if(p[x]!=p[n-x])
      {
        cout<<"La palabra no es palindroma";
        error++;
        break;
      }
    }
  }
  if(error==0)
  {
    cout<<"La palabra es palindroma";
  }

  return 0;
}
