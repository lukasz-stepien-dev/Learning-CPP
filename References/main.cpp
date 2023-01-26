#include <iostream>

using namespace std;

#define LOG(x) cout << x << endl;

void Increment(int& value)
{
    value++;
}

int main() 
{
    int a = 9;
    Increment(a);
    LOG(a);
}