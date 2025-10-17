#include <iostream>
#include <intrin.h>
#include <cstring>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int CPUInfo[4];
    char CPUString[32];
    __cpuid(CPUInfo, 0);

    memset(CPUString, 0, sizeof(CPUString));
    *((int*)CPUString)     = CPUInfo[1];
    *((int*)(CPUString+4)) = CPUInfo[3];
    *((int*)(CPUString+8)) = CPUInfo[2];

    cout << "Производитель процессора: " << CPUString << endl;

    // Получаем полное название процессора
    int CPUBrand[4];
    char Brand[64];
    memset(Brand, 0, sizeof(Brand));

    __cpuid(CPUBrand, 0x80000002);
    memcpy(Brand, CPUBrand, sizeof(CPUBrand));

    __cpuid(CPUBrand, 0x80000003);
    memcpy(Brand + 16, CPUBrand, sizeof(CPUBrand));

    __cpuid(CPUBrand, 0x80000004);
    memcpy(Brand + 32, CPUBrand, sizeof(CPUBrand));

    cout << "Название процессора: " << Brand << endl;

    return 0;
}
