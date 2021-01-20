//Source Code Setengah Piramida
#include <iostream>
using namespace std;

void enter (){cout<<"\n";}
int main(){
system ("Color f3");
int a, b, n;


cout<<"Masukan Banyak Baris Piramida	: ";
cin>>n; enter();
	for (a=1; a<=n; a++){
		for (b=1; b<=a; b++){
			printf ("*");
		}
		printf ("\n");
		
	}
	enter();
	cout<<"--------------------------------"<<endl;
	cout<<"	Friyan Prasetya";
}
