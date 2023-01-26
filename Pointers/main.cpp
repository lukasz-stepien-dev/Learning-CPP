#include <iostream>
#include <cstring>

using namespace std;

#define LOG(x) cout << x << endl;

int main()
{
    // The most simplest pointer
    void* ptr = nullptr;

    // Adress pointer
    int var = 8;
    int* ptr2 = &var;
    LOG(*ptr2);

    // Changing pointer value
    *ptr2 = 10;
    LOG(*ptr2);

    // Buffer and pointer that point to another pointer
    char* buffer  = new char[8];
    memset(buffer, 0, 8);
    char** ptr3 = &buffer;
    delete[] buffer;
    return 0;
}