#include <iostream>
#include <vector>
#include <string>
#include <string.h>

using namespace std;

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int dp[s.size()][s.size()];
        memset(dp,0,sizeof(dp));
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            s[i]=1;
            char c1=s.at(i);
            for(int j=i+1;j<n;j++){
                char c2=s.at(j);
                if(c1==c2) dp[i][j]=dp[i+1][j-1]+2;
                else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                }
            }
        }
        return dp[0][n-1];
    }
};


int main() {

    return 0;
}