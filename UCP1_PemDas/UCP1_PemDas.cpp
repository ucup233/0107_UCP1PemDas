#include <iostream>
#include <string>
using namespace std;

struct Tangerang {
	string status;
	int Sensor1;
	int Sensor2;
	int Sensor3;
};
struct Bekasi {
	string status;
	int Sensor1;
	int Sensor2;
	int Sensor3;
};
 
void input() {
	Bekasi bks;
	Tangerang tgr;

	cout << "Masukkan Nilai Udara Sensor 1 Kota Tangerang = " << endl;
	cin >> tgr.Sensor1;
	cout << "\nMasukkan Nilai Udara Sensor 2 Kota Tangerang = " << endl;
	cin >> tgr.Sensor2;
	cout << "\nMasukkan Nilai Udara Sensor 3 Kota Tangerang = " << endl;
	cin >> tgr.Sensor3;

	cout << "\nMasukkan Nilai Udara Sensor 1 Kota Bekasi = " << endl;
	cin >> bks.Sensor1;
	cout << "\nMasukkan Nilai Udara Sensor 2 Kota Bekasi = " << endl;
	cin >> bks.Sensor2;
	cout << "\nMasukkan Nilai Udara Sensor 3 Kota Bekasi = " << endl;
	cin >> bks.Sensor3;

};

int KualitasUdara() {
	Bekasi bks;
	Tangerang tgr;
	float nRerataBks;
	float nRerataTgr;
	nRerataTgr = (tgr.Sensor1 + tgr.Sensor2 + tgr.Sensor3) / 3;
	if (nRerataTgr >= 75) {
		tgr.status = "Sehat";
	}
	else if (tgr.Sensor1 <= 45 || tgr.Sensor2 <= 45 || tgr.Sensor3 <= 45) {
		tgr.status = "Tidak Sehat";
	}
	else {
		tgr.status = "Tidak Sehat";
	}
	
	nRerataBks = (bks.Sensor1 + bks.Sensor2 + bks.Sensor3) / 3;

	if (nRerataBks >= 75) {
		bks.status = "Sehat";
	}
	else if (bks.Sensor1 <= 45 || bks.Sensor2 <= 45 || bks.Sensor3 <= 45) {
		bks.status = "Tidak Sehat";
	}
	else {
		bks.status = "Tidak Sehat";
	}
	
	cout << "Nama Kota        Status" <<endl;
	cout << "Tangerang        " << tgr.status<<endl;
	cout << "Bekasi           " << bks.status<<endl;
	
	
	return (0);
};

void displat() {
	Tangerang tgr;
	Bekasi bks;
	cout << "Nama Kota" << "Status";
	cout << "Tangerang" << tgr.status;
	cout << "Bekasi" << bks.status;
};

int main() {
	char pilihan;
	do {
		input();
		KualitasUdara();
		displat();
		cout << "Apakah anda ingin mengulangi? (y/n)";
		cin >> pilihan;
		system("cls");
	} while (pilihan == 'y' || pilihan == 'Y');

};


// 1. Misalnya kita ingin mendaklarasikan umur dari seorang Mahasiswa, jadi kita dekalarasikan dengan "int umur". Contoh : a)int umur b)float nilMath c)bool hargaHP
// 2. Contohnya kita mengimplementasikan fungsi saat kita menuliskan fungsi "Input" untuk menginput nilai Panjang persegi panjang dan
// lebar dari persegi panjang, kemudian kita membuat fungsi baru "LuasPersegiPanjang" untuk menghitung luas persegi panjang dengan mengali panjang x lebar 
// dari persegi panjang tersebut. Kemudian kita membuat fungsi output "Luas" untuk menampilkan hasil operasi dari penghitungan Luas persegi panjang.
// Lalu kita implementasikan prosedur dalam "int main()" dengan memanggil fungsi "Input" terlebih dahulu kemudian memanggil fungsi "LuasPersegiPanjang" dan
// kemudian memanggil fungsi "Luas" untuk menampilkan hasil operasi penghitungan Luas Persegi Panjang tersebut
// 3. Kita mengimplementasikan looping ketika kita ingin sebuah program dilakukan secara berulang kali, contohnya saat kita ingin menampilkan tulisan "UMY" sebanyak lima kali.
// Sehingga kita dapat menggunakan fungsi looping untuk menampilkan tulisan tersebut.
// 4. Kita mengimplementasikan jika terdapat kasus apabila seorang mahasiswa dinyatakan lolos apabila mendapat rata-rata nilai dari mata kuliah
// Matematika dan Bahasa Inggris minimal 70, atau jika nilai matkul Matematika dari mahasiswa tersebut minimal 80 maka mahasiswa tersebut dinyatakan 
// lolos.
// 5. Contohnya ketika kita ingin membuat struct Mahasiswa yang dimana seorang Mahasiswa terdapat banyak atribut seperti NIM, Alamat, Usia, dll. Sehingga
// kita dapat menggunakan struct untuk menyimpan atribut-atribut mahasiswa tersebut ke dalam struct Mahasiswa karena struct beraksi sebagai wadah untuk 
// menyimpan data-data mengenai mahasiswa