#include<iostream>
using namespace std;

int main () {

    int sum = 0;
    for (int i = 2; i <= 3; i++) {
    sum += i;
    cout << "Iterasi ke-" << i << ": Nilai i adalah " << i << ", Jumlah saat ini adalah " << sum << endl; }
    cout << "Total penjumlahan: " << sum << endl;
    return 0;

}
