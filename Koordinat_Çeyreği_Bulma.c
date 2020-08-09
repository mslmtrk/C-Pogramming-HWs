/* odev1b.c
 * Müslüm Türk
 * Noktanın koordinat çeyreğini bulan program */

#include <stdio.h>

int main()
{
	float x,y; //x ve y değişkenlerini tanımladık
	int a;     //a değişkenini tanımladık
	
	printf("lutfen x koordinat degerini giriniz: "); //kullanıcıya komut verdik
	scanf("%f",&x);//kullanıcıdan x değerini aldık
	printf("lutfen y koordinat degerini giriniz: ");
	scanf("%f",&y);//kullanıcıdan y değerini aldık
	
	if (x>0&&y>0) 	//noktanın işaretlerine göre koşullar tanımlayıp değişkene atadık.
	a=1;
	else if (x<0&&y>0)
	a=2;
	else if (x<0&&y<0)
	a=3;
	else if (x>0&&y<0)
	a=4;
	
	switch(a){   // a değişkeni hangi koşulu gösteriyorsa ona göre alttaki işlemlerden birini yapıcak.
	case 1:
	printf("\n(%.1f,%.1f) noktasi birinci bolgededir.",x,y); //bölgeyi yazdırıcak
	break; //birden fazla işlemin yapılmasını engellicek
	
	case 2:
	printf("\n(%.1f,%.1f) noktasi ikinci bolgededir.",x,y);
	break;
	
	case 3:
	printf("\n(%.1f,%.1f) noktasi ucuncu bolgededir.",x,y);
	break;
	
	case 4:
	printf("\n(%.1f,%.1f) noktasi dorduncu bolgededir.",x,y);
	break;
	
}	
	return 0;
}

