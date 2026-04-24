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
        float cost;
        string type;
        string address;
    
    public: 
        void get_info() { cout << "address -" << address << ", type - " << type << endl; };
        void get_memory_address() { cout << "memory : " << sizeof(Building) << "byte , address : " << this << endl; };
        void set_data(const string& set_type, const string& set_address, const float&  set_cost) {
            type = set_type;
            address = set_address;
            cost = set_cost;
        }
};

int main() {
    Building home;
    home.set_data("home", "dick streen 2", 4500);
    Building school;
    school.set_data("school", "dick streen 15", 1500);

    home.get_info();
    school.get_info();

    return 0;
}