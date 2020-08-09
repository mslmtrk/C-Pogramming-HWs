/* odev4.c
 * Müslüm Türk
 * Adam asmaca oyunu*/
#include <stdio.h>

int main(){

//Kelimeler: KUTU,PARA,KARA,YARA,KOYU
char kutu1='k', kutu2='u', kutu3='t', kutu4='u';//kelimeleri harf harf değişkenlere atıyoruz
char para1='p', para2='a', para3='r', para4='a';
char kara1='k', kara2='a', kara3='r', kara4='a';
char yara1='y', yara2='a', yara3='r', yara4='a';
char koyu1='k', koyu2='o', koyu3='y', koyu4='u';

char a1='_',a2='_',a3='_',a4='_'; //kullanıcının girdiği harfleri bu değişkenlere atayacağız
char harf; //kullanıcının girdiği harf olarak kullanıcağız
int kelime;// kullanıcının kelime seçmesini sağlayacağız
int i=1;// döngüde kullanıcağız
int buldu=1;//kelimeyi bulamazsa son kez tahmin etmesini isticeğiz

printf("Baslamak icin 1-5 arasi bir sayi giriniz:"); //kullanıcıya komut veriyoruz
scanf("%d",&kelime);
printf("Adam asmaca oyunu dort harfli kelime ile baslamistir.\n");//bilgi veriyoruz
printf("_ _ _ _\n");

switch(kelime){ //girdiği rakama göre kelime seciyoruz
case 1://kutu
	while(i<5){ //kullanıcıdan 4 harf alıyoruz
	 
	 printf("Lutfen %d. hakkinizi giriniz:",i);
	 scanf(" %c",&harf);
	 
	 if(harf==kutu1)//harf hangi koşula uyuyorsa harfi o değişkene atıyoruz.
	  a1=harf;
	 else if(harf==kutu2){
	  a2=harf;
	  a4=harf;}
	 else if(harf==kutu3){
	  a3=harf;}
	
	 
	   
	 printf("\n%c %c %c %c\n",a1,a2,a3,a4);// tek tek harf	Alerin durumunu yazdırıyoruz.
	
	if(a1==kutu1 && a2==kutu2 && a3==kutu3 && a4==kutu4)//kelimeyi tahmin etmeden bulursa kazandınız yazdırıyoruz.
	{
	printf("Tebrikler, KAZANDINIZ!");
	buldu=0;//alttaki bloğa girmesini engelliyoruz eğer kazandıysa.
	break;
	}
	i++;
	}
	if(buldu==1){//kelimeyi harfle bulamadıysa son kez tahmin etmesini istiyoruz.
	printf("Simdi kelimeyi tahmin etmelisiniz.\n");
	printf("Lutfen tahmin ettiginiz kelimenin 1. harfini giriniz: ");//komut veriyoruz
	scanf(" %c", &harf);//harfi alıyoruz
	a1=harf;//değişkene atıyoruz
	printf("Lutfen tahmin ettiginiz kelimenin 2. harfini giriniz: ");
	scanf(" %c", &harf);
	a2=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 3. harfini giriniz: ");
	scanf(" %c", &harf);
	a3=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 4. harfini giriniz: ");
	scanf(" %c", &harf);
	a4=harf;
	
	if(a1=='k' && a2=='u' && a3=='t' && a4=='u')//harfler kelimeyle örtüşürse kazandınız yazdırıyoruz
	printf("\nTebrikler,KAZANDINIZ");
	else //harfler örtüşmüyorsa kaybettiniz yazdırıyoruz
	printf("Maalesef bilemediniz. KAYBETTINIZ!");
	}
	break;//sonraki kelimelere geçmesini engelliyoruz.

case 2://para
	while(i<5){
	 printf("Lutfen %d. hakkinizi giriniz:",i);
	 scanf(" %c",&harf);
	 
	 if(harf==para1)
	  a1=harf;
	 else if(harf==para2){
	  a2=harf;
	  a4=harf;}
	 else if(harf==para3){
	  a3=harf;}
	  
	 printf("\n%c %c %c %c\n",a1,a2,a3,a4);
	
	if(a1==para1 && a2==para2 && a3==para3 && a4==para4)
	{
	printf("Tebrikler, KAZANDINIZ!");
	buldu=0;
	break;
	}
	++i;
	}
	if(buldu==1){
	printf("Simdi kelimeyi tahmin etmelisiniz.\n");
	printf("Lutfen tahmin ettiginiz kelimenin 1. harfini giriniz: ");
	scanf(" %c", &harf);
	a1=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 2. harfini giriniz: ");
	scanf(" %c", &harf);
	a2=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 3. harfini giriniz: ");
	scanf(" %c", &harf);
	a3=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 4. harfini giriniz: ");
	scanf(" %c", &harf);
	a4=harf;
	
	if(a1=='p' && a2=='a' && a3=='r' && a4=='a')
	printf("\nTebrikler,KAZANDINIZ");
	else 
	printf("Maalesef bilemediniz. KAYBETTINIZ!");
	}
	break;
	
case 3://kara
	while(i<5){
	
	 printf("Lutfen %d. hakkinizi giriniz:",i);
	 scanf(" %c",&harf);
	 
	 if(harf==kara1)
	  a1=harf;
	 else if(harf==kara2){
	  a2=harf;
	  a4=harf;}
	 else if(harf==kara3){
	  a3=harf;}
	  
	 printf("\n%c %c %c %c\n",a1,a2,a3,a4);
	
	if(a1=='k' && a2=='a' && a3=='r' && a4=='a')
	{
	printf("Tebrikler, KAZANDINIZ!");
	buldu=0;
	break;
	}
	i++;
	}
	if(buldu==1){
	printf("Simdi kelimeyi tahmin etmelisiniz.\n");
	printf("Lutfen tahmin ettiginiz kelimenin 1. harfini giriniz: ");
	scanf(" %c", &harf);
	a1=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 2. harfini giriniz: ");
	scanf(" %c", &harf);
	a2=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 3. harfini giriniz: ");
	scanf(" %c", &harf);
	a3=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 4. harfini giriniz: ");
	scanf(" %c", &harf);
	a4=harf;
	
	if(a1==kara1 && a2==kara2 && a3==kara3 && a4==kara4)
	printf("\nTebrikler,KAZANDINIZ");
	else 
	printf("Maalesef bilemediniz. KAYBETTINIZ!");
	}
	break;
	
case 4://yara
	while(i<5){
	
	 printf("Lutfen %d. hakkinizi giriniz:",i);
	 scanf(" %c",&harf);
	 
	 if(harf==yara1)
	  a1=harf;
	 else if(harf==yara2){
	  a2=harf;
	  a4=harf;}
	 else if(harf==yara3){
	  a3=harf;}
	  
	 printf("\n%c %c %c %c\n",a1,a2,a3,a4);
	
	if(a1==yara1 && a2==yara2 && a3==yara3 && a4==yara4)
	{
	printf("Tebrikler, KAZANDINIZ!");
	buldu=0;
	break;
	}
	i++;
	}
	if(buldu==1){
	printf("Simdi kelimeyi tahmin etmelisiniz.\n");
	printf("Lutfen tahmin ettiginiz kelimenin 1. harfini giriniz: ");
	scanf(" %c", &harf);
	a1=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 2. harfini giriniz: ");
	scanf(" %c", &harf);
	a2=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 3. harfini giriniz: ");
	scanf(" %c", &harf);
	a3=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 4. harfini giriniz: ");
	scanf(" %c", &harf);
	a4=harf;
	
	if(a1=='y' && a2=='a' && a3=='r' && a4=='a')
	printf("\nTebrikler,KAZANDINIZ");
	else 
	printf("Maalesef bilemediniz. KAYBETTINIZ!");
	}
	break;
	
case 5://koyu
	while(i<5){
	 printf("Lutfen %d. hakkinizi giriniz:",i);
	 scanf(" %c",&harf);
	 
	 if(harf==koyu1)
	  a1=harf;
	 else if(harf==koyu2)
	  a2=harf;
	 else if(harf==koyu3)
	  a3=harf;
	 else if(harf==koyu4){
	  a4=harf;}
	  
	 printf("\n%c %c %c %c\n",a1,a2,a3,a4);
	
	if(a1==koyu1 && a2==koyu2 && a3==koyu3 && a4==koyu4)
	{
	printf("Tebrikler, KAZANDINIZ!");
	buldu=0;
	break;
	}
	i++;
	}
	if(buldu==1){
	printf("Simdi kelimeyi tahmin etmelisiniz.\n");
	printf("Lutfen tahmin ettiginiz kelimenin 1. harfini giriniz: ");
	scanf(" %c", &harf);
	a1=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 2. harfini giriniz: ");
	scanf(" %c", &harf);
	a2=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 3. harfini giriniz: ");
	scanf(" %c", &harf);
	a3=harf;
	printf("Lutfen tahmin ettiginiz kelimenin 4. harfini giriniz: ");
	scanf(" %c", &harf);
	a4=harf;
	
	if(a1=='k' && a2=='o' && a3=='y' && a4 =='u')
	printf("\nTebrikler,KAZANDINIZ");
	else 
	printf("Maalesef bilemediniz. KAYBETTINIZ!");
	}
	break;
	

	

}
	return 0;
}
