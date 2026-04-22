#include <iostream>
#include <algorithm> 
#include <numeric>   

using namespace std;


int main() {
    // memory
    // 
    srand(time(NULL));

    int size = 10; 
    int* nums = new int[size]; //40 byte
    int* num = new int;
    *num = 50;

    for(int i = 0; i < size; i++){
        nums[i] = 1 + rand() % 100;
    }

    for(int i = 0; i < size; i++){
        cout << nums[i];
        i == size - 1 ? cout << '.' : cout << ", ";
    }
    
    delete[] nums;
    cout << "there :" << *num << endl;
    delete num;
    nums = nullptr;
    num = nullptr;
    size = 0;
    return 0;
}