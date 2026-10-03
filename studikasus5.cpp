#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;


string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    int ulang = 1;

    do {
        double totalMakanan = 0;
        double totalTransportasi = 0;
        double totalHiburan = 0;
        double totalLainnya = 0;

        double pengeluaranTerbesar = -1;
        string kategoriPengeluaranTerbesar = "";

        for (int i = 1; i <= 7; ++i) {
            string kategori;
            double jumlah;

            cout << "Masukkan kategori pengeluaran hari ke-" << i << " (Makanan/Transportasi/Hiburan/Lain-lain): ";
            cin >> kategori;

            cout << "Masukkan jumlah pengeluaran: Rp ";
            cin >> jumlah;

            string katLower = toLower(kategori);

           
            if (katLower == "makanan") {
                totalMakanan += jumlah;
            } else if (katLower == "transportasi") {
                totalTransportasi += jumlah;
            } else if (katLower == "hiburan") {
                totalHiburan += jumlah;
            } else {
                totalLainnya += jumlah;
            }

          
            if (jumlah > pengeluaranTerbesar) {
                pengeluaranTerbesar = jumlah;
                kategoriPengeluaranTerbesar = kategori;
            }
        }

        double totalSeminggu = totalMakanan + totalTransportasi + totalHiburan + totalLainnya;

    
        cout << fixed << setprecision(2);
        cout << "Total Pengeluaran Makanan: Rp " << totalMakanan << endl;
        cout << "Total Pengeluaran Transportasi: Rp " << totalTransportasi << endl;
        cout << "Total Pengeluaran Hiburan: Rp " << totalHiburan << endl;
        cout << "Total Pengeluaran Lainnya: Rp " << totalLainnya << endl;
        cout << "Total Pengeluaran Selama Seminggu: Rp " << totalSeminggu << endl;
        cout << "Pengeluaran Terbesar: Rp " << pengeluaranTerbesar << " pada kategori " << kategoriPengeluaranTerbesar << endl;

        cout << "Ingin mencatat pengeluaran untuk minggu lain? (1 untuk ya, selain itu untuk tidak): ";
        cin >> ulang;

        cout << endl;

    } while (ulang == 1);

    return 0;
}