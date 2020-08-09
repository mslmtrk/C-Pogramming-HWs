/*odev53.c
 * Müslüm Türk
 * Girilen sayinin fonksiyonlar ile parindrom olup olmadığını kontrol eden program */

#include <stdio.h>
char dizim[]="sas"; //Global diziyi atadık
int b,i=0;//uzunluk için b, döngüler için i
int uzunluk(char dizi[]); //uzunluk bulan fonk.
int esitmi(char dizi[],int boyut);//parindrom kontrolü yapan fonk.

int main()
{
	b=uzunluk(dizim);
	printf("%d",esitmi(dizim,b));
	
	return 0;
}

int uzunluk(char dizi[]){
	int a; 
	for(i=0;dizi[i]!='\0';i++){//son karakter olan \0'a gelene kadar a'yı bir arttırır ve uzunluk bulunur
	a++;}
	i=0;//i global olduğundan tekrar sıfırlanır
	return a;
}

int esitmi(char dizi[],int boyut){
	if(dizi[i] != dizi[boyut-1-i]){ //dizinin ilk ve son terimi eşit mi diye kontrol eder
	return -1;}//eşit değilse parindrom olmaz -1 döner.
	i++;//sonraki baştan ve sondan iki terime bakmak için i bir artar 
	
	if(i==boyut/2){ //i dizinin ortasına kadar gelebilirse dizi parindromdur 1 döner
	return 1;}
	else{
	return esitmi(dizi,b);}//tekrar aynı diziye i'nin bir artmış haliyle girer
		
}
