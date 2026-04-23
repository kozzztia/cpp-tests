#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 
#include <fstream> //file


using namespace std;


void add ();

int main() {

    srand(time(NULL));
    
    int arr[] = {1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5, 1 + rand() % 5,};

    add();

    return 0;
}

void add (){

    ifstream file ("text.txt");

    // vector<string> temp;
    // if(file.is_open()){
    //     string line;
        
    //     while(getline(file, line)){
    //         temp.push_back(line);
    //     }
    //     file.close();
    // }

    // for(const auto& text : temp){
    //     cout << text <<endl;
    // }


    char temp[100];

    if(file.is_open()){
        file.getline(temp, 100);
        file.close();
    };

    cout << temp << endl;
}