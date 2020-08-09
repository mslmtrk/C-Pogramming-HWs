/* odev3.c
 * Müslüm Türk
 * Vücut kitle endeksi hesaplayan program*/

#include <stdio.h>

int main()
{
	float a,b,c; // a,b ve c değişkenlerini tanımladık
	
	printf("Lutfen kilonuzu giriniz: "); //kullanıcıya komut verdik
	scanf("%f",&a); //kilo değerini aldık
	printf("Lutfen boyunuzu giriniz: ");
	scanf("%f",&b); //boy değerini aldık
	
	c=a/(b*b); // vücut kitle indeksini formülle hesapladık
	printf("Vucut kitle endeksiniz %f, ",c); //endeksin değerini yazdırır
	
	if (c<18.5) //vücut kitle indeksi aralığını koşul olarak girdik
	printf("Zayif."); //koşula göre sonucu yazdırdık
	else if (18.5<c&&c<24.9)
	printf("Normal kilolu.");
	else if (25<c&&c<29.9)
	printf("Fazla kilolu.");
	else if (30<c&&c<39.9)
	printf("Obez.");
	else if (40<c)
	printf("Ileri derecede obez (morbid obez).");
	
	
	
	
	
	
	
	
	return 0;
}

