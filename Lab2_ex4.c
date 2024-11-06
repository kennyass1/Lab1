#include <stdio.h>

int main()
{
    int n,v[100],i,j,k=0,ok=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    for(i=0;i<n-1;i++)
        {for(j=i+1;j<n;j++)
            if(v[i]==v[j])
                k++;
        if(k==n-1) {i=n; printf("toate egale"); ok=0;}
        }
    if(k==0) printf("toate diferite");
    else if(ok) printf("oarecare");


}
