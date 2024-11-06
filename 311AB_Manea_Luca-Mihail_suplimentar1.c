#include <stdio.h>

int fibo(int n)
{
    int a=0,b=1,c;
    if(n==0) return 0;
    else if(n==1) return 1;
    else {for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;

    }
    return c;
        }

}

int fact(int n)
{
    int i,p=1;
    if(!n) return 1;
    else for(i=1;i<=n;i++)
        p=p*i;
    return p;
}

float expresie(int n)
{
    int a,b;
    a=fibo(n);
    b=fact(n);
    return (float)a/b;
}

int main()
{
  int x;
  scanf("%d",&x);
  printf("%.2f",expresie(x));



}
