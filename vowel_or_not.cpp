#include<iostream>
using namespace std;
int main(){
    char val;
    cout<<"Enter character";
    cin>>val;
    if(val=='a'||val=='e'||val=='i'||val=='o'||val=='u'||val=='A'||val=='E'||val=='I'||val=='O'||val=='U'){
        cout<<"IT IS A VOWEL";
    }
    else{cout<<"IT IS NOT A VOWEL";}
    return 0;}
