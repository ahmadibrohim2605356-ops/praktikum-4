#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int pilihan;

    do {
        int jumlahBarang;
        double totalBelanja = 0.0;
        double persenDiskon = 0.0;
        double besaranDiskon = 0.0;
        double totalSetelahDiskon = 0.0;

       
        cout << "Masukkan jumlah barang: ";
        cin >> jumlahBarang;

   
        for (int i = 1; i <= jumlahBarang; i++) {
            double harga;
            cout << "Masukkan harga barang ke-" << i << ": Rp ";
            cin >> harga;
            totalBelanja += harga;
        }

        
        if (totalBelanja > 500000) {
            persenDiskon = 0.10; 
        } else if (totalBelanja >= 250000) {
            persenDiskon = 0.05; 
        } else {
            persenDiskon = 0.00; 
        }

        
        besaranDiskon = totalBelanja * persenDiskon;
        totalSetelahDiskon = totalBelanja - besaranDiskon;

       
        cout << fixed << setprecision(2);
        cout << "Total Harga: Rp " << totalBelanja << endl;
        cout << "Diskon: Rp " << besaranDiskon << endl;
        cout << "Total Setelah Diskon: Rp " << totalSetelahDiskon << endl;

        
        cout << "Ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu untuk tidak): ";
        cin >> pilihan;
        cout << endl;

    
    } while (pilihan == 1);

    cout << "Terima kasih telah berbelanja!" << endl;

    return 0;
}