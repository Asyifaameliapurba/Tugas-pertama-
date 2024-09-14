//Dibuat oleh Asyifa amelia purba
//tanggal dibuat 6 september 2024
#include <iostream>
#include <iomanip>

using namespace std;
 int main(){
 	string nama_brng;
    double harga_per_item;
    int jumlah;
    double total_harga, diskon, total_bayar;
    
    cout << "Masukkan nama brng: ";
    getline(cin,nama_brng);
    cout << "Masukkan harga per item: ";
    cin >> harga_per_item;
    cout << "Masukkan jumlah item: ";
    cin >> jumlah;
    
    total_harga = harga_per_item * jumlah;
    cout << "Masukkan diskon 10%: ";
    cin >> diskon;
    total_bayar = total_harga * (1 - diskon / 100);
    
    cout << fixed << setprecision(2);
    cout << "\nNama Brng: " << nama_brng << endl;
    cout << "Harga per Item; Rp" << harga_per_item <<endl;
    cout << "Jumlah: " << jumlah << endl;
    cout << "Total Harga: Rp" <<total_harga << endl;
    cout << "Diskon: " << diskon <<"%" << endl;
    cout << "Total Bayar Setelah Diskon: Rp" << endl;
    
    return 0;
 }