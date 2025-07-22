#include <stdio.h>
#include <ctype.h>

main ()
{
    char metin [100];

	harfsay(metin);
}

harfsay() {
	char metin [100];
	int i, kucukharf=0, buyukharf=0, topharf=0 , rakam=0;
	printf("\n bir metin giriniz\n");
	gets(metin);
	for(i=0; metin[i]!= '\0'; i++) {
	    
		if(islower(metin[i]))
			kucukharf++;
		else if (isupper(metin[i]))
			buyukharf++;
	}
topharf= kucukharf + buyukharf ;
	printf("Girilen metin icerisinde %d kucuk %d buyuk harf ve toplam %d harf bulunur. ", kucukharf,buyukharf,topharf);
}