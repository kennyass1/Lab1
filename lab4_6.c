#include <stdio.h>

int main()
{
    int n,m,a[100][100],i,j,maxi,mini;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    mini==a[0][0];
    maxi=a[0][0];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(a[i][j]>maxi) maxi=a[i][j];
            if(a[i][j]<mini) mini=a[i][j];
        }
    for(i=0;i<n;i++)
        a[i][i]=maxi;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        if(i+j>n-1) a[i][j]=mini;
    printf("minimul este %d si maximul este %d \n",mini,maxi);
    for(i=0;i<n;i++)
        {for(j=0;j<m;j++)
         printf("%d ",a[i][j]);
         printf("\n");
        }

}
