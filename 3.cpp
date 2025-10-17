#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    MEMORYSTATUS mem;
    mem.dwLength = sizeof(mem);
    GlobalMemoryStatus(&mem);

    cout << "Всего физической памяти: " << mem.dwTotalPhys / (1024 * 1024) << " МБ" << endl;
    cout << "Доступно физической памяти: " << mem.dwAvailPhys / (1024 * 1024) << " МБ" << endl;
    cout << "Всего виртуальной памяти: " << mem.dwTotalVirtual / (1024 * 1024) << " МБ" << endl;
    cout << "Доступно виртуальной памяти: " << mem.dwAvailVirtual / (1024 * 1024) << " МБ" << endl;

    return 0;
}
