#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello";
    string str2 = " geeks";

    //traversing using index;
    for(int i=0;i<str.size();i++){
        cout<<str[i];
    }
    cout<<endl;
    //treversing using range based for loop
    for(char ch : str){
        cout<<ch;
    }
    cout<<endl;

    //traversing using iterator
    for(auto it = str.begin(); it!=str.end();it++){
        cout << *it;
    }
    cout<<endl;

    //concantenate using + 
    cout<< str+str2<<endl;

    //concantenate using append
    cout<<str.append(str2)<<endl;

    //.push_back(); insert at end
    str.push_back('!');
    cout <<str<<endl;

    //.pop_back() erase kast element
    str.pop_back();
    cout<<str<<endl;
     
    //.insert(index,substring)
    str.insert(0,str2);
    cout << str<<endl;

    //.erase(starting index, number of letter)
    str.erase(0,6);
    cout<<str<<endl;

    //.substr(starting, number of letter)
    cout<<str.substr(0,5)<<endl;

    //.find(substr); if not found any large random number
    size_t pos = str.find("Hello");
    cout<<pos<<endl;

    return 0;
}