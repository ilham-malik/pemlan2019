#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>



 	struct alamat {
		char jalan[20];
		char kota[20];
		char provinsi[20];
	};
			struct tgl_lahir {
			int tanggal;
			int bulan;
			int tahun;
		};
		 struct rekening {
 	char no_rek[10];
 	char nama[10];
 	int umur;
 	tgl_lahir tl;
 	char bank[4];
 	float saldo;
 	alamat alm;
 	

}

nb[20];
int main(){
	int i=0;
	int menu;
	int pilih;
	int lagi;
	int x;

void input_data();
void view_data();
void search_data();
void isi();
void total_saldo();
void maxmin();

while (menu){
	printf("========================\n");
	printf("		menu			\n");
	printf("========================\n");
	printf("\n1. input data	nasabah	");
	printf("\n2. view data nasabah	");
	printf("\n3. search data nasabah");
	printf("\n4. isi saldo nasabah  ");
	printf("\n5. total saldo seluruh");
	printf("\n6. saldo min dan maks ");
	printf("\n7. keluar				");
	printf("\n8. pilih = ");
	scanf("%d",&menu);;
	system("cls");
		
	switch(menu){
		case 1: input_data();
			break;
		case 2: view_data();
			break;
		case 3: search_data();
			break;
		case 4: isi();
			break;
		case 5:	total_saldo();
			break;
		case 6: maxmin();
			break;
		case 7:
			return 0;
			break;
			}
	}
}

int i=0;

