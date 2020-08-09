/*lab6-2.c
 * Müslüm Türk
 * Adam asmaca oyunu pointerlar ile*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 
int flag;
void kazandimi(char bos[], char *kelime, int boyut);

int main(int argc, char **argv){
	char *kelimeler[]={"harita","oda","mehmetcik","zar","muhendis","kabak","bilgisayar","sandalye","karincik","kolay"};
	
	srand(time(0)); //rand'ın farklı sayılar dönmesi için
	int k=rand()%10; //rastgele kelime belirlenir
	int i,j; 
	int uz=strlen(kelimeler[k]); // kelimenin uzunluğu uz değişkenine atanır
	char *arr=kelimeler[k]; //arr pointer dizisine kelime atanır
	char harf;//kullanıcıdan alınacak harf
	
	printf("Rastgele bir kelime secilmistir, kelimeniz %d harflidir.\n",uz);
	printf("Turkce karakter girmeyiniz ve kucuk harf kullaniniz!\n");
	printf("Tahmin hakkiniz: %d\n\n",uz);
	
	char bos[uz]; //boş bir dizi atadık
	for(i=0;i<uz;i++)//dizi '_' ile doldurduk
		bos[i]='_';
	
	for(i=0;i<uz;i++)//dizinin uzunluğu kere harf alıcaz
	{
		printf("\nLutfen %d. hakkinizi giriniz: ",i+1);
		scanf(" %c",&harf);
		for(j=0;j<uz;j++) // aldığımız harf var ise bos dizisine atayacağız
		{
			if(harf==arr[j])
				bos[j]=harf;			
		}		
		for(int a=0;a<uz;a++) //harf aldıktan sonra durumu belli etmek için bos dizisini yazdıracağız
		printf("%c",bos[a]);
			
	}
	
	kazandimi(bos, arr, uz); //kelimeyi bulmuşmuş mu diye kontrol etmek için kazandimi fonksiyonuna gönderiyoruz
	
	if(flag==0){ //harfler ile bulamazsa son bir kelime yazdıracak
		char tahmin;
		int count=0;
		
		printf("\nBulamadiniz, kelimeyi tahmin edin: "); 
		for(i=0;i<uz;i++){ //uzunluk sayısı kadar harf alıcak
			scanf(" %c",&tahmin);
			if(tahmin==arr[i])//harfler örtüşüyorsa sayaç bir artıcak
			count++;
		}
	if(count==uz)//sayaç uzunluğa eşit olursa kazandınız yazdırıcak
	printf("KAZANDINIZ!");
	else
	printf("KAYBETTINIZ!");//sayaç uzunluğa eşit olmazsa kaybettiniz yazdırıcak
	}
		
	return 0;
}

void kazandimi(char bos[], char *kelime, int boyut){
int count=0;
	for(int i=0;i<boyut;i++){ //bos dizisindeki harf kelimedeki harfle örtüşüyorsa sayaç bir artar
		if(bos[i]==kelime[i])
			count++;
	}	
	
	if(count==boyut){ //sayaç uzunluğa eşit olursa yani kelimedeki tüm harfler girilmişse kazandınız yazdırır
	printf("\nKAZANDINIZ!");
	flag=1;}
	else{
	flag=0;}
}

