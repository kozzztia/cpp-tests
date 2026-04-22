#include <iostream>
#include <algorithm> 
#include <numeric>  
#include <string> 
#include <cstring>
#include <vector>


using namespace std;

void print(const string& text){
    cout << text << endl;
}

void print_all(const vector<string>& text ){
    int size = text.size();

    for(int i = 0; i < size; i++){
        print(text[i]);
    };
}

int main() {
    vector<string> text;
    text.push_back("hello");
    text.push_back("world");


    print_all(text);

    return 0;
}


