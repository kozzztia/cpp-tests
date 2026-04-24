#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 
#include <fstream> //file
#include <cmath> //NAN isnan
#include <stdexcept> 


using namespace std;

 void divide(float a , float b){
    if(b == 0) throw 100;
    if(a == 3) throw 101;
    if(b == 3) throw 102;

    else cout << (a / b) << endl;
 }

int main() {
    float a, b;

    cout << "insert a :";
    cin >> a;
    cout << "insert b :";
    cin >> b;
    
    try{
        divide(a, b);
    } 
    
    catch (int e){
        if(e == 100) cout << "error" << endl;
        if(e == 101) cout << "a = 3" << endl;
        if(e == 102) cout << "b = 3" << endl;
    };

    return 0;
}


