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

int main() {
    string str = "hello", str2 = "world", str3;
    
    str3 = str + ' ' + str2;
    cout << str << endl;

    str.append(str2);
    // cout << str.length() << endl;
    str.pop_back();
    str.resize(10);
    str.push_back('!');
    

    
    
    cout << str << endl;

    return 0;
}


