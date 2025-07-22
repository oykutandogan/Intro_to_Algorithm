#include <stdio.h>
#include <math.h>

float hesap(float veri[]);

int main()
{
    int i;
    float veri[10];

    printf("10 eleman giriniz: ");
    for(i=0; i < 10; ++i)
        scanf("%f", &veri[i]);

    printf("\nStandart Sapması = %.6f", hesap(veri));

    return 0;
}

float hesap(float veri[])
{
    float sum = 0.0, mean, standardsap = 0.0;

    int i;

    for(i=0; i<10; ++i)
    {
        sum += veri[i];
    }

    mean = sum/10;

    for(i=0; i<10; ++i)
        standardsap += pow(veri[i] - mean, 2);

    return sqrt(standardsap/10);
}