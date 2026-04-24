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

class Building{
    private: 
        string type;
        string address;
        float cost;

    public: 
        Building(const string&  set_type, const string&  set_address, const float&  set_cost)
            : type(set_type), address(set_address), cost(set_cost)
        {};

        void get_info() { cout << "address -" << address << ", type - " << type << endl; };
        void get_memory() { cout << "address : " << this << endl; };
};

int main() {
    Building home("home", "shlapi 23", 1400 );
    home.get_info();
    home.get_memory();

    Building school("school", "shlapi 23", 1400);
    school.get_info();
    school.get_memory();

    return 0;
}