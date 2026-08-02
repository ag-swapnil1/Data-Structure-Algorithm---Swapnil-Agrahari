#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[5];

    for(int i=0;i<5;i++){
        cin>>nums[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0;i<5;i++){

        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);

    }

    cout<< "Largest in the array nums : "<<largest<<endl;
    cout<<"Smallest in the array nums : "<<smallest<<endl;

    return 0;
}



// Time complexity - O(n)
// Space complexity - O(1)