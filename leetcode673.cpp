#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
#include <math.h>
using namespace std;



class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        int res=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) dp[i]=dp[i-1]+1;
            res = res>dp[i]?res:dp[i];
        }
        return res;
    }
};