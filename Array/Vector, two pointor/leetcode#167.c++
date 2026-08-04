#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> idx(2);
        int left = 0, right = numbers.size()-1;
        
        while(left<right){
            
            if(numbers[left] + numbers[right] == target){
                idx[0] = left+1;
                idx[1] = right+1;
                return idx;
            }
            else if(numbers[left] + numbers[right] > target) right--;
            
            else left++;
        }
        
        return idx;
    }
};