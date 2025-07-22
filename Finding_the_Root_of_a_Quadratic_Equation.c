#include <stdio.h>
#include <conio.h>
#include <math.h>
 
int main()
{
      float x1,x2;
      int a,b,c,delta;
 
      printf("\n A Degeri :"); scanf("%d",&a);
      printf("\n B Degeri :"); scanf("%d",&b);
      printf("\n C Degeri :"); scanf("%d",&c);
 
      delta = pow(b,2) - 4*a*c;
 
      x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);
 
      if (delta < 0)
            printf("\n Denklemin kökü yoktur.\n");
      else if (delta == 0)
      {
            printf("Denklemin kökleri esittir.\n");
            printf ("X1 = X2 = %.2f",x1);
      }
      else
      {
            printf("\n\nDenklemin Kökleri");
            printf("\n-----------------\n");
            printf("X1 = %.2f\n",x1);
            printf("X2 = %.2f\n",x2);
      }
 
      getch();
}