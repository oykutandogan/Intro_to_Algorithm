#include <stdio.h>

int main()
{
   int dizi[50], x, y, pw, t;

   printf("ELEMANA AIT DEGERLERI GIRINIZ\n");

   for ( x = 0 ; x < 50 ; x++ )
      scanf("%d", &dizi[x]);

   for ( x = 0 ; x < 49 ; x++ )
   {
      pw = x;

      for ( y = x + 1 ; y < 50 ; y++ )
      {
         if ( dizi[pw] > dizi[y] )
            pw = y;
      }
      if ( pw != x )
      {
         t = dizi[x];
         dizi[x] = dizi[pw];
         dizi[pw] = t;
      }
   }

   printf("Selection Sort :\n");

   for ( x = 0 ; x < 50 ; x++ )
      printf("%d\n", dizi[x]);

   return 0;
}