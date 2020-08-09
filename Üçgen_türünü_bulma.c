/*soru3.c
 * Müslüm Türk
 * Kenar uzunluklarına göre üçgenin türünü bulan program*/

#include <stdio.h>

int main(int argc, char **argv){

int a,b,c;//kenarları girdik
	printf("Lutfen ucgenin ilk kenarini girin:");//komut verdik
	scanf("%d",&a);//1. kenar uzunluğunu aldık
	printf("Lutfen ucgenin ikinci kenarini girin:");
	scanf("%d",&b);//2. kenar uzunluğunu aldık
	printf("Lutfen ucgenin ucuncu kenarini girin:");
	scanf("%d",&c);//3. kenar uzunluğunu aldık

	if(a+b>c && a+c>b && c+b>a && a-b<c && a-c<b && b-c<a && a>0 && b>0 && c>0){//Üçgen olma şartına uyuyorsa...
		if(a==b && b==c && a==c) //kenarlar eşitse.
		printf("Ucgen gecerli ve eskenardir.");
		else if((a==b && a!=c && b!=c) || ( a==c && a!=b && c!=b) || (b==c && b!=a && c!=a))//kenarlardan sadece ikisi eşitse.
		printf("Ucgen gecerli ve ikizkenardir.");
		else//kenarlar eşit değilse.
		printf("Ucgen gecerli ve cesitkenardir.");
	
	}
	else //Üçgen olma şartına uymuyorsa geçersizdir yazdırıcak.
	printf("Ucgen gecersizdir.");
	
	return 0;
}

