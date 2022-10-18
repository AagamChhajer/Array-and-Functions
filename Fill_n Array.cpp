#include <iostream>
using namespace std;

int main()
{
    int pattern[5];
    fill_n(pattern, 5, 100);
    for (int i = 0; i < 5; i++)
    {
        cout << pattern[i] << " ";
    }
}
