#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

template <class T, size_t N>

class Arrays {
    protected: 
        // poiner  to  array
        T* arr;
    
    public: 
        Arrays(T (&a)[N] ){
            arr = new T[N];

            for(int i = 0; i < N; i++) 
                *(arr + i) = *(a + i);

            cout << "start" << endl;;
        };

        void get_all(){
            for(int i = 0; i < N; i++){
                cout << *(arr + i);
                if(i < N -1) cout  << ", ";
            }

            cout << endl;
        };

        void get_summ(){
            T sum = 0;
            for(int i = 0; i < N; i++) 
                sum += *(arr + i);

            cout << "sum is " << sum << endl;
        };

        void get_min(){
            T min = *arr;

            for(int i = 0; i < N; i++) 
                if(min > *(arr + i)) min = *(arr + i);

            cout << "min is " << min << endl;
        };

        void get_max(){
            T max = *arr;

            for(int i = 0; i < N; i++) 
                if(*(arr + i) > max) max = *(arr + i);

            cout << "max is " << max << endl;
        };

        ~Arrays(){ delete[] arr; cout << "delete" << endl;};

};


int main() {

    int array[] = {1,2,3,4,5,6,7,8,9,0};
    float array2[] = {1.1,2,3,4,5,6,7.2,8,9,0.5f};


    Arrays test(array); 

    test.get_all();

    Arrays test2(array2); 

    test2.get_all();


    return 0;
}
