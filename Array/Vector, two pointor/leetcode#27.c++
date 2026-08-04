#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i=0,j=i;
    while(j<nums.size()){
        if(nums[i] == val && nums[j] != val){
            swap(nums[i],nums[j]);
            j++;
            i++;
        }
        else if(nums[i] == val && nums[j] == val){
            j++;
        }
        else if(nums[i] != val){
            j++;
            i++;
        }
    }   
    int count=0;

    for(int x : nums){
        if(x==val) break;
        count++;
    }

    return count;

}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);

    cout<<"Element : ";
    for(int i=0;i<n;i++){ 
        cin>>nums[i];
    }

    int val;
    cout<<"Enter target element : ";
    cin>>val;

    int res = removeElement(nums,val);
    cout<<res;

    return 0;
}


//time complexity - O(n)
//space complexity - O(1)