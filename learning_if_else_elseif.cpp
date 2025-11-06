#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"ENTER AGE"<<endl;
    cin>>age;
    
    if(age>=18){
        cout<<"WELCOME TO THE SITE";
    }
    
    else if(age<0){
        cout<<"INVALID INPUT";
    }
    
    else{
        cout<<"NOT OLD ENOUGH TO ENTER SITE";
    }
    
    return 0;
}
