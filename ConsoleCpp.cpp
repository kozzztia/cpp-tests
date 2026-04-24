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
    if(b == 0) throw runtime_error("cant division");

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
    
    catch (const runtime_error& e){
        cout << e.what() <<endl;
    };


    return 0;
}


