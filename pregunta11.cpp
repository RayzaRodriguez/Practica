#include <stdio.h>
#include <iostream>

using namespace std;

void mulMat( int mat1[3][2], int mat2[2][3],int mat3[3][3])
{
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
			int resul=0;
            for(int z=0;z<2;z++)
            {
               resul += mat1[x][z] * mat2[z][y];
            }
			mat3[x][y] = resul;
        }
    }
}
int main()
{
    int mat1[3][2]={{1,2},{2,1},{3,2}};
    int mat2[2][3]={{1,3,3},{1,1,1}};
    int mat3[3][3];
    mulMat(mat1,mat2,mat3);
	for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
            cout<<mat3[x][y]<<"\t";
		cout<<endl;
    }
    return 0;
}
