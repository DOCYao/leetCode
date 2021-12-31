#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
#include <map>
using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int> > ans;
        if(n<3) return ans;
        int l=0,m=1,r=n-1;
        int dp[n];dp[n-1]=n-1;//纪录下一个不同数字的位置
        for(int i=n-2;i>=0;i--){
            if(dp[i]==dp[i+1] ) dp[i]=dp[i+1];
            else dp[i]=i+1;
        }
        while(1)
        {
            int temp = nums[l]+nums[m]+nums[r];
            if(temp>0) r--;
            if(temp<0) m++;
            if(temp==0) {
                vector<int> t;t.push_back(nums[l]);
                t.push_back(nums[m]);t.push_back(nums[r]);
                ans.push_back(vector<int>(t));
                //while(l<n-2&&nums[l]==nums[l+1]) l++;
            }
        }
    }
};