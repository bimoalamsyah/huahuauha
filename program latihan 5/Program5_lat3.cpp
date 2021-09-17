#include <iostream>
using namespace std;

main (){
	
	//contoh program untuk menampilkan menu ATM
	//Program ini belum bisa menerima masukan
	int pilihan;
	
	cout << "==========>>> Menu ATM <<<==========" << endl;
	cout << "1. Cek Saldo\n";
	cout << "2. Tarik Tunai\n";
	cout << "3. Rubah PIN\n";
	cout << "4. Transfer\n";
	cout << "===============>>>><<<<===============" << endl;
	cout << "Masukan Pilihan Anda: ";
	//contoh penggunaan cin
	cin >> pilihan;
	
	//contoh menampilkan hasil cin dengan cout dan printf
	cout << "\n\n-----------------Hasil-----------------" << endl;
	cout << "Anda memasukan pilihan " <<pilihan<< endl;
	printf("Menu: %d adalah pilihan yang Anda masukkan\n", pilihan);
	cout << "-----------------Hasil-----------------" << endl;
	return 0;
	
}