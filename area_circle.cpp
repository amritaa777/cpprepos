#include <iostream>
#include<cmath>
using namespace std;
int main(){
    const double pi=3.14;
    double radius;
    double area;
    cout<<"ENTER RADIUS"<<endl;
    cin>>radius;
    cout<<"\n";
    area= pow(radius,2)*pi;
    cout<<"Area of circle with radius "<<radius<<"is "<<area<<endl;
    return 0;
}
