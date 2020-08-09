/* Koninin hacmini bulma
 * Müslüm Türk */
#include <stdio.h>

int main()
{
	int r,h,alan;
	
	printf("lutfen yaricap degerini girin ");
	scanf("%d",&r);
	
	printf("\nlutfen yuksekligi girin ");
	scanf("%d",&h);
	
	alan=r*r*h*1/3*3,14;
	
	printf("alan = %d",alan);
	
	
	return 0;
}

