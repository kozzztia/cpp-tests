#include <iostream>
#include <string>
using namespace std;

class Car; // предварительное объявление
class Person;

class Car {
    private:
        string name;
        float speed;

    public:
        Car(const string& name, float speed) : name(name), speed(speed) {}

        void info() const {
            cout << "Car: " << this->name << ", speed: " << this->speed << endl;
        }

        // Разрешаем Person доступ к приватным полям Car
        friend class Person;
};

class Person {
    private:
        string name;

    public:
        Person(const string& name) : name(name) {}

        void fast(Car& car){
            car.speed += 60;
            cout << car.speed << endl;
        };
        void slow(Car& car){
            car.speed -= 60;
            cout << car.speed << endl;
        };
        void stop(Car& car){
            car.speed = 0;
            cout << car.speed << endl;
        };
};

int main() {
    Person ivan("Ivan");
    Car bmw("BMW", 1000);

    bmw.info();
    ivan.fast(bmw);
    ivan.fast(bmw);
    ivan.fast(bmw);

    ivan.slow(bmw);

    ivan.stop(bmw);
    bmw.info();

    return 0;
}
