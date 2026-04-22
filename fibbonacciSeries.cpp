#include<bits/stdc++.h>
using namespace std;

//TC(O(n))
//SC(O(1)) Memoization -> Tabulation -> Space Optimization
int main(){
    int n;
    cin>>n;
    if(n <= 1) cout<<n;
    int prev2 = 0;
    int prev = 1;
    for(int i = 0;i<=n;i++){
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    cout<<prev<<endl;
}