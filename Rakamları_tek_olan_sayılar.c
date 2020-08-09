/*soru2.c
 * Müslüm Türk
 * Tüm rakamları tek olan sayıları bulan program*/
#include <stdio.h>

int main(int argc, char **argv)
{
int a=100,b=400,c,d,sayi=0;  //değişkenleri girdik
	
while(a<b){ // 100-400 arasındaki sayılarla döngü başlattık
	
	if(a%2==1){  //sayı tek ise 10'a bölüp yeni değişkene atadık
	c=a/10;
		if(c%2==1){ // tekrar tek ise 10'a bölüp yeni değişkene atadık
		d=c/10;
			if(d%2==1){ // son basamakta tek ise sayıyı yazdırdık
			printf("%d, ",a);
			sayi+=1; }
		}
	}

a++;// a sayısını 1 arttırıp yeni bir sayıya geçtik
}

	printf("\nKosula uyan toplam sayi: %d",sayi); //rakamları tek olan sayıların sayısını yazdırdık
	return 0;
}

