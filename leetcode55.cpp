#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        bool dp[30001]={false};
        dp[n-1]=true;
        for(int i=n-2;i>=0;i--){
            if(nums[i]==0) continue;
            if(nums[i]+i>=n-1){
                dp[i]=true;continue;
            }
            for(int j=nums[i];j>=0;j--){
                if(dp[j+i]) {dp[i]=true;break;}
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<dp[i]<<" ";
        // }cout<<endl;
        return dp[0];
    }
};