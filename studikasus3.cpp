#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float kwh;
    float tarifbln;
    float diskon;
    float trfdiskon;
    int tagihan_tambahan;

     do {
        cout << "Masukkan penggunaan listrik (kwh): ";
        cin >> kwh;

        if (kwh > 0 && kwh <= 100) {
            tarifbln = kwh * 1500;
        }

        if (kwh > 100 && kwh <= 300) {
            tarifbln = kwh * 2000;
        }

        if (kwh > 300) {
            tarifbln = kwh * 3000;
        }

        diskon = 0;

        if (tarifbln > 1000000) {
            diskon = tarifbln * 0.10;
        }

        trfdiskon = tarifbln - diskon;

        cout << fixed << setprecision(2);

        if (kwh > 0) {
            cout << "Total Penggunaan Listrik: "
                 << kwh << " kWh" << endl;

            cout << "Total Tagihan Sebelum Diskon: Rp "
                 << tarifbln << endl;

            cout << "Diskon: Rp "
                 << diskon << endl;

            cout << "Total Tagihan Setelah Diskon: Rp "
                 << trfdiskon << endl;
        }

        cout << "Ingin menghitung tagihan untuk penggunaan lain? ";
        cout << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> tagihan_tambahan;

    } while (tagihan_tambahan == 1);

    return 0;
}
