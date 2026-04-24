#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 
#include <fstream> //file
#include <cmath> //NAN isnan


using namespace std;

enum Actions {
    dev = '/',
    plus = '+',
    minus = '-',
    multi = '*',
};

float calc (float a, float b, Actions action);

int main() {
    setlocale(LC_ALL, "");
    char op;
    float a, b;

    cout << "insert first num: " ;
    cin >> a;
    cout << "insert second num: " ;
    cin >> b;
    cout << "insert action: " ;
    cin >> op;

    Actions action = static_cast<Actions>(op); 

    float result = calc(a, b, action);

    if (isnan(result)) {
        cout << "Error: unknow  operation" << endl;
    } else {
        cout << "Result: " << result << endl;
    }

    return 0;
}

float calc(float a, float b, Actions action) {
    switch (action) {
        case Actions::plus:  return a + b;
        case Actions::minus: return a - b;
        case Actions::dev:   return b != 0 ? a / b : NAN; 
        case Actions::multi: return a * b;
        default:    return NAN;
    }
}



