#include <stdio.h>
#include <conio.h>
main()

{ 

 char npm[20], nama[20], alamat[20], fakultas [20], jurusan[20];
 int no_hp[20], tahun[20];
 {  printf("NPM : \t");
 	scanf("%c", &npm);
	printf("nama : \t");
	scanf("%s", &nama);
	printf("alamat : \t");
	scanf("%s", &alamat);
	printf("fakultas : \t");
	scanf("%s", &fakultas);
	printf("jurusan : \t");
	scanf("%s", &jurusan);
	printf("no hp : \t");
	scanf("%d", &no_hp);
	printf("tahun lahir : \t");
	scanf("%d", &tahun);
	
	printf("biodata mahasiswa : \n");
	printf("NPM :  %s \n" ,npm);
	printf("nama : %s \n",nama);
	printf("alamat : %s \n",alamat);
	printf("fakultas : %s \n",fakultas);
	printf("jurusan : %s \n",jurusan);
	printf("no hp : %d \n",no_hp);
	printf("tahun lahir : %d \n", tahun);
	
	
	
 } return 0;
}
