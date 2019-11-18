#include <stdio.h>
#include <conio.h>
void merge (int a[],int low, int mid, int high);
void mergesort ( int a[], int low, int high);
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
mergesort(a,0,n-1);

printf("angka yang diurutkan \n");
for(i=0;i<n;i++){
	printf("%d\n",a[i]);
	}
return 0;
}
	

void merge (int a[],int low, int mid, int high){ //pembagian
	int n1 = mid - low + 1;
	int n2 = high - mid;
	int L[n1], R[n2];
	int i, j, k;
	
	for (i = 0; i < n1; i++){ // ke kiri
		L[i] = a[low+i];
	}
	for (j = 0; j < n2; j++){ // ke kanan
		R[j] = a[mid+1+high];
	}
	i = 0;
	j = 0;
	k = low;
	
	while (i < n1 && j < n2) {
		if (L[i]<= R[j]){
			a[k] = L[i];
			i++;
		}
		else{
			a[k] = R[i];
			j++;
			}
			k++;
		}
	while (i < n1){
		a[k] = L[i];
		i++;
		k++;
	}
	while (j < n2){
		a[k] = R[j];
		j++;
		k++;
	}
}
void mergesort ( int a[], int low, int high){
	
	if (low < high){
	int mid = (low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);
	}	
}



