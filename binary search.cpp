#include <iostream>
using namespace std;

bool binary_search(int cari,int n,int data[]);

int main(){
	int data[10] = {3,9,11,13,15,18,20,23,31,35};
	int cari;
	bool ditemukan = false;
	
	cout << "Data Yang di cari : ";
	cin >> cari;
	
	ditemukan = binary_search(cari,10,data);
	
	if (ditemukan == true){
		cout << "Data yang dicari ditemukan" ;
	}else{
		cout << "Data yang dicari tidak ditemukan" ;
	}
	return 0;
}
bool binary_search(int cari,int n,int data[]){
	
	bool ketemu = false;
	short awal,akhir,tengah;
	awal = 0;
	akhir = n-1;
	
	while ((ketemu == false) and (awal <= akhir))
	{
		tengah = (awal+akhir)/2;
		if(cari == data[tengah]){
			ketemu = true;
		}else{
			if (cari < data[tengah])
			akhir = tengah - 1;
			else 
			awal = tengah;
		}
	}
	return ketemu;
}

