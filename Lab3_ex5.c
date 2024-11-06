#include <stdio.h>

int main()
{
    int n,v[100],i,j,x[100],u=0,k=0;;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    for(i=0;i<n-1;i++)
        {for(j=i+1;j<n;j++)
        if(v[i]==v[j]) {k++; v[j]=0;}
        if(k!=0 && v[j]!=0) {x[u]=v[i];
                             u++;
                            }
        else if(k==0)  {x[u]=v[i];
                             u++;
                       }
        k=0;
        }
    for(i=0;i<x;i++)
        printf("%d ",x[i]);
}
