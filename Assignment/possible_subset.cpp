#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a{1,2,3};
    int n=a.size();
    cout<<n;
    vector<vector<int>> v;
    for(int i=0;i<(1<<n);i++){
        vector<int> subset;
        for(int j=0;j<n;j++){
            if((1<<j)&i){
                subset.push_back(a[j]);
            }
        }
        v.push_back(subset);
    }
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j];
        }
        cout<<"\n";
    }
}
