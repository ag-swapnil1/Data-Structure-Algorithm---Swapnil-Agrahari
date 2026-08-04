#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size){
    for(int i=1;i<size;i++){
        if(arr[i]<arr[i-1]) return false;
    }   
    return true;
}

int main(){
    int arr[] = {1,2,3,4,5,7,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    bool isSorted = checkSorted(arr,size);

    cout << (isSorted ? "Sorted" : "Not Sorted") << '\n';

    return 0;
    
}