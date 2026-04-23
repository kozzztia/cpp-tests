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
    void get_info() {cout << name << ' ' << age << ' ' << height << ' ' << (is_alive ? "alive":"dead") << endl; };
};

struct Point {
    int x, y;
    void get_sum(string text){ cout << text << x + y << endl; }; 
};

void add (Tree &tree);
void add (Tree* tree);
void add_sum (Point &numbs, string text);


int main() {

    Tree dub = {"дуб", 15, true, 12.5,};
    Tree apple = {"яблоко", 5, true, 5.5,};
    Point one = {2,5};

    add(dub);

    add(&apple);

    add_sum(one, "the sum  is : ");

    return 0;
}

void add (Tree &tree){
    cout << tree.name << "1" << endl;
    tree.get_info();
}
void add (Tree* tree){
    cout << tree->name << "2" << endl;
    tree->get_info();
}

void add_sum (Point &numbs, string text){
    cout << numbs.x << '+' << numbs.y << endl;
    numbs.get_sum(text);
};

