#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int left = 0, right = nums.size()-1;
        vector<int> res(nums.size());
        int idx = nums.size()-1;

        while(left<=right){

            if((nums[left]*nums[left]) >= (nums[right]*nums[right])){
                res[idx--] = (nums[left]*nums[left]);
                left++;
            }
            else{
                res[idx--] = (nums[right]*nums[right]);
                right--;
            }

        }
        
        return res;
    }
};