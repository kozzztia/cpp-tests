#include <iostream>
#include <algorithm> 
#include <numeric>  
#include <string> 
#include <cstring>

using namespace std;


int main() {

    char test[100];

    cin.getline(test, 100);

    string text = "hello world";

    cout << strlen(test);

    cout  << "\n";

    cout << text.size();


    return 0;
}