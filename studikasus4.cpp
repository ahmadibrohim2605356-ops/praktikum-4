#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int mapel;

    cout << fixed << setprecision(2);

    do {
        int nilai_mapel;

        do {
        cout <<"masukkan jumalah mata pelajaran: ";
        cin >> nilai_mapel;

        if (nilai_mapel <= 2) {
            cout << "[Peringatan] Jumlah pembelian harus minimal 3! Silakan coba lagi.\n\n";
            }
        } while (nilai_mapel <= 2);

        double total_nilai = 0;
        for (int i = 1; i <= nilai_mapel; i++) {
            double minimal_nilai;
            cout << "Masukkan nilai mata pelajaran ke-" << i << ": ";
            cin >> minimal_nilai;
            total_nilai += minimal_nilai;
        }
        double rata_rata = total_nilai / nilai_mapel;

        string prestasi = "";
        if (rata_rata >= 85){
            prestasi ="sangat baik";
        }else if (rata_rata >= 70){
            prestasi ="baik";
        }else if (rata_rata >= 50){
            prestasi ="cukup";
        }else {
            prestasi ="perlu peningkatan";
        }

        cout << "nilai rata-rata: " << rata_rata << endl;
        cout << "prestasi: " << prestasi << endl;

        cout << "ingin menghitung nilai siswa lain? (1 untuk ya, selain itu tidak): ";
        cin >> mapel;
        cout << endl;

    }while (mapel == 1);

    return 0;
}