#include<stdio.h>
#include<stdlib.h>



int main(){
	int n[20];
	int i,j;
	int k;
	int cari=0;
	for(i=0;i<20;i++){
		n[i]=i+1;
		
	}

	for(i=0;i<20;i++){
		printf("elemen [%d]=%d\n",i+1,n[i]);
	}
	printf("==============\n");
		for(i=19;i>=0;i--){
		printf("elemen [%d]=%d\n",i+1,n[i]);
	}
	printf("===============\n");
	printf("angka yang dicari= ");
	scanf("%d",&cari);
	
	for (i=0;i<20;i++){
		if(cari==n[i]){
			printf("angka %d terdapat dalam array \n",cari);
			cari=1;
			break;
		}
	}
	if (cari!=1){
		printf("angka tidak ditemukan");
	}
	return 0;
}

