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
    cout << "------------------------------------\n";
    cout << "     element setelah urut(Asc)      \n";
    cout << "------------------------------------\n";

    for (int i; i < nPanjang; i++){
        cout << element[i];
        if (i < nPanjang - 1){
            cout << ">";
        }
    }
    cout << endl;
}

void BinarySearch(){
    char ulang;
    do{
        cout << "------------------------------------\n";
        cout << "        Pencarian Binary Search     \n";
        cout << "------------------------------------\n";

        cout << "Search element:";
        cin >> x;

        int low;
        int high = nPanjang -1;

        do{
            int mid = (low + high)/2;
            if (element[mid] == x){
                cout << "\n[*]element" << x << "Ditemukan di indexs" << mid << "\n";
                return;
            }
            if (x < element[mid]){
                high = mid - 1;
            }
            if (x > element[mid]){
                low = mid + 1;
            }
        } while(low <= high);

        if (low > high){
            cout << "[x]Element" << x << "Tidak ditemukan dalam array.\n";
        }

        cout << "Search Again? (Y/n)";
        cin >> y;
    }while(ulang == 'y' || ulang == 'Y')
}