#include<stdio.h>
#include<conio.h>

void insertion(int a[],int n){
	int i,j,temp;
	
    for (i = 1 ; i <= n; i++)
    {
	    j = i;
            while ( j > 0 && a[j-1] > a[j])
            {	        
                temp   = a[j];
                a[j]   = a[j-1];
                a[j-1] = temp;
                j--;
            }
    
		}
}

void insertion(int a[],int n);
 main(){
	int i,j,n,temp;
	printf("BANYAK ANGKA : \n");
	scanf("%d",&n);
	int a[n];
	printf("MASUKKAN ANGKA : \n");
	for(i=0;i<n;i++)
		{
 			scanf("%d",&a[i]);
		}
insertion(a,n);
printf("angka yang diurutkan \n");
for(i=0;i<=n-1;i++){
	printf("%d\n",a[i]);
}
}
