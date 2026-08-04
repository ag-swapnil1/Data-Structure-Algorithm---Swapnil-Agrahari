#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i] = nums[i]+nums[i-1];
        }
        int idx = -1;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(nums[nums.size()-1]-nums[i] == 0){
                    idx = i;
                    break;
                }
            }
            else if(nums[i-1] == nums[nums.size()-1]-nums[i]){
                idx = i;
                break;
            }
        }
        return idx;
    }
};