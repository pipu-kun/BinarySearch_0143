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

    for (int i; i < nPanjang; i++){
        cout << "Data ke-" << (i + 1) << ":";
        cin >> element[i]
    }
}

void bubbleShort(){
    int pass; = 1;
    do {
        for (int i = 0; i <= nPanjang - 1 - pass; i++){
            if (element[i] > element[i-1]){
                int temp = element[i];
                element[i] = element[i+1];
                element[i+1] = temp;
            }
        }
        pass++;
    }while(pass <= nPanjang -1);
}

void display(){
    
}