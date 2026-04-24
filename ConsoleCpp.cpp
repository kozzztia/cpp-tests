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
    float a =3, b=2.444444f, c= -15, result;

    result = pow(a, b); //привсти к стперни
    result = abs(c); //положительное
    result = sin(c); //
    result = cos(c); //
    result = sqrt(b); // квадратный  корень
    result = ceil(b);
    result = floor(b);
    result = round(b);

    
    cout << result << endl;

    return 0;
}


