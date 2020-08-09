/*odev52.c
 * Müslüm Türk
 * Girilen değerin dizideki yerini bulan program binary search(sayı yoksa -1 doner)*/

#include <stdio.h>

int dizi[]={2,5,6,8,10,17,41,49,72,86};//diziyi global olarak tanımladık
int aranan(int x); 

int main(){
	int x;
	printf("Dizideki bir sayiyi girin: ");
	scanf("%d",&x);
	printf("%d",aranan(x));
	
	return 0;
}

int aranan(int x){	
	int bas=0,son=9; //ortalamayı almak için ilk ve son indisi değişkene atadık

	while(son>=bas){
		int orta=(bas+son)/2;//orta indis atandı	
		if(x==dizi[orta]) 
			return orta; //koşul sağlanırsa orta indis dönücek
		else if(x<dizi[orta]) //x orta'dan küçükse
			son=orta-1;//döngü ilerledikçe orta indisi sola kayıcak
		else if(x>dizi[orta])//x orta'dan büyükse
			bas=orta+1;	//döngü ilerledikçe orta indisi sağa kayıcak
}
	return -1; //son indis ilk indisten küçük olduğunda döngü duracak, -1 dönücek
}
