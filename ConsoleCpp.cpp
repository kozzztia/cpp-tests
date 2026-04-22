#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 


using namespace std;


template <typename T>

void print (const T& arg){
    cout << arg << endl;
}


void add (const vector<int>& arg){
    int sum = accumulate(arg.begin(), arg.end(), 0);
    print(sum);
}

int main() {

    add({1,2,3,4,2,3,4,3,2,11,3});
    
    return 0;
}

