#include <iostream>
using namespace std;

int main() {
    int jumlahMotor, jumlahMobil, jamMasuk, jamKeluar;
    const int tarifMotor = 2000;
    const int tarifMobil = 5000;

    cout << "Masukkan jumlah motor: ";
    cin >> jumlahMotor;
    cout << "Masukkan jumlah mobil: ";
    cin >> jumlahMobil;
    cout << "Input jam masuk (format 24 jam): ";
    cin >> jamMasuk;
    cout << "Input jam keluar (format 24 jam): ";
    cin >> jamKeluar;

    // Menghitung durasi parkir
    int durasi = jamKeluar - jamMasuk;
    if (durasi < 0) durasi += 24;  // Mengatasi kasus keluar lewat tengah malam

    int totalBiaya = (jumlahMotor * tarifMotor + jumlahMobil * tarifMobil) * durasi;
    
    cout << "Total biaya parkir: Rp " << totalBiaya << " (" << durasi << " jam)" << endl;
    
    return 0;
}