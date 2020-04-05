#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int nums[4];
    int a = 0,b = 0,c = 0;
    // take input as an array of ints, then sort array
    // final value is the sum, then do sum - num1 etc.
    for(int i = 0; i < 4; i++){
        cin >> nums[i];
    }
    sort(nums, nums + 4);
    
    for(int i = 0; i < 3; i++){
        cout << nums[3] - nums[i];
        cout << " ";
    }
    cout << endl;
    return 0;
}