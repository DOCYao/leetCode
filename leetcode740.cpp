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
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(),nums.end());
        vector<int> dp(n);
        vector<int> ans; ans.push_back(nums[0]);
        int j=0;
        for(int i=1;i<n;i++){
            dp[i]=nums[i]-nums[i-1];
            if(dp[i]<=1) ans[j]+=nums[i];
            else {
                j++;ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[j];
    }
};