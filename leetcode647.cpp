#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        bool dp[n][n];
        int ans=0;
        //if(n>=1) ans=1;
        memset(dp,false,sizeof(dp));
        for(int i=n-1;i>-1;i--){
            dp[i][i]=true;ans++;
            char c1=s[i];
            for(int j=i+1;j<n;j++){
                char c2=s[j];
                if(c1==c2){
                    if(j-i==1||dp[j+1][i-1]){
                        dp[i][j]=true;  ans++;
                    }
                }
            }
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    cout<<Solution().countSubstrings("aaa")<<endl;
    return 0;
}
