
#include <stdio.h>

int main()
{
    /* PROBLEMA 1
    char c;
    scanf("%c",&c);
    if(c>='A'&&c<='Z') printf("caracterul c este litera mare");
        else if(c>='a'&& c<='z') printf("caracterul c este litera mica");
             else if(c>='1' && c<='9') printf("caracterul c este cifra");
                  else printf("caracterul c este alt tip de caracter");
    PROBLEMA 2
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a) {printf("este triunghi \n");
                                if(a==b && b==c && a==c) printf("triunghiul este echilateral");
                                else if(a==b || b==c || a==c) printf("triunghiul este isoscel");
                                     else if(a*a+b*b==c*c ||
                                             b*b+c*c==a*a ||
                                             a*a+c*c==b*b) printf("triunghiul este dreptunghic");
                                }
        else printf("nu este triunghi");
    PROBLEMA 3
    int a,k=0;
    scanf("%d",&a);
    if(a<2) printf("numarul nu este prim");
    else if(a==2) printf("numarul este prim");
        else {for(int d=2;d*d<=a && int ok;d++) if(a%d==0) {k++;
                                                 printf("numarul nu este prim");
                                                 ok=0;
                                                 }


              if(!k) printf("numarul este prim");
              }
    PROBLEMA 4
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i+=2)
        printf("%d ",i);
    PROBLEMA 5
    int a=0,b=1,c,n;
    scanf("%d",&n);
    if(n==0) printf("0");
    else if(n==1) printf("0, 1");
    else {printf("%d, %d ",a,b);
          for(int i=2;i<=n;i++)
         {
         c=a+b;
         printf(", %d",c);
         a=b;
         b=c;
         }
        }
    PROBLEMA 6
    int pozitive=0,negative=0;
    float b;
    printf("introdu un nr: ");
    scanf("%f",&b);
    while(b)
    {if(b<0) negative++;
    else pozitive++;
    printf("introdu un nr: ");
    scanf("%f",&b);
    }
    printf("%d numere pozitive si %d numere negative",pozitive,negative);

    }
    PROBLEMA 9
    int n,s=0,x=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {x*=i;
        s+=x;
        }
    printf("%d",s);
    }
    PROBLEMA 10
    int n;
    scanf("%d",&n);
    while(n) {
    printf("%d ",n%10);
    n/=10;
    }
}
    PROBLEMA 11
    int i,j;
    printf("  1  2  3  4  5  6  7  8  9  10\n");
    printf("  ----------------------------------------\n");
    for(i=1;i<=10;i++)
    {printf("%2d |",i);
    for(j=1;j<=10;j++)
        printf("%4d",i*j);
    printf("\n");
    }
}

    int x;
    scanf("%d",&x);
    switch(x)
    {case 1 :          {printf("luni"); break;}
     case 2 :          {printf("marti"); break;}
     case 3 :          {printf("miercuri"); break;}
     case 4 :          {printf("joi"); break;}
     case 5 :          {printf("vineri"); break;}
     case 6 :          {printf("sambata"); break;}
     case 7 :          {printf("duminica"); break;}
     default :          printf("eroare");
    }
}
    PROBLEMA 7 SI 8
    int x,k=0;
    char c,space;
    do{
        printf("tastati un numar natural: ");
        scanf("%d",&x);
        if(x<0) k++;
        else {
        printf("Doriti sa continuati? D/N?");
        scanf("%c",&space);
        scanf("%c",&c);
        if(c=='D') ;
        else if(c=='N') break;
            }
    }while(x>=0);
    PROBLEMA 12
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {printf("\n");
        for(int j=1;j<=i;j++)
            printf("%d ",i);
    }
    PROBLEMA 14 a)
    int n,x,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   scanf("%d",&x);
        s+=x;
    }
    printf("media este: %.2f",(float)(s) / n);

    PROBLEMA 14 b)
    int n,x,s=0,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d",&x);
        s+=x;
        i++;
    }
    printf("media este: %.2f",(float)(s) / n);

    PROBLEMA 14 c)
    int n,x,s=0,i=1;
    scanf("%d",&n);
    do{
        scanf("%d",&x);
        s+=x;
        i++;
    }while(i<=n);
        printf("media este: %.2f",(float)(s) / n);
    */
}
