#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main(){

    int menu;
    string nama_hotel,my_text,nama,hp,email,tanggal,jenis_kamar,kelas_kamar,checkout;
    int jumlah_kamar,harga,waktu;
    char kembali;

    ofstream
    pelangganout("pelanggan.txt");

    ifstream
    pelangganin("pelanggan.txt");

    cout<<"\t \t \t \t \t \t Sistem Informasi Hotel"<<endl;

    cout<<endl;

    cout<<"Beberapa Hotel yang mungkin berada di sekitar anda"<<endl;

    cout<<endl;

    cout<<"1.Palapa"<<endl;
    cout<<"2.Mangga"<<endl;
    cout<<"3.apel"<<endl;

    cout<<endl;

    cout<<"Pilih salah satu untuk melanjutkan"<<endl;

    cout<<endl;

    cout<<"1. Cari Informasi tentang Hotel"<<endl;
    cout<<"2. Pesan Hotel"<<endl;

    cout<<endl;

    cout<<"Masukan Pilihan anda :";
    cin>>menu;

    switch(menu){

    case 1 :
        cout<<endl;

        cout<<"Ketik nama Hotel yang ingin anda ketahui informasinya :";
        cin>>nama_hotel;

        if(nama_hotel == "palapa"){

            cout<<endl;

            cout<<"Kode Hotel               : 2018001"<<endl;
            cout<<"Nama Hotel               : Palapa"<<endl;
            cout<<"Fasilitas Hotel          : Restoran, Kolam Renang, Free Wifi, Biliar Room"<<endl;
            cout<<"Alamat Hotel             : Jl palapa"<<endl;
            cout<<"Nomor Telepon Hotel      : 081234567890"<<endl;
            cout<<"pelayanan yang diberikan : sarapan gratis"<<endl;

            cout<<endl;

            cout<<"apakah anda ingin kembali ke menu utama (y/n):";
            cin>>kembali;

            switch(kembali){
            case 'y' :

                system("cls");

                main();

            break;

            default :

                return 0;
            }
        }

        else if(nama_hotel == "mangga"){

            cout<<endl;

            cout<<"Kode Hotel               : 2019002"<<endl;
            cout<<"Nama Hotel               : mangga"<<endl;
            cout<<"Fasilitas Hotel          : Taxi Hotel, Free Wifi"<<endl;
            cout<<"Alamat Hotel             : Jl. Mangga"<<endl;
            cout<<"Nomor Telepon Hotel      : 082213456789"<<endl;
            cout<<"Pelayanan yang diberikan : Relaxasi gratis"<<endl;

            cout<<endl;

            cout<<"apakah anda ingin kembali ke menu utama (y/n):";
            cin>>kembali;

            switch(kembali){
            case 'y' :

               system("cls");

                main();

            break;

            default :

                return 0;
            }
        }

        else if(nama_hotel == "apel"){

            cout<<endl;

            cout<<"Kode Hotel : 2020003"<<endl;
            cout<<"Nama Hotel : Apel"<<endl;
            cout<<"Fasilitas Hotel : Lotre Room"<<endl;
            cout<<"Alamat Hotel : Jl. Apel"<<endl;
            cout<<"Nomor Telepon Hotel : 082311445678"<<endl;
            cout<<"Pelayanan yang diberikan : Sarapan Pagi"<<endl;

            cout<<endl;

            cout<<"apakah anda ingin kembali ke menu utama (y/n):";
            cin>>kembali;

            switch(kembali){
            case 'y' :

               system("cls");

                main();

            break;

            default :

                return 0;
            }
        }

        else {

            cout<<"Anda salah mengetikan nama silahkan cek lagi"<<endl;
        }

        break;

    case 2:

        cout<<endl;

        cout<<"Catatatan Nama tidak boleh menggunakan spasi. Ini Karena Kekurangan sistem kami"<<endl;

        cout<<endl;

        cout<<"Isikan biodata anda"<<endl;

        cout<<endl;

        cout<<"Email         :";
        cin>>email;
        cout<<"Nama          :";
        cin>>nama;
        cout<<"Nomor Telepon :";
        cin>>hp;

        pelangganout<<"Email             :"<<email<<endl;
        pelangganout<<"Nama              :"<<nama<<endl;
        pelangganout<<"Nomor Telepon     :"<<hp<<endl;

        cout<<endl;

        cout<<"Ketikan nama hotel yang ingin anda pesan :";
        cin>>nama_hotel;

        pelangganout<<"Hotel             :"<<nama_hotel<<endl;

        cout<<endl;

        cout<<"Isikan data pemesanan"<<endl;

        cout<<endl;

        cout<<"Tanggal Pemesanan :";
        cin>>tanggal;
        cout<<"Lama Pemesanan (hari) :";
        cin>>waktu;

        pelangganout<<"Tanggal Pemesanan :"<<tanggal<<endl;
        pelangganout<<"lama Pemesanan    :"<<waktu<<endl;

        cout<<endl;

        cout<<"Jenis Kamar \t Kelas Kamar"<<endl;
        cout<<"Single      \t Ekonomis"<<endl;
        cout<<"double      \t Reguler"<<endl;
        cout<<"family      \t VIP"<<endl;

        cout<<endl;

        cout<<"ketikan jenis dan kelas kamar yang ingin anda pesan"<<endl;

        cout<<endl;

        cout<<"Jenis Kamar  :";
        cin>>jenis_kamar;
        cout<<"Kelas Kamar  :";
        cin>>kelas_kamar;
        cout<<"Jumlah Kamar :";
        cin>>jumlah_kamar;

        pelangganout<<"Jenis Kamar       :"<<jenis_kamar<<endl;
        pelangganout<<"Kelas Kamar       :"<<kelas_kamar<<endl;
        pelangganout<<"jumlah Kamar      :"<<jumlah_kamar<<endl;

        cout<<endl;

        cout<<"Isikan tanggal anda checkout"<<endl;

        cout<<endl;

        cout<<"Tanggal Checkout :";
        cin>>checkout;

        pelangganout<<"Tanggal Checkout  :"<<checkout<<endl;

        if(nama_hotel == "palapa" && jenis_kamar == "single"){

            if(kelas_kamar == "ekonomis"){

                harga =  50000 * jumlah_kamar * waktu;
            }

            else if(kelas_kamar == "reguler"){

                harga = 60000 * jumlah_kamar * waktu;
            }

            else if(kelas_kamar == "vip"){

                harga = 70000 * jumlah_kamar * waktu;
            }
        }


        else if(nama_hotel == "palapa" && jenis_kamar == "double"){

            if(kelas_kamar == "ekonomis"){

                harga = 100000 * jumlah_kamar * waktu;
            }

            else if(kelas_kamar == "reguler"){

                harga = 120000 * jumlah_kamar * waktu;
            }

            else if(kelas_kamar == "vip"){

                harga = 140000 * jumlah_kamar * waktu;
            }
        }


        else if(nama_hotel == "palapa" && jenis_kamar == "family"){

            if(kelas_kamar == "ekonomis"){

                harga = 200000 * jumlah_kamar * waktu;
            }

            else if(kelas_kamar == "reguler"){

                harga = 240000 * jumlah_kamar * waktu;
            }

            else if(kelas_kamar == "vip"){

                harga = 280000 * jumlah_kamar * waktu;
            }
        }

        pelangganout.close();

        cout<<endl;

        cout<<"Detail Pesanan Anda"<<endl;

        cout<<endl;

        while(getline (pelangganin, my_text)){
            cout<<my_text<<endl;
        }

        pelangganin.close();

        cout<<endl;

        cout<<"harga yang harus anda bayar : Rp."<<harga<<endl;

        cout<<endl;

        cout<<"apakah anda ingin kembali ke menu utama (y/n):";
        cin>>kembali;

        switch(kembali){
        case 'y' :

            system("cls");

            main();

        break;

        default :

            return 0;
        }


    default:;
    }
    return 0;
}
