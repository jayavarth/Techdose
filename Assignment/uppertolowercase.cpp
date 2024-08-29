#include <iostream>
using namespace std;
int main(){
    char a='A';
    char b;
    b=a|(1<<5);
    char c=b&~(1<<5);
    cout<<a<<b<<c;
}
