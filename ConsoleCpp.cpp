#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Person;
class User;

class Person{
    protected : 
        string name;
        int year;
        bool smart;
        int  age;

        int get_year(){
            time_t now = time(0);
            tm* localTime = localtime(&now); 
            return 1900 + localTime->tm_year;
        }

        void create_info(){
            cout << "create person :" << this->name << endl; 
        }
        void delete_info(){
            cout << "delete person :" << this->name << endl; 
        }
    
    public:
        Person(const string &name, int year): name(name), year(year){

            this->age = get_year() - year;
            this->smart = age < 20;
            create_info();
        };

        Person() : name("Unknown"), year(2000), smart(false), age(0) {create_info();}
        
        ~Person(){delete_info();}

        void get_info(){
            string info = this-> name + " : " + to_string(this->age) + " years old, so hi is " + (this->smart? "smart": "fool");
            cout << info;
        }

};

class User : public Person{
    protected: 
        string pc;
    public:
        User(const string& name, int year, const string& pc): Person(name, year), pc(pc) {} //данные  пошли  в  родительский  класс + пс новое
        void get_info(){
            Person::get_info();
            cout << " has  pc: " << this->pc << ' ';
        }
        void get_pc_info() {
            cout << "User " << this->name << " has PC: " << this->pc << endl;
        } 
    
};

class Worker : public User{
    protected: 
        string work;
    public:
        Worker(const string& name, int year,const string& pc, const string& work): User(name, year , pc), work(work) {} //данные  пошли  в  родительский  класс + work новое
        void get_info(){
            Person::get_info();
            cout << " has  work: " << this->work << ' ';
        }
        void get_pc_info() {
            cout << "Worker " << this->name << " has PC: " << this->pc << endl;
        } 

        void get_work_info() {
            cout << "Worker " << this->name << " has work: " << this->work << endl;
        } 
    
};


int main() {

    Person misha("Misha", 1990);

    misha.get_info();

    User ivan("ivan", 2015, "hp");

    ivan.get_info();

    ivan.get_pc_info();

    Worker kostia("Kostia", 1987, "hp", "programmer");

    kostia.get_info();

    kostia.get_pc_info();

    kostia.get_work_info();

    return 0;
}
