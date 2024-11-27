#include <iostream>
using namespace std;


int main () {

	char nama[30],pembeli[30];
	int harga, jumlah, total, jumtotal, jumbayar, kembalian, potongan;
	string input, kode;

	cout << "        TOKO TKJ WIKRAMA        "<<endl;
	cout << "======================================="<<endl;
	cout << "Nama Pembeli     :";
	cin >> pembeli;
	cout << "Pilihan Barang yang Tersedia"<<endl;
	cout << "001 - Laptop Asus RAM 4GB - RP.5000.000"<<endl;
	cout << "002 - Mouse Wireless - Rp. 150.000"<<endl;
	cout << "003 - Mikrotik RB941 - Rp.600.000"


	     ;
	cout << endl;
	cout << endl;
	cout << "Barang yang dipilih     :";
	cin >> kode;
	cout << "Jumlah beli      :";
	cin >> jumlah;


	if (kode == "001") {
		cout << "Laptop Asus RAM 4GB";
		harga = 5000000;
	} else if (kode == "002") {
		cout << "Mouse Wireless";
		harga = 150000;
	} else if (kode == "003") {
		cout << "Mikrotik RB941";
		harga = 600000;
	} else {
		cout << "Barang yang dipilih tidak tersedia";
	}

	cout << endl;
	cout << "==========================================="<<endl;
	cout << "Struk Pembayaran"<<endl;
	cout << "==========================================="<<endl;
	cout << "Nama Pembeli        :"<<pembeli<<endl;
	cout << "Harga               :"<<harga<<endl;
	cout << "Jumlah              :"<<jumlah<<endl;


	total = harga * jumlah;

	cout << "Total       :"<<total<<endl;


}
