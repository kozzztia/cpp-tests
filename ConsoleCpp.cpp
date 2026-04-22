#include <iostream>
#include <algorithm> 
#include <numeric>  
#include <string> 
#include <cstring>
#include <vector>


using namespace std;

int calc(const vector<int>& args){
    int summ = accumulate(args.begin(), args.end(), 0);

    return summ;
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9, -20, 200,};
    
    int num = calc(nums);

    cout << num << " finish";

    return 0;
}


