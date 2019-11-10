#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct Mobil {

	char merk[10];
	char nama[10];
	double harga;
};
typedef struct Mobil car;
int main()
{
	car sedan;
	//sedan merk = "honda";
	strcpy (sedan.merk, "honda");
	strcpy (sedan.nama, "accord");
	sedan.harga = 500000;
	
	printf("%s \n", sedan.merk);
	printf("%s \n",sedan.nama);
	printf("%d \n",sedan.harga);
	
	int nilai = 5;
	int *pnilai = &nilai;
	printf("value nilai = %d \n", nilai);
	printf("alamat memori = %d \n", &nilai);
	printf("value nilai diakses dari pointer = %d \n", *pnilai); 
}

