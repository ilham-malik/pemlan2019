#include<stdio.h>
#include<stdlib.h>
struct data_mhs {
float ipk;
int npm[10];
char nama[20];
};

int main(){
int a;
struct data_mhs data[5];
printf("data mhs \n");
	for (a=0;a<5;a++){
		printf("npm = \n");
		scanf("%f",&data[a].npm);
		printf(" nama = \n");
		scanf("%s",&data[a].nama);
		printf("\n ipk = \n");
		scanf("%d",&data[a].ipk);
		fflush(stdin);
	}printf("diatas 3=");
	for (a=0;a<5;a++){
	if(data[a].ipk >= 3.0){
		printf("\n ");
		printf("%s",data[a].nama);
			}	 
		}
		printf("dibawah 3=");
		for (a=0;a<5;a++){
	if(data[a].ipk < 3.0){
		printf("\t");
		printf("%s",data[a].nama);	
	}
}
}
	

