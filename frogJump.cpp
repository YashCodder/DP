#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int prev = 0;
    int prev2 = 0;
    for(int i = 1;i<n;i++){
        int fs = prev + abs(arr[i] - arr[i-1]);
        int ss = INT_MAX;
        if(i>1){
            ss = prev2 + abs(arr[i] - arr[i-2]);
        }

        int curr = min(fs,ss);
        prev2 = prev;
        prev = curr;
    }
    cout<<prev<<endl;
}