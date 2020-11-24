#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\t\t------------------------------"<<endl;
	cout<<"\t\t\tKALKULATOR SEDERHANA BY FRIYAN"<<endl;
	cout<<"\t\t\t------------------------------\n\n"<<endl;
	cout<<"Pilih Menu : "<<endl;
	cout<<"------------------"<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Sisa Hasil Bagi"<<endl;
	cout<<"=================="<<endl;
	int a,b,c, menu;
	float d,e,f;
	cout<<"PILIH MENU\t: ";
	cin>>menu;
	if(menu==1){
		cout<<"\nPERTAMBAHAN"<<endl;
		cout<<"Masukan Nilai\t: ";
		cin>>d;
		cout<<"Masukan Nilai\t: ";
		cin>>e;
		f=d+e;
		cout<<"Hasil dari "<<d<<"+"<<e<<"\t: ";
		cout<<f;
	}else
	if(menu==2){
		cout<<"\nPENGURANGAN"<<endl;
		cout<<"Masukan Nilai\t: ";
		cin>>d;
		cout<<"Masukan Nilai\t: ";
		cin>>e;
		f=d-e;
		cout<<"Hasil dari "<<d<<"-"<<e<<"\t: ";
		cout<<f;
	}else
	if(menu==3){
		cout<<"\nPERKALIAN"<<endl;
		cout<<"Masukan Nilai\t: ";
		cin>>d;
		cout<<"Masukan Nilai\t: ";
		cin>>e;
		f=d*e;
		cout<<"Hasil dari "<<d<<"x"<<e<<"\t: ";
		cout<<f;
	}else
	if(menu==4){
		cout<<"\nPEMBAGIAN"<<endl;
		cout<<"Masukan Nilai\t: ";
		cin>>d;
		cout<<"Masukan Nilai\t: ";
		cin>>e;
		f=d/e;
		cout<<"Hasil dari "<<d<<":"<<e<<"\t: ";
		cout<<f;
	}else
	if(menu==5){
		cout<<"\nSISA HASIL BAGI"<<endl;
		cout<<"Masukan Nilai\t: ";
		cin>>a;
		cout<<"Masukan Nilai\t: ";
		cin>>b;
		c=a%b;
		cout<<"Sisa dari "<<a<<":"<<b<<"\t: ";
		cout<<c;
	}else
	{
		cout<<"Menu Tidak Ada";
	}
	return false;
}
