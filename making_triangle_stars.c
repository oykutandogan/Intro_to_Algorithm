#include <stdio.h>
int main()
{
int bosluk,satir,yildiz;

for(satir=1;satir<=19;satir++)
{
    for(bosluk=1;bosluk<=(19- satir);bosluk++){
        printf(" ");}
    for(yildiz=1;yildiz<=((2*satir)-1);yildiz++){
        printf("*");}   
printf("\n");
}
}