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


class Person;
class Car;

class Person{
    private :
        string name;
        string third_name;

    public : 
        Person(const string& name, const string& third_name ) : name(name) , third_name(third_name){}

        friend void get_info(Person person, Car car);
};

class Car{
    private :
        string name;
        float speed;
    
    public : 
        Car(const string& name, const float& speed ) : name(name) , speed(speed){};

        friend void get_info(Person person, Car car);
};

void get_info(Person person, Car car){
            cout << "person name" << person.name <<  " has  car :" << car.name << endl;
};


int main() {

    Person ivan("Ivan", "vanchez");
    Car bmw("BMW", 1000);

    get_info(ivan, bmw);

    return 0;
}