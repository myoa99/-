#include <iostream>
#include <cstring>
using namespace std;

int main() {
    float number = 24.5;
    unsigned char bytes[4]; //массив из 4 байтов
    memcpy(bytes, &number, sizeof(float)); //заполнение 4 байтов сырыми битами числа

    cout << "Число: " << number << endl;
    cout << "В двоичном виде: ";

    for (int i = 3; i >= 0; i--) {      //идем по байтам числа 
        unsigned char b = bytes[i];     //записываем в b значение байта для дальнейшей обработки
        for (int j = 7; j >= 0; j--) {      // идем по битам этого байта
            if (b >= (1 << j)) {            //проверяем, можно ли вычесть из байта значение 2^j
                cout << 1;
                b = b - (1 << j);           //если да, то бит = 1, вычитаем 2^j
            } else {
                cout << 0;                  //если нет, то бит = 0 
            }
        }
    }

    cout << endl;
    return 0;
}
