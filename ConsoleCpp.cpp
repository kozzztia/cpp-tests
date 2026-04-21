#include <iostream>
#include <time.h> 

using namespace std;


int main() {

    int numbers[5] = {4, 5, 6, 7, 8}, step = 0, length = sizeof(numbers) / sizeof(numbers[0]);
    bool stop = false;

    do {
        if(step >= length){
            stop = true;
            break;
        }else{
            cout << numbers[step] << endl;
        };
        step++;
    } while (!stop);

    return 0;
}