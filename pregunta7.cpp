#include <stdio.h>
#include <iostream>

using namespace std;

void inter(int *n1,int *n2)
{
    int temp=0;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

int main()
{
    int n1,n2;
    cout<<"Ingrese numero 1: ";
    cin>>n1;
    cout<<"Ingrese numero 2: ";
    cin>>n2;
    inter(&n1,&n2);
    cout<<n1<<endl;
    cout<<n2<<endl;

    return 0;

}
