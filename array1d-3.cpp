#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct mahasiswa{
	float ipk;
	int npm;
}; typedef struct mahasiswa mhs;
 
 main(){
float ipk[10]={3,3.1,3.2,3.3,3.4,3.5,3.6,3.7,3.8,3.9};
int npm[10]={100,101,102,103,104,105,106,107,108,109};
int i;

for (i=0;i<10;i++){
	printf ("npm : %d ipk = %f\n",npm[i],ipk[i]);
}
mhs maba[10];
for(i=0;i<10;i++){
	printf("masukkan npm : ");
	scanf("%d",&maba[i].npm);
	printf("masukkan ipk : ");
	scanf("%f",&maba[i].ipk);
}
for( i=0;i<10;i++){
	printf("npm : %d ipk = %f\n",maba[i].npm,maba[i].ipk);
}
return 0;
}

