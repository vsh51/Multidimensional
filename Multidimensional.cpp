#include <iostream>
#include <vector>
#include <deque>
#include "./create_array.cpp"
using namespace std;

int main() {
    short** arr = CreateArray<short**, short>(3, 2);
    int j = 0x21;
    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int i2 = 0; i2 < 2; i2++)
        {
            arr[i1][i2] = j++;
        }
    }

    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int i2 = 0; i2 < 2; i2++)
        {
            std::cout << (int)arr[i1][i2] << " ";
        }
    }
}