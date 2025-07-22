#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayac ;
    int carpim=1;
    
    scanf("%d",&i);
    for (sayac = i;sayac>=1;sayac--)
    {
        carpim= carpim*sayac;
    }
    printf("%d",carpim);
    return 0 ;
} 