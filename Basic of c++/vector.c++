#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v1(4,5);
    for(int x: v1){
        cout<<x;
    }
    cout<<endl;

    vector<int> v2 = {1,2,3,4,5};
    for(int i=0;i<v2.size();i++){
        cout<<v2[i];
    }
    cout<<endl;

    //.push_back(value)
    v2.push_back(6);
    //.insert(pos,value);
    v2.insert(v2.begin(),7);
    //.pop_back();
    v2.pop_back();
    for(int x : v2){
        cout<<x;
    }
    cout<<endl;

    vector<int> v3;
    cout<<v3.empty()<<v2.empty()<<endl;

    //multidimensional vector
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    for(const auto &row: matrix){
        for(const auto &y:row){
            cout<<y<< " ";
        }
        cout<<endl;
    }

    return 0;
}