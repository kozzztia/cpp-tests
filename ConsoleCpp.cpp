#include <iostream>
#include <algorithm> 
#include <numeric>   

using namespace std;


int main() {

    char word[] = {'y', 'n', '4', '3', '0' , 't', 'o'};
    int size = sizeof(word) / sizeof(word[0]);

    for(int i = 0, z = size -1; i < size; i++, z--){
        cout << word[i] << ' ' << word[z] << endl;
    }

    return 0;
}