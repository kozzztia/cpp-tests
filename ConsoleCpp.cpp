#include <iostream>
#include <algorithm> 
#include <numeric>   

using namespace std;


int main() {
    // memory
    // 
    srand(time(NULL));

    int  *nums, *num, size = 10; 
    nums = new int[size]; //40 byte
    num = new int;
    *num = 50;

    for(int i = 0; i < size; i++){
        nums[i] = 1 + rand() % 100;
    }

    for(int i = 0; i < size; i++){
        cout << nums[i];
        i == size - 1 ? cout << '.' : cout << ", ";
    }
    
    delete[] nums;
    delete num;
    nums = nullptr;
    size = 0;


    return 0;
}