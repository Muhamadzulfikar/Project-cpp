#include <iostream>

using namespace std;

int main(){

    string nik;
    string nama,ttl,kelamin,darah,alamat,rt,kecamatan,agama,kewarnegaraan,masa;

    cout<<"Masukan NIK :";
    getline(cin, nik);
    cout<<"Masukan nama :";
    getline(cin, nama);
    cout<<"Masukan Tempat / Tanggal lahir :";
    getline(cin, ttl);
    cout<<"Masukan jenis kelamin :";
    getline(cin, kelamin);
    cout<<"Masukan Golongan Darah : ";
    getline(cin, darah);
    cout<<"Masukan Alamat :";
    getline(cin, alamat);
    cout<<"Masukan RT/RW :";
    getline(cin, rt);
    cout<<"Masukan Kecamatan :";
    getline(cin, kecamatan);
    cout<<"Masukan Agama :";
    getline(cin, agama);
    cout<<"Masukan kewarnegaraan :";
    getline(cin, kewarnegaraan);
    cout<<"Masa Berlaku :";
    getline(cin, masa);

    return 0;

}
