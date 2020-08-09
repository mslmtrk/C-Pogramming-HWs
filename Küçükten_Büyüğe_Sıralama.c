/*lab6-4.c
 * Müslüm Türk
 * Diziyi küçükten büyüğe sıralayıp en küçük değeri yazdıran program*/

#include <stdio.h>
void swapWithMin(int *px, int *py) {
	if(*py>*px){ //ilk indisdeki değer ikinci indisdeki değerden büyükse değerler yer değiştirir
		int temp=*px;
		*px=*py;
		*py=temp;
	}
}

int main(int argc, char **argv){
	int a[] = {51,81,34,66,51,72,12,30,83,39,
	71,89,100,75,100,80,3,92,19,25,
	100,17,34,18};
	int boyut=sizeof(a)/sizeof(int);//dizinin boyutu bulunur
	
	int i,j;
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut-1-i;j++)
		swapWithMin(&a[j+1],&a[j]);//iki indisteki değeri fonksiyona göndererek karşılaştırır
	}	
		
	printf("minimum: %d", a[0]);//sıralanmış dizinin ilk indisdeki değeri yani en küçük değeri yazdırılır

	return 0;
}

