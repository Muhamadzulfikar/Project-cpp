#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

void list(){
	int harga[10];
	harga[1]=15000;
	harga[2]=15000;
	harga[3]=15000;
	harga[4]=20000;
	harga[5]=15000;
	harga[6]=20000;
	harga[7]=20000;
	cout<<"1.Nasi Goreng "<<"Rp."<<harga[1]<<endl;
	cout<<"2.Mie Goreng "<<"Rp."<<harga[2]<<endl;
	cout<<"3.Mie Tieaw "<<"Rp."<<harga[3]<<endl;
	cout<<"4.Soto Medan "<<"Rp."<<harga[4]<<endl;
	cout<<"5.Bakso malang "<<"Rp."<<harga[5]<<endl;
	cout<<"6.Soup Ayam "<<"Rp."<<harga[6]<<endl;
	cout<<"7.Soup Ikan "<<"Rp."<<harga[7]<<endl;
}

void pesan(){
	char pesan[100],jumlah[100];
	char pilihan;
	cout<<"Anda ingin pesan apa : "; gets(pesan);
	cout<<"jumlah pesanan anda : "; gets(jumlah);
	cout<<"apakah anda yakin ingin memesan "<<pesan<<" jumlah pesanan "<<jumlah<<" y/n "<<": ";
	cin>>pilihan;
	if(pilihan=='y'){
		cout<<"pesanan anda akan segera di proses silahkan menunjukan struk ini ke kasir"<<endl;
		cout<<"pesanan : "<<pesan<<endl;
		cout<<"jumlah pesanan :"<<jumlah<<endl;
	}
	else if(pilihan=='n'){
		cout<<"mohon maaf atas ketidak nyamanan anda"<<endl;
	}
}

int main(){
//tipe data
list();
pesan();
return 0;
}
