#include <iostream>
#include <algorithm> 
#include <numeric>   

using namespace std;


int main() {

    

    int matrix[3][5] = {
        {1, 2, 1, 6, 8},
        {5, 6, 3, 2, 8},
        {7, 3, 2, 3, 9},
    };
    int size = sizeof(matrix) / sizeof(matrix[0]);
    int size_in = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    for(int i = 0; i < size; i++){
        for(int z = 0; z < size_in; z++){
            cout << matrix[i][z];
            if(z == size_in -1) cout << endl;
            else cout << ',';
        }
    }

    return 0;
}