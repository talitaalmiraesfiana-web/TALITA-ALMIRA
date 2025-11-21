#include <iostream>
using namespace std;

int main()
{
	double harga, diskon, jumlahDiskon, hargaSetelahDiskon;

	cout << "Masukkan :" << endl;
	cout << "Harga barang (Rp) = ";
	cin >> harga;

	cout << "Diskon barang (%) = ";
	cin >> diskon;

	jumlahDiskon = harga * (diskon / 100);
	hargaSetelahDiskon = harga - jumlahDiskon;

	cout << "\nhasil :" << endl;
	cout << "Jumlah diskon = Rp " << jumlahDiskon << endl;
	cout << "Harga Setelah Diskon = Rp " << hargaSetelahDiskon << endl;

	cin.get();
}