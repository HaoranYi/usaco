#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // simple integer type
    int i, j;
    j = 0;
    for (int i = 1; i < 101; i++)
    {
        j += i;
    }
    std::cout << (int)j << std::endl;
}