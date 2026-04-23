#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 


using namespace std;


void add (int* arr, int size);

int main() {

    srand(time(NULL));
    
    int arr[] = {1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5,};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    add(arr, size);

    return 0;
}

void add (int* arr, int  size){
    int min = *arr;
    int max = *arr;


    for(int i = 0; i < size; i++){
        if(min > *arr++){
            min = *arr++;
        };
        if(min < *arr++){
            min = *arr++;
        };
    };

    cout << "min : " << min << " max : " << max << endl;

}