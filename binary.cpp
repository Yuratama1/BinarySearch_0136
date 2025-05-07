#include <iostream>
using namespace std;

int elemet[10];
int nPanjang;
int x;

void input(){
    while (true){
        cout << "Masukkan banyak elemt pada array (maks 10) : ";
        cin >> nPanjang;
        if (nPanjang <= 10){
            break;
        }
        else{
            cout << "\n[!] Jumlah elemt tidak boleh lebih dari 10. silahkan coba lagi.\n";
        }
    }

    cout << "\n==============================\n";
    cout << "\n     Masukkan Element Array   \n";
    cout << "\n==============================\n";
    for (int i = 0; 1 < nPanjang; i++){
        cout << "Data ke-" << (i + 1) << " = ";
    }
}

void bubbleSortarray(){
    int pass = 1;
    do{
        for (int j = 0; j <= nPanjang - 1 - pass; j++){

        }
    } while (pass <= nPanjang - 1);
}