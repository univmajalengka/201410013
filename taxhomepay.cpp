//Tugas #10 Menghitung Tax Home Pay
#include<iostream>
#include<string>
using namespace std;
const float persentunjangan = 0.2;
const float persenpajak = 0.15;
void batas(){cout<<"========================="<<endl;}
void enter(){cout<<"\n";}

int main()
{
	system ("color f1");
	cout<<"		------------------------------------------"<<endl;
	cout<<"		Menghitung Tax Home Pay by Friyan Prasetya"<<endl;
	cout<<"		------------------------------------------"<<endl;
	enter();
	
	string namakaryawan;
	int gajibersih, gajipokok, pajak, tunjangan;
	cout<<"Masukan Nama Karyawan	: ";
	getline(cin,namakaryawan);
	cout<<"Masukan Gaji Pokok	: Rp. ";
	cin>>gajipokok;
	
	enter(); batas(); enter();
	
	tunjangan = persentunjangan * gajipokok;
	pajak = persenpajak * gajipokok;
	gajibersih = gajipokok + tunjangan - pajak;
	
	cout<<"Nama Karyawan		: "<<namakaryawan<<endl;
	cout<<"Gaji Bersih		: Rp. "<<gajibersih<<endl;
	return 0; 
}
