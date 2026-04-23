#include <iostream>
#include <algorithm> //min max
#include <numeric>  //accumulate
#include <string> 
#include <cstring>
#include <vector> //universal  array
#include <tuple> //typing 
#include <fstream> //file


using namespace std;


struct Point {
    int x, y;
    void get_position(){ cout << "position is:" << x << ':' << y << endl; }; 
};

struct Tree {
    string name;
    int age;
    bool is_alive;
    float height;
    Point position;
    void get_info() {cout << name << ' ' << age << ' ' << height << ' ' << (is_alive ? "alive":"dead") << endl; };
};

void add (Tree &tree);
void add (Tree* tree);


int main() {

    Tree dub = {"дуб", 15, true, 12.5, {1,4}};
    Tree apple = {"яблоко", 5, true, 5.5, {4,6}};
    Point one = {2,5};

    add(dub);

    add(&apple);

    return 0;
}

void add (Tree &tree){
    cout << tree.name << "1" << endl;
    tree.get_info();
    tree.position.get_position();
};
void add (Tree* tree){
    cout << tree->name << "2" << endl;
    tree->get_info();
    tree->position.get_position();
};


