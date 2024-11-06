#include <stdio.h>

void cifre(int x)
{
    int c=0;
    printf("Cifrele numarului sunt: ");
    while(x!=0)
    {
        printf("%d ",x%10);
        x/=10;
        c++;
    }
    printf("\n Numarul de cifre este: %d",c);

}

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1000 || n<=-1000) printf("Numarul nu a fost citit corect");
    else cifre(n);

}
