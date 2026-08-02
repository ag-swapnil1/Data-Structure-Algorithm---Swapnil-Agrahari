#include <iostream>
#include <utility>
using namespace std;

int main(){

    //declaration and initialisation
    pair<int, string> p1= {1,"Geeks"};
    cout<<p1.first<<" : "<<p1.second<<endl;

    pair <int,int> p2 = make_pair(1,2);
    cout<<p2.first<<" : "<<p2.second<<endl;

    //default constructor
    pair <int,int> p3;
    p3.first = 21;
    p3.second = 04;
    cout<<p3.first<<" : "<<p3.second<<endl;

    

    return 0;
}