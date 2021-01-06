//Procedure & Function
#include <iostream>
using namespace std;

void garis(){cout<<"\t\t\t\t----------------------"<<endl;}
void batas(){cout<<"==========================="<<endl;}
void enter(){cout<<"\n"<<endl;}

//Function Konversi Jam, Menit, Detik ke Total Detik
int jam(int j, int m, int d){
	int td;
	td=(j*3600)+(m*60)+d;
	return td;
}

//Function Konversi Total Detik ke Jam, Menit, Detik
void selisih(int td){
	int j, m, d, sm;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"Anda Bermain Selama\t: "<<j<<" Jam "<<m<<" Menit "<<d<<" Detik";
}


int main (){
	system ("color fc");
	int j1,j2,m1,m2,d1,d2,td;
	
	garis();
	cout<<"\t\t\t\tPROGRAM BILLING WARNET"<<endl;
	garis(); enter();
	
	for(int i=1; i<=2; i++){
	if(i==1){
	cout<<"Masukan Awal Waktu Bermain"<<endl;
	batas();
	}else{
	enter(); cout<<"Masukan Akhir Waktu Bermain"<<endl;
	batas();
	}
	cout<<"Masukan Jam\t\t: ";
	cin>>j1;
	cout<<"Masukan Menit\t\t: ";
	cin>>m1;
	cout<<"Masukan Detik\t\t: ";
	cin>>d1;
	td=jam(j1,m1,d1)-td;
}
	enter(); selisih(td);
}
