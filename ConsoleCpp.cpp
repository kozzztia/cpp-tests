#include <iostream>

using namespace std;


int main() {

    int numbers[5], length = sizeof(numbers) / sizeof(numbers[0]), min, max, summ = 0;

    for(int i = 0; i < length; i++){
        cout << "insert number :"; 
        cin >> numbers[i];
    }

    min = max = numbers[0];

    for(int i = 0; i < length; i++){
        summ += numbers[i];
        if (numbers[i] < min) min = numbers[i];
        if (numbers[i] > max) max = numbers[i];
    }


    cout << "summ " << summ << endl;
    cout << "max " << max << endl;
    cout << "min " << min << endl;


    return 0;
}