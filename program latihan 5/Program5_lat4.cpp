#include <iostream>
using namespace std;

int main (){
	// deklarasi variable 
	char nama[40];//nama string maks 40 huruf
	int umur; //type integer
	
	//merekam inputan
	printf("Nama  : ");
	scanf("$s", &nama);
	printf("Umur  : ");
	scanf("%d", &umur);
		
		//menampilkan inputan
		printf("\n--------------------------------\n");
		printf("Nama  : %s\n", nama);
		printf("Umur  : %d\n", umur);
		
		return 0;

}