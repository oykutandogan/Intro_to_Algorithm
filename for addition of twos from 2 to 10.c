#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,sayac ;
    int toplam=0;
    
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    
    for (sayac=i ; sayac<=j ; sayac = sayac+k)
    {
        toplam = sayac+ toplam;
    }
        printf("%d \n",toplam);
    
    return 0 ;
} 