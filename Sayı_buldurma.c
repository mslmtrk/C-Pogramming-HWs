/*soru5.c
 *Müslüm Türk
 *kullanıcıya x sayısını buldurmaya çalıştığı program*/

#include <stdio.h>

int main(int argc, char **argv)
{
int x=56,y;//x=56 ve y kullanıcının girdiği değer.

printf("N sayisini tahmin etmek icin lutfen 0-100 arasinda bir deger giriniz\n");//ilk komut

for(;;){  //kullanıcı sayıyı bulana kadar sonsuz döngüye soktuk.
scanf("%d",&y);// tahmini aldık
	
	if(y>x) //tahmin fazlaysa büyük yazdırıcak
	printf("Sayidan buyuk bir deger girdiniz.\n");
	else if (y<x) //tahmin az ise küçük yazdırıcak
	printf("Sayidan kucuk bir deger girdiniz.\n");
	else{ //sayıyı ne küçük ne byük girdiyse kazandınız yazdırıcak.
	printf("Sayiyi buldunuz, tebrikler!!!\n");
	break;//sayıyı bulduktan sonra döngüden çıkacak.
	}
printf("Lutfen tekrar N sayisini tahmin etmek icin lutfen 0-100 arasinda bir deger giriniz\n"); //sayıyı bulamadıysa bu komutu vericek.
	
	}
	return 0;
}

