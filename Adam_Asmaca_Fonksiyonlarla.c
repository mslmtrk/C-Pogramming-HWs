/*odev51.c
 * Müslüm Türk
 * Fonksiyonlar ile adam asmaca oyunu*/

#include <stdio.h>
#include <time.h>
#include <stdbool.h>
//afrikalı sadakat kahvaltı bilgisayar kalem gökyüzü yıldız abonelik aksesuar mancınık
char kelimeler[10][11]={"afrikali", "kahvalti", "sadakat", "bilgisayar", "kalem", "gokyuzu", "yildiz", "abonelik", "aksesuar", "mancinik"};//kelimeler diziye atandı
char kelimeler2[10][11]={"________", "________", "_______", "__________", "_____", "_______", "______", "________", "________", "________"};//girilen harf varsa veya yoksa bu dizi değiştirilip yazdırılacak
char harf;//kullanıcıdan alıncak harf
int k,i;//k kelime belirlemek için, i döngüler için
int count=0;//ilk a hakta kelimeyi bildimi diye kontrol eden sayaç
int count2=0;//ilk a hakta bilemezse son kelime tahmin hakkında bildimi diye kontrol eden sayaç
int a=0,b=0;//a kelimenin uzunluğu, b farklı harf sayısı

bool varmi(char x);//harf kelimede var mı kontrol eder
void bildi();//kelimedeki tüm harfler girilirse kazandınız yazar
void kaybet();//kaybettiniz yazar
void bilmedi();//ilk a hakta bilemezse son tahmin kelimeyi alır

int main()
{	
	srand(time(0)); //rand'ın farklı sayılar dönmesi için
	k=rand()%10;//rastgele kelime belirlenir

	if(k==0) //bu ifler kelimelerdeki farklı harf sayısını b'ye atar.
	b=6;
	else if(k==1)
	b=7;
	else if(k==2)
	b=5;
	else if(k==3)
	b=8;
	else if(k==4)
	b=5;
	else if(k==5)
	b=6;
	else if(k==6)
	b=5;
	else if(k==7)
	b=8;
	else if(k==8)
	b=6;
	else if(k==9)
	b=7;
	
	char kontrol;//kullanıcı aynı harfi girerse sayacı arttırmamak için kullacağım yardımcı değişken
	
	for(i=0;kelimeler[k][i]!='\0';i++){ //kelime uzunluğunu bulur
	a++;}
	
	printf("Rastgele bir kelime secilmistir, kelimeniz %d harflidir.\n",a);
	printf("Turkce karakter girmeyiniz ve kucuk harf kullaniniz!\n");
	printf("Tahmin hakkiniz: %d\n\n",a);
			
	for(i=0;i<a;i++) //girilen harf önceki harfle aynı değilse ve kelimede var ise sayacı 1 arttırıcak
	{
	printf("Lutfen %d. hakkinizi girin:",i+1);	
	scanf(" %c",&harf);
		if(varmi(harf)){
			if(harf != kontrol){
			count++;
			kontrol=harf;
			for(int m=0;m<a;m++){//kelimede harf varsa 2. dizideki yere harfi atayacağız ve diziyi yazdıracağız
				if(harf==kelimeler[k][m]){
				kelimeler2[k][m]=harf;
				for(int m=0;m<a;m++)
				printf("%c ",kelimeler2[k][m]);
				}
			}
			printf("\n");//dizideki kelimeyi yazdıktan sonra alt satıra geçicek
			}
		}
		else{ //harf yoksa kelime bulunan harfler kadarını yazdırıcak
		for(int m=0;m<a;m++){
		printf("%c ",kelimeler2[k][m]);}
		printf("\n");}
	}
	
	bildi();//count değişkeni b'ye yani farklı harf sayısına ulaşırsa kazandınız basıcak
	bilmedi();//count değişkeni b'ye yani farklı harf sayısına ulaşamazsa son bir kelime tahmin hakkı vericek
	kaybet();//yukarıdaki iki fonksiyon gerçekleşmezse kaybettiniz basıcak
	
	return 0;
}


bool varmi(char x){//girilen harf kelimede varmı diye kontrol edecek fonksiyon
	for(int l=0;l<a;l++){
		if(x==kelimeler[k][l])
		return true;}
	return false;
}
 
void bildi(){	//kullanıcı kelimede olan tüm harfleri bulursa kazandınız yazdıracak fonksiyon
	if(count>=b){
		printf("\nKAZANDINIZ!\n");
		printf("Kelime: ");
		for(i=0;i<a;i++)//kelimeyi basıcak
			printf("%c",kelimeler[k][i]);
	}
	
}
	
void bilmedi(){	//kullanıcı girdiği harflerle kelimeyi bulamazsa son bir kelime tahmin hakkı alacak fonkksiyon
	char tahmin;
	if(count!=b){
	printf("\nBulamadiniz, kelimeyi tahmin edin: ");
		for(i=0;i<a;i++){//girilen harfler kelimeyle uyuşursa count2 değişkeni 1 artıcak
			scanf(" %c",&tahmin);
			if(tahmin==kelimeler[k][i]){
			count2++;}
	}}
	if(count2>=b) //count2 değişkeni b'ye ulaşırsa kazandınız basıcak
	printf("\nKAZANDINIZ!\n");
	
}

void kaybet(){	//girilen harflerle kelimeyi bulamaz ve son kelime tahmin hakkındada bulamazsa kaybettiniz yazdırıcak.
	if(count!=b && count2<b){
		printf("KAYBETTINIZ!\n");
		printf("Kelime: ");
		for(i=0;i<a;i++)//kelimeyi basıcak
		printf("%c",kelimeler[k][i]);
	}
}
