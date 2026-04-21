#include <iostream>
#include <time.h> 

using namespace std;


int main() {

    srand(time(NULL));
    int rand_number = 1 + rand() % 100, number, step = 0;
    bool flag = true;
    do{
        if(step == 0 ) cout << "insert  your  number (0 - 100): ";
        cin >> number;
        step++;
        if(number == rand_number){
            flag = false;
            cout << "graеы  your  number  is " << number << " you had: " << step << " steps";
        }else if(number > rand_number){
            cout << "number : " << number << " is biger insert new: ";
        }else if(number < rand_number){
            cout << "number : " << number << " is smaller insert  new  one: ";
        }else{
            cout << "somesing  wrong";
        }
        
    }while (flag);

    return 0;
}