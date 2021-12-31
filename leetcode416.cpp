#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;


class Solution {
public:
    bool canPartition(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int l=0,r=nums.size();
        int sum=0;
        while (r>l)
        {
            sum+=nums[l]+nums[r];
        }if(r==l){
            sum+=nums[l];
        }
        if(sum%2) return false;
        int dp[nums.size()][sum/2+1];
        memset(dp,0,sizeof(dp));
        dp[1][1]=nums[0];
        int i,j,k;

        dp[i][j]=max(dp[i-1][j],dp[i][j-1]+nums[i]);

    }
};