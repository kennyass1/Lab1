#include <stdio.h>
#include <math.h>
int delta(int x,int y,int z)
{
   return y*y-4*x*z;
}

void rezultat(int a,int b,int c,float *x,float *y)
{
  float d=sqrt(delta(a,b,c));
  if(d>=0)
  {
  *x=((-b)+d)/2*a;
  *y=((-b)-d)/2*a;
  }
}

int main()
{
  int a,b,c;
  float x1,x2;
  scanf("%d%d%d",&a,&b,&c);
  printf("Ecuatia este: %d*x^2 + %d*x + %d \n",a,b,c);
  if(delta(a,b,c)<0) printf("Ecuatia nu are rezolvare in multimea numerelor reale \n");
  else if(delta(a,b,c)==0) {rezultat(a,b,c,&x1,&x2);
                            printf("x1 = x2 = %.2f \n",x1 );
                            }
  else {rezultat(a,b,c,&x1,&x2);
        printf("x1= %.2f , x2= %.2f",x1,x2 );
        }


}
