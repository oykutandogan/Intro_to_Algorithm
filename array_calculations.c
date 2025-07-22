#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,min,max,max2 ;
    float toplam,ort ;
    int dizi[15] ;
    
    toplam =0 ;
    
    for (i=1; i<=15; i++){
        
        dizi[i] = 20 + rand()%40 ;
        printf("%d. sayı : %d\n",i,dizi[i]);
        toplam = toplam + dizi[i] ;
    }
    ort = toplam/15 ;
    
    min = dizi[0];
    max = dizi[1];
    max2 = dizi[1];
    
    for (i=1; i<=15; i++){
        if (min> dizi[i]) {
            min = dizi[i] ;
        }}
    for (i=1; i<=15; i++){
        if (max < dizi[i]) {
            max = dizi[i] ;
        }
        else if (dizi[i] > max2)
            max2 = dizi[i];
    }

printf("Dizinin toplamı :  %f \n",toplam);
printf("Dizinin ortalaması :  %f \n",ort);
printf("En küçük değer :  %d \n",min);
printf("En büyük değer :  %d \n",max);
printf("En büyük ikinci değer :  %d \n",max2);
    return 0;
}
