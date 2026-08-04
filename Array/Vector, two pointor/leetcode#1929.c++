#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    vector<int> getConcatenation(vector<int>& nums) {

        int j=0;
        vector<int> ans(2*nums.size());

        for(int i=0;i<ans.size();i++){

            if(j>nums.size()-1) j=0;
            ans[i] = nums[j];
            j++;

        }
        
        return ans;
    }
};