#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number and the kth bit:\n";
    cin>>n>>i;
    if((n&(1<<i))>0){
        cout<<i<<"th bit is set";
    }
    else{
        cout<<i<<"th bit is unset";
    }
}
