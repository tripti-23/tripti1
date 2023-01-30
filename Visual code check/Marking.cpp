#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks<33){
        cout<<"candidate fail"<<endl;
    }
    else if(marks<=80){
        cout<<"good candidate"<<endl;
    }
    else{
        cout<<"topper"<<endl;
    }
    return 0;
    }
    