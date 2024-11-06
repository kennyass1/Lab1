#include <stdio.h>

int main()
{
    int n,v[100],i,l=1,lm=0,poz;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    for(i=0;i<n-1;i++)
        {if(v[i]<v[i+1]) l++;
        else l=1;
        if(l>lm) {lm=l; poz=i;}
        }
    for(i=poz-lm+1;i<poz;i++)
        printf("%d ",v[i]);
}
