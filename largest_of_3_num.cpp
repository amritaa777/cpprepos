#include <iostream>
using namespace std;
int main(){
    double num1;
    double num2;
    double num3;
    double large;
    
    cout<<"ENTER NUMBERS";
    cin>>num1>>num2>>num3;
    if(num1>num2){
        large= num1;
        if(large>num3){
        large=large;}
        else{large=num3;}
        cout<<"LARGEST NUMBER"<<large;
    }
    else{
        large=num2;
        if(large>num3)
        {large=large;}
        else{large=num3;}
        cout<<"LARGEST NUMBER"<<large;}
    
    return 0;
}
