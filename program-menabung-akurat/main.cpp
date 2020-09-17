#include <iostream>
using namespace std;
int main(){
	string nama;
	int uang,waktu,jumlah;
	cout<<"Program mengatur keuangan"<<endl;
	cout<<"Masukan nama anda : ";
	getline(cin,nama);
	cout<<"Masukan jumlah uang yang anda butuhkan : ";
	cin>>uang;
	cout<<"Berapa bulan anda ingin menabung:";
	cin>>waktu;
	jumlah=uang/waktu;
	cout<<nama<<" uang yang harus anda tabung setiap bulannya adalah Rp."<<jumlah<<endl;
	cin.get();
	return 0;
	
}