#include <stdio.h>

int main()
{
    int m,n,a[100][100],i,j,c1,c2,aux;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    scanf("%d%d",&c1,&c2);
    for(i=0;i<m;i++)
    {
        aux=a[i][c1];
        a[i][c1]=a[i][c2];
        a[i][c2]=aux;
    }
    for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
        }
}
