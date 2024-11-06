#include <stdio.h>

int main()
{
    int m,n,a[100][100],p,q,b[100][100],c[100][100],i,j,d[100][100];
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    scanf("%d%d",&p,&q);
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    if(m!=p&&n!=q) printf("nu se poate calcula a+b");
    else {for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];
    for(int i=0;i<m;i++)
        {for(int j=0;j<n;j++)
        printf("%d ",c[i][j]);
        printf("\n");
        }
        }
    printf("\n");
    if(m!=q || n!=p) printf("nu se poate calcula a*b");
    else
        {if(m==q)
        {
        for(i=0;i<m;i++)
            {for(j=0;j<q;j++)
            {d[i][j]=0;
            for(int k=0;k<n;k++)
                d[i][j]+=a[i][k]*b[k][j];
            }
            }
        for(i=0;i<m;i++)
            {for(j=0;j<q;j++)
            printf("%d ",d[i][j]);
            printf("\n");
            }
        }
    else
    {
       for(i=0;i<p;i++)
            {for(j=0;j<n;j++)
            {d[i][j]=0;
            for(int k=0;k<q;k++)
                d[i][j]+=a[i][k]*b[k][j];
            }
            }
        for(i=0;i<p;i++)
            {for(j=0;j<n;j++)
            printf("%d ",d[i][j]);
            printf("\n");
            }
    }

    }
}
