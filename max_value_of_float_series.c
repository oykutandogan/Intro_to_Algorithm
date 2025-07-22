#include<stdio.h>

float maksimum_bul( float [ ], int );

 void main()
{

    float sayilar[ 8 ] = {  12.36, 4.715, 6.41, 13,1.414, 1.732, 2.236, 2.645 };
    float max, min, ortalama;
    
    max = maksimum_bul( sayilar, 8 );
    printf( "Maksimum: %.2f\n", max );

    return ;
}


float maksimum_bul( float dizi[ ], int eleman_sayisi )
{
    int i;
    float max;
    max = dizi[0];
    for( i = 1; i < eleman_sayisi; i++ ) {
        if( max < dizi[ i ] )
            max = dizi[ i ];
    }
    return max;
}