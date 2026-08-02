#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    int idx = -1;

    for(int i=0;i<size;i++){

        if(arr[i] == target) return i;

    }

    return idx;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"Enter element you want to search in array : ";
    cin>>target;

    int idx = linearSearch(arr, size,target);

    if(idx != -1) cout<<"Element found at : "<<idx<<endl;
    else cout<<"Element not found!"<<endl;

    return 0;
}


//time complexity - best case (O(1)) | worst case (O(n))
//space complexity - o(1)