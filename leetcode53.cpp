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
    int maxSubArray(vector<int>& nums) {
        int n=0;n=nums.size();
        vector<int> dp(n,0);
        dp[0]=max(0,nums[0]);
        int ans=dp[0];
        for(int i=1;i<n;i++){
            dp[i]=max(dp[i-1]+nums[i],dp[i]);
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};