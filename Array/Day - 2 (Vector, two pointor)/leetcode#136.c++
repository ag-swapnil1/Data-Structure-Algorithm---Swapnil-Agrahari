#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums){

    int res = 0;

    for(int x:nums) res ^= x;

    return res;
}

int main(){
    vector<int> nums = {1,4,6,4,1};

    int res = singleNumber(nums);

    cout<<res<<endl;

    return 0;
}

// time complexity - O(n)
// space complexity - O(1)