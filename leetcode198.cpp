#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
#include <math.h>
#include <list>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int dp[n];dp[0]=nums[0];
        int ans=dp[0];
        for(int i=1;i<n;i++) {
            if(i==1) {dp[i]=nums[i];ans=max(ans,dp[i]);continue;}
            if(i==2) {dp[i]=nums[i]+dp[0];ans=max(ans,dp[i]);continue;}
            dp[i]=nums[i]+max(dp[i-3],dp[i-2]);
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};