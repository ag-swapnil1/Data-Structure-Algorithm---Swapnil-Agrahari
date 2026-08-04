#include <iostream>
#include <vector>
using namespace std;

void moveZeores(vector<int>& nums) {
    int i=0,j=i;
    while(j<nums.size()){
        if(nums[i] == 0 && nums[j] != 0){
            swap(nums[i],nums[j]);
            j++;
            i++;
        }
        else if(nums[i] == 0 && nums[j] == 0){
            j++;
        }
        else if(nums[i] != 0){
            j++;
            i++;
        }
    }   
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);

    cout<<"Element : ";
    for(int i=0;i<n;i++){ 
        cin>>nums[i];
    }

    moveZeores(nums);

    for(int i=0;i<n;i++){ 
        cout<<nums[i]<<" ";
    }

    return 0;
}


//time complexity - O(n)
//space complexity - O(1)