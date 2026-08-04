#include <iostream>
using namespace std;

int countFrequency(int arr[],int target,int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i] == target) count++;
    }
    return count;
}

int main(){
    int arr[]={2,3,4,2,3,1,4,5,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cin>>target;

    int res = countFrequency(arr, target,size);
    if(res) cout<<"Frequancy : "<<res<<endl;
    else cout<<"Not found"<<endl;

}


//time complexity - O(n);
//space complexity - 0(1);