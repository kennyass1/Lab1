#include <stdio.h>

int main()
{
    int n,m,a[100],b[100],i,j,c[100],k=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=1;i<m;i++)
        scanf("%d",&b[i]);
    i=1,j=1;
    while(i<n && j<m)
    {
        if(a[i] < b[j] && a[i]%2 && b[j]%2) {
            k++;
            c[k] = a[i];
            i++;
        } else if(a[i]>=b[j] && a[i]%2 && b[j]%2) {
            k++;
            c[k] = b[j];
            j++;
        }
    }
    while(i < n) {
        if(a[i]%2){ k++;
        c[k] = a[i];
        i++;
        }
    }

    while(j < m) {
        if(b[j]%2) {k++;
        c[k] = b[j];
        j++;
        }
    }
    for(i=0;i<k;i++)
        printf("%d ",c[i]);
}
