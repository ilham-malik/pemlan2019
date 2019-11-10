#include<stdio.h>
#include<conio.h>

main (){
	int angka[10]={1,3,5,7,9,11,13,17,19,23};
	int i=0,c=0,cari;
	printf("data yang di cari =");
	scanf("%d",&cari);
	while (i<10 && c!=1){
		printf("looping ke %d\n",i+1);
		if(angka[i]==cari){
		c=1;
		}
		else{
			i++;
		}
	}

if(c==1){
	printf("angka %d ada",cari);
}else{
	printf("angka %d tidak ada",cari);
}
}
