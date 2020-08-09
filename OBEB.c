/*soru7.c
 * Müslüm Türk
 * İki sayının obebini hesaplayan program*/


#include <stdio.h>

int main(int argc, char **argv){
	
int A,B,c,d,e,f; //c:bölüm  d;kalan  e=A ve f=B olacak.

printf("Lutfen A ve B degerlerini girin:"); //komut veriyoruz
scanf("%d %d",&A,&B); //A ve B değerlerini alıyoruz
	if(A==0) // A değeri 0 ise sonuç B olacak.
	printf("OBEB(%d,%d)=%d",A,B,B);
	else if(B==0)//B değeri 0 ise sonuç A olacak.
	printf("OBEB(%d,%d)=%d",A,B,A);
	else //iki sayıda 0 değilse obebi bulacak.
	{e=A;//printf için
	f=B;//printf için
	while(B!=0){
	c=A/B;  //bölüm
	d=A-B*c;//kalan
	A=B;    //A'yı B'ye eşitledik
	B=d;    //B'yi kalana eşitledik
	}
	printf("OBEB(%d,%d)=%d",e,f,A);//sonucu yazdıracak.
	}



	
	return 0;
}

