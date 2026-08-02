#include <iostream>
using namespace std;

void runnigSum(int arr[],int size){
    int sum = 0;
    for(int i=1;i<size;i++){
        arr[i] +=arr[i-1];
    }
}

int main(){

    int arr[] = {2,4,3,5,1,7,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    runnigSum(arr,size);

    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;

}


//time complexity - o(n)
//space complexity - O(1)