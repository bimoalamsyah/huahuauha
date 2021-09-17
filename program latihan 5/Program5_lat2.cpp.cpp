#include <iostream>
using namespace std;

int main(){
	string nama;
	char predikat;
	int peringkat;
	double ipk;
	
	nama="Bimo Alam Syah";
	predikat='A';
	peringkat=1;
	ipk=3.99;
	
	//contoh menampilkan teks secara langsung
	printf("Selamat Atas Kelulusan %s Berprestasi\n", "Wisudawan");
	
	//contoh menampilkan teks melalui variabel,
	// perhatikan pada type data String diikuti fungsi .c_str()
	printf("Nama        : %s\n", nama.c_str());
	printf("Predikat    : %c\n", predikat);
	printf("Peringkat   : %i\n", peringkat);
	printf("IPK         : %f\n", ipk);
	//contoh membulatkan 2 digit di belakang koma
	printf("IPK (Bulat): %.2f\n", ipk);
	
	return 0;
}