void input_nasabah(){
	int pilih;
	int lagi;
	
	printf("nama : ");
	scanf("%s",&nb[i].nama);
	fflush(stdin);
	while(lagi==0);
	printf("\nPilih Bank\n");
	printf("1. B1\n");
	printf("2. B2\n");
	printf("3. B3\n");
	printf("Masukkan Pilihan : ");
	scanf("%d",&pilih);

	switch(pilih){
					case 1:
						{
							strcpy(nb[i].bank,"B1");
							printf("\nNo rek: ");
							scanf("%s",&nb[i].no_rek);
						}
						break;
					case 2:
						{
							strcpy(nb[i].bank,"B2");
							printf("\nNo rek: ");
							scanf("%s",&nb[i].no_rek);	
						}
						break;
					case 3:
						{
							strcpy(nb[i].bank,"B3");
							printf("\nMasukkan No reK: ");
							scanf("%s",&nb[i].no_rek);
						}
						break;

					default :
						printf("Pilihan Tidak Ada");
						lagi == 0;
				printf("==========================================================\n");
				printf("masukkan umur			: ");
				scanf("%d",&nb[i].umur);
				fflush(stdin);
				printf("==========================================================\n");
				printf("Tanggal lahir\n");
				printf("masukkan tanggal lahir		: ");
				scanf("%d",&nb[i].tl.tanggal);
				fflush(stdin);
				printf("masukkan bulan lahir		: ");
				scanf("%d",&nb[i].tl.bulan);
				fflush(stdin);
				printf("masukkan tahun lahir		: ");
				scanf("%d",&nb[i].tl.tahun);
				fflush(stdin);
				printf("Alamat\n");
				printf("masukkan nama jalan		: ");
				gets(nb[i].alm.jalan);
				fflush(stdin);
				printf("masukkan nama kota		: ");
				gets(nb[i].alm.kota);
				fflush(stdin);
				printf("masukkan nama provinsi		: ");
				gets(nb[i].alm.provinsi);
				fflush(stdin);
				printf("Saldo\n");
				printf("masukkan jumlah saldo		: ");
				scanf("%d",&nb[i].saldo);
				fflush(stdin);
				printf("\n\n Tekan untuk kembali ke menu!");
				i++;	
				getch();
				system("cls");
	}
}
void maxmin(){
	int max = nb[0].saldo;
	int min = nb[0].saldo;
	int j;

	for(j=0;j<i;j++){
		if(max < nb[j].saldo){
			max = nb[j].saldo;
			max=max;
		}
	}

	for(j=0;j<i;j++){
		if(min > nb[j].saldo){
			min = nb[j].saldo;
		}
	}
	
	for(j=0;j<i;j++){
		if(nb[j].saldo==min){
			printf("\n\n Nasabah %s dengan saldo minimal",nb[j].nama);
			printf("\n");
	    	printf("\n No rekening    : %s",nb[j].no_rek);
    		printf("\n Nama           : %s", nb[j].nama);
	        printf("\n Bank           : %s", nb[j].bank);
	        printf("\n Saldo          : %d",nb[j].saldo);
	    	printf("\n===========================================================================");
	        printf("\n\n Tekan untuk kembali ke menu!");
		}
		if(nb[j].saldo==max){
			printf("\n\n Nasabah %s dengan saldo maksimal",nb[j].nama);
			printf("\n");
	    	printf("\n No rekening    : %s",nb[j].no_rek);
    		printf("\n Nama           : %s", nb[j].nama);
	        printf("\n Bank           : %s", nb[j].bank);
	        printf("\n Saldo          : %d",nb[j].saldo);
	        printf("\n\n Tekan untuk kembali ke menu!");
		}
		
	}
		if(i == 0){
				printf("data tidak di temukan");
			}
		getch();
		system("cls");
	
}
void view_data(){
	int j = 0;
	if(i!=0){
    	printf("\nData Semua Nasabah");
		while(j<i){
			printf("\n\n| Nasabah %s",nb[j].nama);
			printf("\n");
	    	printf("\n No rekening    : %s",nb[j].no_rek);
	        printf("\n Nama           : %s", nb[j].nama);
	        printf("\n Bank           : %s", nb[j].bank);
	        printf("\n umur           : %d", nb[j].umur);
	        printf("\n tanggal lahir  : %d-%d-%d", nb[j].tl.tanggal,nb[j].tl.bulan,nb[j].tl.tahun);
	        printf("\n Alamat         : jalan %s, kota %s, provinsi %s",nb[j].alm.jalan,nb[j].alm.kota,nb[j].alm.provinsi);
	        printf("\n Saldo          : %d",nb[j].saldo);
	        printf("\n===========================================================================");
	        printf("\n\n Tekan untuk kembali ke menu!");
	        j++;
	    }
		
	}
	
	else if(i==0){
		printf("Input data dulu");
		printf("\n\n Tekan untuk kembali ke menu!");
	}
	getch();
	system("cls");
}
void isi(){
	int j=0;
	int nominal;
	char no_rek[10];
	
	printf("\n			Isi Saldo			");
	fflush(stdin);
	printf("\nMasukkan no rekening : ");
	gets(no_rek);
	system("cls");
	while(j<i){
		if(strcmp(nb[j].no_rek,no_rek)==0){
			printf("\nHalo %s				", nb[j].nama);
			printf("\nSilakan Menambah Saldo Anda");
			printf("\nMasukkan nominal saldo : ");
			scanf("%d",&nominal);
			nb[j].saldo+=nominal;
			printf("\nSaldo baru anda adalah : %d", nb[j].saldo);
			printf("\n\n Tekan untuk kembali ke menu!");
		}
		else if(i == 0){
			printf("data tidak di temukan");
			printf("\n\n Tekan untuk kembali ke menu!");
		}
		j++;
	}
	getch();
	system("cls");
}
void cek_total(){
	int j;
	int jumlah=0;
	
	for(j=0;j<i;j++){
		jumlah = jumlah + nb[j].saldo;
	}
	printf("\nTotal saldo dari %d nasabah : %d",i,jumlah);
	printf("\n\n Tekan untuk kembali ke menu!");
	getch();
	system("cls");
	
}
void cari(){
	int memilih;
	int loop;
	int j = 0;
	
	while(loop==0);
	printf("\n Menu Cari");
	printf("\n1. cari dengan jalan");
	printf("\n2. cari dengan kota");
	printf("\n3. cari dengan provinsi");
	printf("\n4. cari dengan umur");
	fflush(stdin);
	printf("\nPilih : ");
	scanf("%d",&memilih);
	system("cls");
	
	switch(memilih){
		case 1:
			char jalan[20];
			printf("\nCari Jalan		");
			fflush(stdin);
			printf("\nMasukkan nama jalan : ");
			gets(jalan);
			system("cls");
			while(j<i){
				if(strcmp(nb[j].alm.jalan,jalan)==0);
					printf("\n\n| Nasabah %s",nb[j].nama);
					printf("\n");
			    	printf("\n No rekening    : %s",nb[j].no_rek);
	    		    printf("\n Nama           : %s", nb[j].nama);
	        		printf("\n Bank           : %s", nb[j].bank);
	        		printf("\n umur           : %d", nb[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", nb[j].tl.tanggal,nb[j].tl.bulan,nb[j].tl.tahun);
	    		    printf("\n Alamat         : jalan %s, kota %s, provinsi %s",nb[j].alm.jalan,nb[j].alm.kota,nb[j].alm.provinsi);
	        		printf("\n Saldo          : %d",nb[j].saldo);
	        		
				j++;
			}
			if(i == 0){
				printf("data tidak di temukan");
			}
			getch();
			system("cls");
			break;

		case 2:
			char kota[20];
			

			printf("\nCari kota		");
			fflush(stdin);
			printf("\nMasukkan nama kota : ");
			gets(kota);
			system("cls");
			while(j<i){
				if(strcmp(nb[j].alm.kota,kota)==0);
					i++;
					printf("\n\n| Nasabah %s",nb[j].nama);
					printf("\n");
			    	printf("\n No rekening    : %s",nb[j].no_rek);
	    		    printf("\n Nama           : %s", nb[j].nama);
	        		printf("\n Bank           : %s", nb[j].bank);
	        		printf("\n umur           : %d", nb[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", nb[j].tl.tanggal,nb[j].tl.bulan,nb[j].tl.tahun);
	    		    printf("\n Alamat         : jalan %s, kota %s, provinsi %s",nb[j].alm.jalan,nb[j].alm.kota,nb[j].alm.provinsi);
	        		printf("\n Saldo          : %d",nb[j].saldo);
	    	    
	        	
				j++;
			}
			if(i == 0){
				printf("data tidak di temukan");
			}
			getch();
			system("cls");
			break;
		case 3:
			char provinsi[20];
			printf("\nCari provinsi		");
			fflush(stdin);
			printf("\nMasukkan nama provinsi : ");
			gets(provinsi);
			system("cls");
			while(j<i){
				if(strcmp(nb[j].alm.provinsi,provinsi)==0);
					printf("\n\n| Nasabah %s",nb[j].nama);
					printf("\n");
			    	printf("\n No rekening    : %s",nb[j].no_rek);
	    		    printf("\n Nama           : %s", nb[j].nama);
	        		printf("\n Bank           : %s", nb[j].bank);
	        		printf("\n umur           : %d", nb[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", nb[j].tl.tanggal,nb[j].tl.bulan,nb[j].tl.tahun);
	    		    printf("\n Alamat         : jalan %s, kota %s, provinsi %s",nb[j].alm.jalan,nb[j].alm.kota,nb[j].alm.provinsi);
	        		printf("\n Saldo          : %d",nb[j].saldo);
			}
			if(i == 0){
				printf("data tidak di temukan");
			}
			getch();
			system("cls");
			break;
		case 4:
			int umurmax,umurmin;
			int sekarang;
			int umur1,umur2;
			int umur;

			printf("\n=====================================================");
			printf("\nCari dengan rentan umur		");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan umur kurang dari : ");
			scanf("%d",&umurmax);
			printf("\nMasukkan umur lebih  dari : ");
			scanf("%d",&umurmin);
		
			while(j<i){
				if(nb[j].umur <= umurmax && umurmin <= nb[j].umur){
					printf("\n\n| Nasabah dengan umur antara %d dan %d", umurmin,umurmax);
					printf("\n");
			    	printf("\n No rekening    : %s",nb[j].no_rek);
	    		    printf("\n Nama           : %s", nb[j].nama);
	        		printf("\n Bank           : %s", nb[j].bank);
	        		printf("\n umur           : %d", nb[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", nb[j].tl.tanggal,nb[j].tl.bulan,nb[j].tl.tahun);
	    		    printf("\n Alamat         : jalan %s, kota %s, provinsi %s",nb[j].alm.jalan,nb[j].alm.kota,nb[j].alm.provinsi);
	        		printf("\n Saldo          : %d",nb[j].saldo);
				}	
			j++;
		}
			
			if(i == 0){
				printf("data tidak di temukan");
				
			}

			getch();
			system("cls");
			break;
	}
}

