#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i=0,j=i;
    while(j<nums.size()){
        if(nums[i] == nums[j]){
            j++;
        }
        else if(nums[i] != nums[j]){
            swap(nums[i+1],nums[j]);
            j++;
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);

    cout<<"Element : ";
    for(int i=0;i<n;i++){ 
        cin>>nums[i];
    }

    int res = removeDuplicates(nums);

    cout<<res<<endl;

    return 0;
}


//time complexity - O(n)
//space complexity - O(1)