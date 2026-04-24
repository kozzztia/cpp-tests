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
        int length_result;

    public: 

        Building(const string&  set_type, const string&  set_address, const float&  set_cost)
            : type(set_type), address(set_address), cost(set_cost)
        {
           length_result = address.length();
        };

        Building()
            : type("halupa"), address("shlapi 3"), cost(100)
        {
           length_result = address.length();
        };

        void get_info() { cout << "address -" << address << ", type - " << type << " letter length :" << length_result << endl; };
        void get_memory() { cout << "address : " << this << endl; };

        ~Building(){
            cout << "DELEDE object" << type << endl;
        }
};

int main() {
    Building home("home", "shlapi 23", 1400 );
    home.get_info();
    home.get_memory();

    Building school("school", "shlapi 13", 1400);
    school.get_info();
    school.get_memory();

    Building halupa;
    halupa.get_info();
    halupa.get_memory();

    return 0;
}