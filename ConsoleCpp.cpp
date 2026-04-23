#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 
#include <fstream> //file


using namespace std;


void add (int* arr);

int main() {

    srand(time(NULL));
    
    int arr[] = {1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5,};

    add(arr);

    return 0;
}

void add (int* arr){

    ofstream file("text.txt", ios_base::out);
    if(file.is_open()){
        file << "hello im  file";
        file.close();
    }
    
}