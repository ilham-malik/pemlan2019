#include<stdio.h>
#include <conio.h>
int main()
{
int A[10], i,j,k,tkr,low,high,pos,tm;
for(i=0;i<10;i++){
    printf("data ke-%d : ",i+1);
    scanf("%d",&A[i]);
            }
    printf("\n Masukkan data yang akan anda cari : ");
    scanf("%d",&k);
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
        if (A[i]>A[j]){
        tkr=A[i]; A[i]=A[j]; A[j]=tkr;
                                    }
                        }
            }
            tm=0;
            high=9; low=0; do
            {
                        pos = ((k - A[low]) / (A[high] - A[low]))*(high-low) +  low;
                        if (A[pos] == k){
                                    tm++;
                                    break;
                        }
                        if (A[pos] > k)
                                    high = pos-1;
                        else if (A[pos] < k)
                                    low = pos + 1;
            }
            while(k >= A[low] && k <= A[high]);
                        if (tm>0){
                                    printf(" data %d yang dicari ada dalam array ke %d\n",k,i-1);
                                   
                        }else{
                                    printf("data tidak ditemukan dalam array\n");}
                        
                       
            return(0);
}
