//Mencari Perbedaan 2 Waktu (Program Billing Warnet/Telepon)
#include <iostream>
using namespace std;
int main ()
{
	system ("color fd");
	
	int j1,m1,d1,td1,
		j2,m2,d2,td2,
		j3,m3,d3,td3,sm;
		
		
	cout<<"\t\t\t\t----------------------"<<endl;
	cout<<"\t\t\t\tPROGRAM BILLING WARNET"<<endl;
	cout<<"\t\t\t\t----------------------\n"<<endl;
	
	//Waktu Awal Bermain
	cout<<"Masukan Awal Waktu Bermain"<<endl;
	cout<<"==========================="<<endl;
	cout<<"Masukan Jam\t\t: ";
	cin>>j1;
	cout<<"Masukan Menit\t\t: ";
	cin>>m1;
	cout<<"Masukan Detik\t\t: ";
	cin>>d1;
	
	//Waktu Akhir Bermain
	cout<<"\nMasukan Akhir Waktu Bermain"<<endl;
	cout<<"==========================="<<endl;
	cout<<"Masukan Jam\t\t: ";
	cin>>j2;
	cout<<"Masukan Menit\t\t: ";
	cin>>m2;
	cout<<"Masukan Detik\t\t: ";
	cin>>d2;
	
	//Konversi Waktu ke Total Detik
	td1=(j1*3600)+(m1*60)+d1;
	td2=(j2*3600)+(m2*60)+d2;
	
	//Hasil
	td3=td2-td1;
	
	//Konversi Total Detik ke Jam, Menit, Detik
	j3=td3/3600;
	sm=td3%3600;
	m3=sm/60;
	d3=sm%60;
	
	cout<<"\n==========================="<<endl;
	cout<<"Anda Bermain Selama\t: "<<j3<<" Jam "<<m3<<" Menit "<<d3<<" Detik";

	
	
	return 0;
	
}
