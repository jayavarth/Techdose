#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the n and i th bit value:\n";
    cin>>n>>i;
    n=n|(1<<i);
    cout<<"n:"<<n;
    n=n&~(1<<i);
    cout<<"n:"<<n;
}
