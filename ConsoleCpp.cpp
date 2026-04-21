#include <iostream>
#include <algorithm> 
#include <numeric>   

using namespace std;


int main() {

    int numbers[5] = {1,2,3,3,5}, length = sizeof(numbers) / sizeof(numbers[0]), summ;

    // auto  - автоматически  получает типа  который  прийдет  от  выполнения  функции
    // min_element max_element достает  адресс - ссылку  на  елемент  который  ищем
    // numbers == numbers[0] numbers + length == numbers[length] но похоже -  1й  ето ссылка - адресс  2й  ето уже  елемент
    auto min = min_element(numbers, numbers + length);
    auto max = max_element(numbers, numbers + length);
    // * берет значение   полученой  ссылки на значение 
    // и  присваеваем переменной   значение  сссылки 
    int ma = *max;
    int mi = *min;
    // 0 ето старт   суммы  -   с чего начинаем  как reduce
    summ = accumulate(numbers, numbers + length, 0);


    
    cout << "min : " << min << endl;
    cout << "max : " << max << endl;
    cout << "summ : " << summ << endl;

    return 0;
}