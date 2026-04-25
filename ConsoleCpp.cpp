#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

template <typename T, typename T2, size_t N>//шаблон с типом и размером.

void show_all(T (&arr)[N]) {// «ссылка на массив из N элементов типа T».

        for(T2 i = 0; i < N; i++ ){
            cout << arr[i] << " ";//перешагивание  на  елемент  в  масиве
        };

        cout << endl;
}

int main() {

    int arr[] = {1,2,3,4,56,5};
    float arr2[] = {1.4f,2.2f,3.55f,4.1f,56.01f,5};
    string arr3[] = {"1.4f","2","3","4","56","5"};
    char arr4[] = {'1', 'd', 'h', 'H', '0'};
    bool arr5[] = {true, false, false, false};


    show_all<int, int>(arr);
    show_all<float, int>(arr2);
    show_all<string, int>(arr3);
    // show_all(arr4);
    // show_all(arr5);


    return 0;
}
