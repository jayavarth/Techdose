// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
#include <vector>
using namespace std;

void sort(vector<int> &arr,vector<int> &freq,vector<int> &ans,int div){
    for(int i=arr.size()-1;i>=0;i--){
        int val=(arr[i]/div)%10;
        int index=freq[val];
        ans[index-1]=arr[i];
        freq[val]--;
    }
}
void frequency(vector<int> &arr,vector<int> &freq,int div){
    fill(freq.begin(), freq.end(), 0);
    for(int i = 0; i < arr.size(); i++) {
        int val = (arr[i] / div) % 10;
        freq[val]++;
    }
    for(int i=1;i<freq.size();i++){
        freq[i]=freq[i-1]+freq[i];
    }
}
int main() {
    // Write C++ code here
    vector<int> arr={170,45,75,90,802,24,2,66};
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int digit=floor(log10(max)+1);
    vector<int> freq(10,0);
    vector<int> ans(arr.size());
    vector<int> mod=arr;

    for(int i=1;max/i > 0;i*=10){
        fill(ans.begin(), ans.end(), 0);
        frequency(arr,freq,i);
        sort(arr,freq,ans,i);
        arr=ans;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
