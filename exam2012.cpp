#include <iostream>
#include <string>
#include <vector>
//#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
#include <math.h>
using namespace std;

class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=0,res=0;
        n=nums.size();
        vector<int> dpmin(n,0x3f3f3f3f);
        vector<int> dpmax(n,-1);
        for(int i=1;i<n;i++){
            dpmax[i]=max(dpmax[i-1],nums[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            dpmin[i]=min(dpmin[i+1],nums[i+1]);
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]>dpmax[i]&&nums[i]<dpmin[i]) res+=2;
            else if(nums[i]>nums[i-1]&&nums[i]<nums[i+1]) res+=1;
        }
        return res;
    }
};