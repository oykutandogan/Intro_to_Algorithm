#include <stdio.h>
int main(){
    int i,sayilar,toplam;
    
    for(sayilar=1;sayilar<=15000;sayilar++){
        toplam=0;
        for(i=1;i<sayilar;i++){
            if(sayilar%i ==0){
            toplam=i+toplam ;}}
        if(toplam == sayilar)
            printf("%d \n",sayilar);
    }

return 0;
}