#include <iostream>
using namespace std;

int main() {
    int grid[5][4] = {{1,2,3,4},
                      {4,3,2,1},
                      {1,2,3,4},
                      {4,3,2,1},
                      {1,2,3,4}};
    //  rows of the array
    for (int i = 0; i < 5; ++i) {

        // columns of the array
        for (int j = 0; j < 4; ++j) {
            cout   << grid[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}