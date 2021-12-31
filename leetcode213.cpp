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

class Solution1 {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if((n==2) ) return max(nums[0],nums[1]);
        int dp[n];dp[0]=nums[0];
        int ans1=nums[1];
        for(int i=1;i<n;i++) {
            if(i==2) {dp[i]=nums[i];ans1=max(ans1,dp[i]);continue;}
            if(i==3) {dp[i]=nums[i]+dp[0];ans1=max(ans1,dp[i]);continue;}
            dp[i]=nums[i]+max(dp[i-3],dp[i-2]);
            ans1=max(ans1,dp[i]);
        }int ans2=ans1;
        ans1=nums[0];
        memset(dp,0,sizeof(dp));
        dp[0]=nums[0];
        for(int i=0;i<n-1;i++) {
            if(i==1) {dp[i]=nums[i];ans1=max(ans1,dp[i]);continue;}
            if(i==2) {dp[i]=nums[i]+dp[0];ans1=max(ans1,dp[i]);continue;}
            dp[i]=nums[i]+max(dp[i-3],dp[i-2]);
            ans1=max(ans1,dp[i]);
        }
        return max(ans1,ans2);
        //if(dp[n])
    }
};

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int dp[n];dp[0]=nums[0];
        int ans=dp[0];
        for(int i=1;i<n-1;i++) {
            if(i==1) {dp[i]=nums[i];ans=max(ans,dp[i]);continue;}
            if(i==2) {dp[i]=nums[i]+dp[0];ans=max(ans,dp[i]);continue;}
            dp[i]=nums[i]+max(dp[i-3],dp[i-2]);
            ans=max(ans,dp[i]);
        }
        int dp2[n];dp2[1]=nums[1];
        int ans2=dp2[1];
        for(int i=2;i<n;i++) {
            if(i==2) {dp2[i]=nums[i];ans2=max(ans2,dp2[i]);continue;}
            if(i==3) {dp2[i]=nums[i]+dp2[1];ans2=max(ans2,dp2[i]);continue;}
            dp2[i]=nums[i]+max(dp2[i-3],dp2[i-2]);
            ans2=max(ans2,dp2[i]);
        }
        return max(ans2,ans);
    }
};