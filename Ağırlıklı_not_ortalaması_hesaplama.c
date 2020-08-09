/* Ağırlıklı not ortalaması hesaplama
 * Müslüm Türk */

#include <stdio.h>

int main () {
	
	int n1,s1,n2,s2,n3,s3,n4,s4,n5,s5,ortalama;
	
	printf("Sirasiyla 1. ders notunu ve akts sayisini girin\n");
	scanf("%d%d",&n1,&s1);
	
	printf("Sirasiyla 2. ders notunu ve akts sayisini girin\n");
	scanf("%d%d",&n2,&s2);
	
	printf("Sirasiyla 3. ders notunu ve akts sayisini girin\n");
	scanf("%d%d",&n3,&s3);
	
	printf("Sirasiyla 4. ders notunu ve akts sayisini girin\n");
	scanf("%d%d",&n4,&s4);
	
	printf("Sirasiyla 5. ders notunu ve akts sayisini girin\n");
	scanf("%d%d",&n5,&s5);
	
	ortalama=(n1*s1+n2*s2+n3*s3+n4*s4+n5*s5)/(s1+s2+s3+s4+s5);
	
	printf("not ortalamaniz = %d",ortalama);
	
	
	
	
	return 0;
}

