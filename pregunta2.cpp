#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    float f=0,c=0;
    cout<<"F°\t C°"<<endl;
    for(f=0;f<301;f+=20)
    {
        c=(f-32)*5/9;
        cout<<f<<"\t"<<c<<endl;
    }
}
