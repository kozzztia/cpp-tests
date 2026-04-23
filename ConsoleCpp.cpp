#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 
#include <fstream> //file


using namespace std;

enum Options {
    open, 
    close, 
    wait, 
    del,
};

struct File {
    float weight;
    string name;
    Options options;
};

int main() {

    File my_file = {
        .weight = 10.5f,
        .name = "text.txt",
        .options = Options::del,
    };

    // cout << my_file.options << endl;

    if(my_file.options == Options::close){
        cout << "close" << endl;
    }
    if(my_file.options == Options::open){
        cout << "open" << endl;
    }
    if(my_file.options == Options::wait){
        cout << "wait" << endl;
    }
    if(my_file.options == Options::del){
        cout << "del" << endl;
    }

    return 0;
}



