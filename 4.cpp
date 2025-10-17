#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    ULARGE_INTEGER freeBytes, totalBytes, totalFree;

    if (GetDiskFreeSpaceEx("C:\\", &freeBytes, &totalBytes, &totalFree)) {
        cout << "Информация о диске C:\\" << endl;
        cout << "Общий объем: " << totalBytes.QuadPart / (1024 * 1024 * 1024) << " ГБ" << endl;
        cout << "Свободно: " << freeBytes.QuadPart / (1024 * 1024 * 1024) << " ГБ" << endl;
    } else {
        cout << "Не удалось получить информацию о диске" << endl;
    }

    return 0;
}
