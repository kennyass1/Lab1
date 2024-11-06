#include <stdio.h>

int perfect(int x)
{
    int d,s=1;
    for(d=2;d<=x/2;d++)
        if(x%d==0) s+=d;
    if(s==x) return 1;
    else return 0;

}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",perfect(n));


}
