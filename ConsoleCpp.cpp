#include <iostream>
#include <algorithm> 
#include <numeric>  
#include <string> 
#include <cstring>
#include <vector>


using namespace std;

// struct Stats {
//     int sum;
//     int min;
//     int max;
// };

// Stats calc(const vector<int>& args){
//     int sum = accumulate(args.begin(), args.end(), 0);
//     int min = *min_element(args.begin(), args.end());
//     int max = *max_element(args.begin(), args.end());
//     return {sum, min, max};
// }

tuple<int,int,int>  calc(const vector<int>& args){
    int sum = accumulate(args.begin(), args.end(), 0);
    int min = *min_element(args.begin(), args.end());
    int max = *max_element(args.begin(), args.end());
    return {sum, min, max};
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9, -20, 200,};
    
    auto [sum, min, max] = calc(nums);

    cout << max << " " << min << " " << sum << endl;

    return 0;
}


