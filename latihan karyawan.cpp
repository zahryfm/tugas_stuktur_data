#include <iostream>
using namespace std;

struct Tanggal{
	string hari = "senin";
	string bulan = "agustus";
	int tahun = 2027;
};
struct alamat{
	string jalan = "jln jendral jokowi";
	string kota = "Bandung";
};
struct Karyawan{
	string nama = "fahmi";
	int gaji = 5000000;
	string Tanggalmasuk = "12 agustus 2027";
	string Alamattinggal = "cianjur belah kulon";
};

int main(){
	Karyawan m1;
	m1.nama ;
	m1.gaji;
	m1.Tanggalmasuk ;
	m1.Alamattinggal ;
	
	
	cout << "Identitas Karyawan PT wel \n";
	cout << "Nama karyawan  : " << m1.nama << endl;
	cout << "Gaji karyawan  : " << m1.gaji << endl;
	cout << "Tanggal Masuk  : " << m1.Tanggalmasuk << endl;
	cout << "Alamat Tinggal : " << m1.Alamattinggal << endl;
	
}

