#include <iostream>
using namespace std;
int main(){
    int val,count=0;
    cout<<"Enter the number:\n";
    cin>>val;
    while(val!=0){
        val=val&(val-1);
        count++;
    }
    cout<<"number of set bits: "<<count<<endl;
    return 0;
}
