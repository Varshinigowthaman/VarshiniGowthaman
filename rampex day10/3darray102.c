#include<stdio.h>
int main()
{
    int x,y,z,sum=0;
    printf("ENTER THE X: ");
    scanf("%d",&x);
    printf("ENTER THE Y: ");
    scanf("%d",&y);
    printf("ENTER THE Z: ");
    scanf("%d",&z);
    int a[x][y][z];
    printf("ENTER A NUMBER OF %d * %d * %d MATRIX IS ",x,y,z);
    for (int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            for(int k=0;k<z;k++)
            {
            scanf("%d", &a[i][j][k]);
            }
        }
    }
    printf("SUM OF THE GIVEN ARRAY IS ");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            for(int k=0;k<z;k++)
            {
            sum+=a[x][y][z];
            }
        }
    }
    printf("%d \n ",sum);
    return 0;
}