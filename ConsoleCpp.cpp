#include <iostream>
#include <algorithm> 
#include <numeric>   

using namespace std;


int main() {
    // memory
    // 
    srand(time(NULL));

    int  *nums, size = 10; 
    nums = new int[size]; //40 byte

    for(int i = 0; i < size; i++){
        nums[i] = 1 + rand() % 100;
    }

    for(int i = 0; i < size; i++){
        cout << nums[i];
        i == size - 1 ? cout << '.' : cout << ', ';
    }
    
    delete[] nums;
    nums = nullptr;
    size = 0;


    return 0;
}