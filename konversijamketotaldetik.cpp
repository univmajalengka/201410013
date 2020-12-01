#include<iostream>
using namespace std;
int main()
{
	int j,m,d,td;
	cout<<"\t\t---------------------------------------------"<<endl;
	cout<<"\t\tKONVERSI JAM, MENIT, DAN DETIK KE TOTAL DETIK"<<endl;
	cout<<"\t\t---------------------------------------------\n"<<endl;
	cout<<"Masukan Jam\t: ";
	cin>>j;
	cout<<"Masukan Menit\t: ";
	cin>>m;
	cout<<"Masukan Detik\t: ";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"Total\t\t: "<<td; cout<<" Detik";
	return 0;
}
