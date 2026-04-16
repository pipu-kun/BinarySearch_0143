#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input(){
    while (true){
        if (nPanjang <= 0){
            break;
        }else{
            cout << "\nJumlah element tidak boleh lebih dari 10.\n";
        }
    }

    cout << "------------------------------------\n";
    cout << "           Masukan Array            \n";
    cout << "------------------------------------\n";
}