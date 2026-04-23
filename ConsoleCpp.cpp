#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 
#include <fstream> //file


using namespace std;




struct Tree {
    string name;
    int age;
    bool is_alive;
    float height;
};

void add (Tree &tree);
void add (Tree* tree);


int main() {

    Tree dub = {"дуб", 15, true, 12.5,};

    add(dub);

    add(&dub);

    return 0;
}

void add (Tree &tree){
    cout << tree.name << "1" << endl;
}
void add (Tree* tree){
    cout << tree->name << "2" << endl;
}

