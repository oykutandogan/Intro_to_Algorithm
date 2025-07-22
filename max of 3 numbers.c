//Program that finds the largest of 3 numbers entered.

#include <stdio.h>
#include <conio.h>


int main()
{ 
    int a,b,c,max;
    
    printf(" 3 tane sayi giriniz : \n");  
      scanf("%d %d %d",&a,&b,&c); 
     
      if(a>b){
              
           if(a>c)
                  {
                   max = a;
                   }
                   else
                   {
                        max = c;
                   }
           }
      else 
           {
              if(b>c)
                  {
                   max = b;
                   }
                   else 
                   {
                        max = c;
                   }
         
           }
           
           printf ("Girilen en buyuk sayi %d", max);
}