#include <iostream>
using namespace std;

// Fungsi untuk mencari FPB (pakai algoritma Euclid)
int fpb(int a, int b) {
    while (b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }
    return a;
}

int main() {
    int a, b;

    cout << "INPUT  : ";
    cin >> a >> b;

    int hasil = fpb(a, b);

    cout << "OUTPUT : " << hasil << endl;

    return 0;
}