#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter values for a and b:\n";
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After swapping :\n"<<" a: "<<a<<" b: "<<b;
}
