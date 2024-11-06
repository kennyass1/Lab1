#include <stdio.h>

int main()
{
    int n,p,v[100],poz[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    scanf("%d",&p);
    for(i=0;i<p;i++)
        scanf("%d",&poz[i]);
    for(i=0;i<p;i++)
        printf("%d ",v[poz[i]]);
}
