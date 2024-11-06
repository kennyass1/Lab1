#include <stdio.h>

char verificare(int x,int y,int z)
{
    if(x<y && y<z) return 'C';
    else if(x>y && y>z) return 'D';
    else if(x==y && y==z) return 'I';
    else return 'N';

}

int main()
{
    int n,m,p,k;
    printf("Cititi primul set de numere: ");
    scanf("%d%d%d",&n,&m,&p);
    printf("%c \n",verificare(n,m,p));
    printf("Doriti sa continuati? 1/0 ");
    scanf("%d",&k);
    while(k)
    {
        printf("Cititi urmatorul set: ");
        scanf("%d%d%d",&n,&m,&p);
        printf("%c \n",verificare(n,m,p));
        printf("Doriti sa continuati? 1/0 ");
        scanf("%d",&k);

    }

}
