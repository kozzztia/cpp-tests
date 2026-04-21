#include <iostream>
#include <time.h> 

using namespace std;


int main() {

    // for 

    // for(int i = 1; i <= 10; i++){
    //     for(int o = 1; o <= i; o++){
    //         cout << o ;
    //     }
    //     cout << endl;
    // }

    // while

    int num = 100, num2 = 100;

    // while(num < 10){
    //     num++;
    //     while(num2 < num){
    //         num2++;
    //         cout << num2;
    //     }
    //     num2 = 0;
    //     cout << endl;
    // }

    do {
        num++;
        do{
            num2++;
            cout << num2;
        }while(num2 < num);
        num2 = 0;
        cout << endl;
    } while (num < 10);

    

    return 0;
}