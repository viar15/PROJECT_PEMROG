#include <iostream>
#include <iomanip> 
using namespace std;

void tampilkanMenu(string);

int main() {
    string nama, mataUang1, mataUang2;
    long double jumlahUang1, jumlahUang2;

    cout << "Masukan Nama Anda : ";
    cin >> nama;

    tampilkanMenu(nama);
    cout << endl;

    while (true) {
        cout << "Masukan mata uang yang anda punya : ";
        cin >> mataUang1;
        cout << "Masukan jumlah uang yang ingin anda ubah : ";
        cin >> jumlahUang1;
        cout << "Masukan mata uang yang ingin anda ubah : ";
        cin >> mataUang2;
        cout << endl;
 
        if (mataUang1 == "USD" && mataUang2 == "IDR") {
            jumlahUang2 = jumlahUang1 * 15000;
        } else if (mataUang1 == "USD" && mataUang2 == "EUR") {
            jumlahUang2 = jumlahUang1 * 0.93;
        } else if (mataUang1 == "USD" && mataUang2 == "KWD") {
            jumlahUang2 = jumlahUang1 * 0.31;
        } else if (mataUang1 == "IDR" && mataUang2 == "USD") {
            jumlahUang2 = jumlahUang1 / 15000;  
        } else if (mataUang1 == "IDR" && mataUang2 == "EUR") {
            jumlahUang2 = jumlahUang1 / 16750;  
        } else if (mataUang1 == "IDR" && mataUang2 == "KWD") {
            jumlahUang2 = jumlahUang1 / 51063; 
        } else if (mataUang1 == "EUR" && mataUang2 == "USD") {
            jumlahUang2 = jumlahUang1 / 0.93;   
        } else if (mataUang1 == "EUR" && mataUang2 == "IDR") {
            jumlahUang2 = jumlahUang1 * 16750;
        } else if (mataUang1 == "EUR" && mataUang2 == "KWD") {
            jumlahUang2 = jumlahUang1 * 0.33;
        } else if (mataUang1 == "KWD" && mataUang2 == "USD") {
            jumlahUang2 = jumlahUang1 / 0.31;
        } else if (mataUang1 == "KWD" && mataUang2 == "IDR") {
            jumlahUang2 = jumlahUang1 * 51063;
        } else if (mataUang1 == "KWD" && mataUang2 == "EUR") {
            jumlahUang2 = jumlahUang1 / 3.04;   
        } else {
            cout << "Data invalid, coba masukan mata uang yang lain" << endl;
        
        }
        break;
    }
    cout << fixed << setprecision(2);
    cout << "Nilai convert dari mata uang " << jumlahUang1 <<" "<<  mataUang1 
    <<  " adalah " << jumlahUang2 << " " << mataUang2 << endl << endl;
    return 0;
    
}

void tampilkanMenu(string user) {
    cout << "======================================" << endl << endl;
    cout << "       Welcome " << user << "         " << endl << endl;
    cout << "======================================" << endl;
    cout << "Masukan mata uang seperti list dibawah ini :" << endl;
    cout << "1. USD (Dollar Amerika)" << endl;
    cout << "2. IDR (Rupiah Indonesia)" << endl;
    cout << "3. EUR (Euro Eropa)" << endl;
    cout << "4. KWD (Dinnar Kuwait)" << endl;
}
