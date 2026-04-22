#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 


using namespace std;




int main() {

    srand(time(NULL));
    int num = 1 + rand() % 5;

    int &num2 = num;
    cout << &num << '-' << num << endl;
    cout << &num2 << '-' << num2 << endl;

    num2 = 5 + rand() % 10;
    cout << &num << '-' << num << endl;
    cout << &num2 << '-' << num2 << endl;

    return 0;
}

