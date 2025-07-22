#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
int matris[100][2],i,j;

for(i=0;i<100;i++)
{
for(j=0;j<2;j++)
{
matris[i][j]=1+rand()%5;
printf("%d\t",matris[i][j]);
}
printf("\n");
}

return 0;
}