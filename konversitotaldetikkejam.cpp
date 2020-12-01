//Konversi total detik ke Jam, Menit dan Detik
#include<iostream>
using namespace std;
int main()
{
	int td,j,m,d,sm;
	cout<<"\t\t\t---------------------------"<<endl;
	cout<<"\t\t\tKONVERSI TOTAL DETIK KE JAM"<<endl;
	cout<<"\t\t\t---------------------------\n"<<endl;
	cout<<"Masukan Total Detik\t: ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"Hasil\t\t\t: "<<j<<" Jam "<<m<<" Menit "<<d<<" Detik";
	return 0;
}
