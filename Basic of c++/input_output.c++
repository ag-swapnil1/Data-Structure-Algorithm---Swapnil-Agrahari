#include <iostream>
using namespace std;

int main(){
    string name;                                                                  //String data type
    int age;
    cin>>age;                                                                     //input using cin            
    cin.ignore();                                                                 //removing trailing /n so that getline don't get skipped
    getline(cin,name);                                                            //used to input more than one word
    cout<<"Hello World"<<endl;                                                    //output using cout
    cout<<"Age entered: "<<age<<"!"<<endl;                                        //endl is for newline
    cout<<"Name entered: "<<name<<endl;

    return 0;
}