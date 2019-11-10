#include<stdio.h>
#include<stdlib.h>

int pangkat (int x, int y)
{if (y==0){
 		return 1 ;
	 } //rekursif
	 else {
	 	return x*pangkat (x,y-1);
	 }
}

main()
{ 
	int x,y;
	int hasil=1;
	int i=0;
	
	printf("bilangan pokok :");
	scanf("%d",&x);
	printf("Masukan bilangan pangkat :");
	scanf("%d",&y);
	printf("Hasil dari bilangan %d pangkat %d cara rekursif adalah :  %d \n",x,y,pangkat (x,y));
	
	for (i=1; i<=y; i++){ // iteratif
		hasil=hasil*x;
	}

	printf("Hasil dari cara iteratif adalah : %d\n",hasil );
	scanf("%d");
	

	return 0;
	
}

