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

 void divide(float &a , float &b){
    if(b == 0) throw runtime_error("olla   im  error! you  cant devide for  0");
    if(b < 0) throw runtime_error("olla   im  error with  b");
    if(a < 0) throw runtime_error("olla   im  error with a");


    else cout << (a / b) << endl;
 }

 void insert_num(float &num){

    while(true){
        cout << "insert num : ";
        cin >> num;

        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "try again to ";
        }else{
            break;
        }
    }
 }

int main() {
    float a, b;

   insert_num(a);
   insert_num(b);
    
    try{
        divide(a, b);
    } 
    
    catch (runtime_error& e){
        cout << e.what() << endl;
    };

    return 0;
}


