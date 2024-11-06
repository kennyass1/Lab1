#include <stdio.h>

int main()
{
    int n,v[100],i,j,p,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
        scanf("%d",&v[i]);
        a[i]=v[i];
       }
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        int x=i-p;
        if(x<0) x+=n;
        v[i]=a[x];
    }
    for(i=0;i<n;i++)
        printf("%d ",v[i]);
}
