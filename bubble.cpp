#include<stdio.h>
#include<conio.h>
//urut
void BubbleSort(int a[],int num){
 int i,j,temp;
 i=num;
if(i>0)
  {
       for(j=0;j<num-1;j++)
       {
         if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
      }
  BubbleSort(a,num-1);
  }
else
  {
       return;
   }
}

void BubbleSort(int a[],int num);
main()
	{
	int i,j,num,temp;
	printf("BANYAK ANGKA : \n");
	scanf("%d",&num);
	int a[num];
	printf("MASUKKAN ANGKA : \n");
	for(i=0;i<num;i++)
		{
 			scanf("%d",&a[i]);
		}
	BubbleSort(a,num);
	printf("ANGKA YANG SUDAH DIURUTKAN (ASCENDING) \n");
	for(i=0;i<num;i++)
	{
 printf("%d\n",a[i]);
	}	
	printf("ANGKA YANG SUDAH DIURUTKAN (DESCENDING) \n");
	for (i=num; i>0;i--)
	{
		printf("%d\n",a[i-1]);
		}	
}


