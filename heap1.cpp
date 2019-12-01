#include<stdio.h>
#include<conio.h>

 main(){
	int a[50],n,i;
	printf("BANYAK ANGKA : \n");
	scanf("%d",&n);
	//int a[n];
	printf("MASUKKAN ANGKA : \n");
	for(i=0;i<n;i++)
		{
 			scanf("%d",&a[i]);
		}
	printf ("array ke : ");
	scanf("%d",&i);
	i--;
	int parent = (i - 1)/2;
	int left = (2*i );
	int right = (2*i + 1);
	
	if(parent<=0){
	printf("parent = %d", a[parent]);
	printf("left child = %d", a[left]);
	printf("right child = %d", a[right]);
		}
	else if (right<=i || left <=i){
	printf("parent = %d", a[parent]);
		}
	else {	
	printf("parent = %d", a[parent]);
	printf("left child = %d", a[left]);
	printf("right child = %d", a[right]);
	}
	
	
	}

