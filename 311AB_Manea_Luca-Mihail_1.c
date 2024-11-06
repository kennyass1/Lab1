#include <stdio.h>

int palindrom(int x)
{
    int o=0,y=x;
    while(y!=0)
    {
        o=o*10+y%10;
        y/=10;
    }
    if(x==o) return 1;
    else return 0;

}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",palindrom(n));

}
