#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr={1,4,1,2,7,5,2};
    vector<int> freq(10,0);
    for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<freq.size();i++){
        cout<<freq[i];
    }
    for(int i=1;i<freq.size();i++){
        freq[i]=freq[i-1]+freq[i];
    }
    cout<<"\n";
    for(int i=0;i<freq.size();i++){
        cout<<freq[i];
    }
    int high=arr.size();
    vector<int> ans(high);
    for(int i=high-1;i>=0;i--){
        int index=freq[arr[i]];
        ans[index-1]=arr[i];
        freq[arr[i]]--;
    }
    cout<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    return 0;
}
