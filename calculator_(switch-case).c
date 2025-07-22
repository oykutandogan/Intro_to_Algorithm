 // Hesap makinesi 
 
#include <stdio.h>
#include <conio.h>

int main() 
{
int secim,sayi1,sayi2;
    {
		printf("\n 1- Toplama\n 2- Cikarma\n 3- Carpma \n 4- Bolme \n 5- Cikis\n\n Seciniz:");
		scanf("%d",&secim);
	
		switch(secim){
			case 1:{
				printf("\n sayi1: "); scanf("%d",&sayi1);
				printf(" sayi2: "); scanf("%d",&sayi2);
				printf(" sayi1 + sayi2 : %d\n",sayi1 + sayi2);
				break;
			}
			case 2:{
				printf("\n sayi1: "); scanf("%d",&sayi1);
				printf(" sayi2: "); scanf("%d",&sayi2);
				printf(" sayi1 - sayi2 : %d\n",sayi1 - sayi2);
				break;
			}
			case 3:{
				printf("\n sayi1: "); scanf("%d",&sayi1);
				printf(" sayi2: "); scanf("%d",&sayi2);
				printf(" sayi1 x sayi2 : %d\n",sayi1 * sayi2);
				break;
			}
		    case 4:{
		    	printf("\n sayi1: "); scanf("%d",&sayi1);
				printf(" sayi2: "); scanf("%d",&sayi2);
				printf(" sayi1 / sayi2 : %d\n",sayi1 / sayi2);
				break;
			}
			case 5:{
				printf(" \n Denediginiz icin tesekkurler");
				return 0;
				break;
			}
			default: {
				printf(" lutfen tekrar gecerli bir secim yapiniz!");
				break;
			}
		}
	}
}