#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 


using namespace std;


void print (const string& arg){
    cout << arg << endl;
}

void print (const int& arg){
    cout << arg << endl;
}


void add (const int&  a, const int& b){
    int sum = a + b;

    print(to_string(sum));
}

int main() {

    add(12, 15);
    return 0;
}

