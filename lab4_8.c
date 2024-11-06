#include <stdio.h>

int main()
{
    int n,v[100],i,ok,mini,pozmin=0,maxi,pozmax=0,aux,ordonat=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    maxi=v[0];
    mini=v[0];
    for(i=0;i<n;i++)
        {
            if(v[i]>maxi) {maxi=v[i],pozmax=i;}
            if(v[i]<mini) {mini=v[i],pozmin=i;}
        }
    if(pozmax<pozmin) {aux=pozmax;
                       pozmax=pozmin;
                       pozmin=aux;
                      }
    if(pozmax-pozmin==1) {printf("Nu se poate ordona"),ordonat=0;}
    else do{
        ok=1;
        for(i=pozmin+1;i<pozmax-1;i++)
        if(v[i]>v[i+1]) {aux=v[i];
                         v[i]=v[i+1];
                         v[i+1]=aux;
                        }
           }while(ok==0);
    if(ordonat) for(i=0;i<n;i++) printf("%d ",v[i]);

}
