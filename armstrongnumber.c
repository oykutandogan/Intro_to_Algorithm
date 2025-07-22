#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int number, sayi, remainder, sonuc = 0, n = 0 ;

    printf("Enter an integer: ");
    scanf("%d", &number);

     sayi = number;
    
    while (sayi != 0)
    {
        sayi /= 10;
        ++n;
    }
    
int ArmstrongNumber(){
    
    sayi = number;

    while (sayi != 0)
    {
        remainder = sayi%10;
        sonuc += pow(remainder, n);
        sayi /= 10;
    }
}

ArmstrongNumber(sayi) ;{

    if(sonuc == number)
        printf("%d Armstrong Sayısıdır.", number);
    else
        printf("%d Armstrong Sayısı değildir.", number);

    return 0;
}}
