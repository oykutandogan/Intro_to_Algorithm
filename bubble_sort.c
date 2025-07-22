#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {
   
    int gecici,i,j;
    
    int dizi[50];
   
    for(i=0;i<50;i++){
        printf("%d 'nci eleman : ",i+1);
        scanf("%d",&dizi[i]);
    }
   

 printf("\n Sayilarin buyukten kucuge siralanmis hali; \n");

    for(i=0;i<50;i++)
    {
        for(j=0;j<50;j++)
        {
          
            if(dizi[j]>dizi[j+1]){
                                gecici=dizi[j+1];
                                dizi[j+1]=dizi[j];
                                dizi[j]=gecici;         
                                }                                        
        }
    }
 
    for(i=0;i<50;i++){
        printf("-> %d",dizi[i]);
    }
    getch();
    return 0;
}