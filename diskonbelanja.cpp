//Program Diskon Belanja
#include <iostream>
using namespace std;

void batas(){cout<<"===================================================="<<endl;}
void garis(){cout<<" --------------------------------------------------"<<endl;}
void enter(){cout<<"\n";}

int main()
{
	system ("color f2");
	float diskon1, diskon2, diskon3, diskon4;
	int belanja, diskon, total;
	diskon1 = 0;
	diskon2 = 0.1;
	diskon3 = 0.125;
	diskon4 = 0.15;
	
	garis();
	cout<<"|	Diskon Belanja 2.2 Friyanpra Store	   |"<<endl;
	garis();
	cout << "|Belanja Rp. 0 - Rp. 25.000 		= 0 %      |" << endl;
    cout << "|Belanja Rp. 25.000 - Rp. 50.000 	= 10%      |" << endl;
    cout << "|Belanja Rp. 50.000 - Rp. 100.000 	= 12.5%    |" << endl;
    cout << "|Belanja Lebih dari Rp. 100.000  	= 15%      |" << endl;
    garis(); enter();
	
	cout<<"Masukan Total Belanja	: Rp. ";
	cin>>belanja;
	
	enter();
	
	batas();
	switch(belanja){
		
		case 0 ... 24999:
		diskon = belanja * diskon1;
		total = belanja - diskon;
		cout<<"Diskon = 0%				: Rp. " <<diskon<<endl;
		cout<<"Total Pembayaran Anda Adalah		: Rp. " <<total<<endl;
		break;
		
		case 25000 ... 49999:
		diskon = belanja * diskon2;
		total = belanja - diskon;
		cout<<"Diskon = 10%				: Rp. " <<diskon<<endl;
		cout<<"Total Pembayaran Anda Adalah		: Rp. " <<total<<endl;
		break;
		
		case 50000 ... 99999:
		diskon = belanja * diskon3;
		total = belanja - diskon;
		cout<<"Diskon = 12.5%				: Rp. " <<diskon<<endl;
		cout<<"Total Pembayaran Anda Adalah		: Rp. " <<total<<endl;
		break;
		
		default:
		diskon = belanja * diskon4;
		total = belanja - diskon;
		cout<<"Diskon = 15%				: Rp. " <<diskon<<endl;
		cout<<"Total Pembayaran Anda Adalah		: Rp. " <<total<<endl;
		break;
	}
	batas();
	
	return 0;
}
