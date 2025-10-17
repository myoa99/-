#include <iostream>
using namespace std;

int main() {
    int number = -90;
    int positive = -number;  // модуль числа 
    int bits[8];    //массив  для записи битов

    for (int i = 7; i >= 0; i--) {      // перевод числа в двоичку
        bits[i] = positive % 2;
        positive = positive / 2;
        cout<<bits[i];
    }

    cout<<endl;

    for (int i = 0; i < 8; i++) {       //инвертирование 0 и 1 
        if (bits[i] == 1)
            bits[i] = 0;
        else
            bits[i] = 1;
        cout<<bits[i];
    }

    cout<<endl;

    int carry = 1;      
    for (int i = 7; i >= 0; i--) {      // прибавление 1 
        int sum = bits[i] + carry;
        if (sum == 2) {
            bits[i] = 0;
            carry = 1;
        } else {
            bits[i] = sum;
            carry = 0;
        }
    }

    for (int i = 0; i < 8; i++) {   //вывод переведенного числа 
        cout << bits[i];
    }

    return 0;
}
