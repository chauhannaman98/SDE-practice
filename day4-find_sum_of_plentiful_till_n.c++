#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long int dp[n+1];
    for(int i=0;i<=n; i++) {
        dp[i] = 1;
    }
    for(int i=2;i<= n ;i++) {
        for(int j =1; i*j<= n; j++) {
            dp[i*j]+=i;
        }
    }
    long long int ans =0;
    for(int i=2;i<=n;i++) {
        if(dp[i]-i > i) {
            ans+=i;
        }
    }
    cout<<ans<<endl;
}