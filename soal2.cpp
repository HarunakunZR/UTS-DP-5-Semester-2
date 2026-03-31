#include <iostream>
using namespace std;

int main() {
    int n, kuadrat, jumlah = 0;

    cout << "INPUT : ";
    cin >> n;

    kuadrat = n * n;

    //tabel jumlah digit kuadrat
    while (kuadrat > 0) {
        jumlah += kuadrat % 10;
        kuadrat /= 10;
    }

    if (jumlah == n) {
        cout << "OUTPUT : ANGKA NEON" << endl;
    } else {
        cout << "OUTPUT : BUKAN ANGKA NEON" << endl;
    }

    return 0;
}