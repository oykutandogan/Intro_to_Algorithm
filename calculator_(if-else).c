
//Hesap makinesi (if-else)

#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,sonuc;
	
	char islem;
	printf("HESAP MAKINESI \n");
	printf("Toplamak icin: +\nCikarmak icin: - \nBolmek icin  : / \nCarpmak icin : * \n");
	scanf("%c",&islem);
	if(islem=='+'){
		printf("Toplama islemi \n");
		printf("Lutfen birinci sayiyi giriniz: \t \a");
		scanf("%d",&a);
		printf("Lutfen ikinci sayiyi giriniz : \t \a");
		scanf("%d",& b);
		sonuc = a + b;
		printf("sonuc = %d \n",sonuc);
	}
	else if(islem=='-'){
		printf("Cikarma islemi \n");
		printf("Lutfen birinci sayiyi giriniz: \t \a");
		scanf("%d",&a);
		printf("Lutfen ikinci sayiyi giriniz : \t \a");
		scanf("%d",& b);
		sonuc = a - b;
		printf("sonuc = %d \n",sonuc);
	}
	else if(islem=='*'){
		printf("Carpma islemi \n");
		printf("Lutfen birinci sayiyi giriniz: \t \a");
		scanf("%d",&a);
		printf("Lutfen ikinci sayiyi giriniz : \t \a");
		scanf("%d",& b);
		sonuc = a * b;
		printf("sonuc = %d \n",sonuc);
	}
	else if(islem=='/'){
		printf("Bolme islemi \n");
		printf("Lutfen birinci sayiyi giriniz: \t \a");
		scanf("%d",&a);
		printf("Lutfen ikinci sayiyi giriniz : \t \a");
		scanf("%d",& b);
		sonuc = a / b;
		printf("sonuc = %d \n",sonuc);
	}
	
	
	
	return 0;
}