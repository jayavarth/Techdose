#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number abd the i th bit to be toggled\n";
    cin>>n>>i;
    n=n^(1<<i);
    cout<<"toggled value:"<<n;
}
