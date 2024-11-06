#include <stdio.h>

void Verificare(char *x,char *y,char *z)
{
    if(*x>='a' && *x<='z') {printf("Se poate face conversia pentru a \n"); *x-=32;}
    if(*y>='a' && *y<='z') {printf("Se poate face conversia pentru b \n"); *y-=32;}
    if(*z>='a' && *z<='z') {printf("Se poate face conversia pentru c \n"); *z-=32;}

}

int main()
{
    char a,b,c;
    scanf("%c\n%c\n%c",&a,&b,&c);
    Verificare(&a,&b,&c);
    printf("%c %c %c",a,b,c);


}
