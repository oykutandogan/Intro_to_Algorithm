#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,sayac ;
    
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    
    for (sayac=i ; sayac<=j ; sayac = sayac+k)
    {
        printf("%d \n",sayac);
    }
    return 0 ;
} 