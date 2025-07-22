#include <stdio.h>
#include <locale.h>
#include <string.h>


main()
{
    int uzunluk;
    char kelime[15];
    printf("Bir kelime girin: ");
      gets(kelime);
      uzunluk=strlen(kelime);
      
    buyukunluuyumu(kelime);
    kucukunluuyumu(kelime);
}

buyukunluuyumu()
{char kelime[15];
      int uzunluk,i,kalinSesli=0,inceSesli=0;
     
      uzunluk=strlen(kelime);
      for(i=0;i<uzunluk;i++){
if(kelime[i]=='a'||kelime[i]=='o' ||kelime[i]=='u'||kelime[i]=='ı'){
        kalinSesli+=1; }
       if(kelime[i]=='e'||kelime[i]=='i' ||kelime[i]=='ü'||kelime[i]=='ö'){
        inceSesli+=1; }  }
   if(kalinSesli==0||inceSesli==0)
    printf("%s Kelimesi Buyuk Unlu Uyumuna Uyuyor.",kelime);
   else
    printf("%s Kelimesi Buyuk Unlu Uyumuna Uymuyor.",kelime);
}

kucukunluuyumu()
{
setlocale(LC_ALL, "Turkish"); 
 char kelime[15];
 int uzunluk,i,k,ses1=0,ses2=0,ses3=0; 


uzunluk=strlen(kelime); 
for(i=0;i<uzunluk;i++){
if(kelime[i]=='a'||kelime[i]=='e'||kelime[i]=='ı'||kelime[i]=='i'){ 
    k=i+1;
for(k;k<uzunluk;k++){
 if(kelime[k]=='a'||kelime[k]=='e'||kelime[k]=='ı'||kelime[k]=='i') {
ses1++;
} 
 else if(kelime[k]=='o'||kelime[k]=='ö'||kelime[k]=='u'||kelime[k]=='ü')
 {ses3++;
} 
} 
break; 
 }
if(kelime[i]=='o'||kelime[i]=='ö'||kelime[i]=='u'||kelime[i]=='ü'){
k=i+1;
for(k;k<uzunluk;k++){
if(kelime[k]=='a'||kelime[k]=='e'||kelime[k]=='u'||kelime[k]=='ü') {
ses2++;
} 
else if(kelime[k]=='o'||kelime[k]=='ö'||kelime[k]=='ı'||kelime[k]=='i')
{ses3++;
}} 
break;}}
if(ses1>0&&ses3==0){
 printf("%s kelimesi küçük ünlu uyumuna uyuyor.",kelime);}
 else if(ses2>0&&ses3==0){
 printf("%s kelimesi küçük ünlu uyumuna uyuyor.",kelime);}
 else{
 printf("%s kelimesi küçük ünlu uyumuna uymuyor.",kelime);}
getch();
 return 0;
}
