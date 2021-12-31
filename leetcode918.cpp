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
    int maxSubarraySumCircular(vector<int>& nums) {
        int l=0,r=1;
        int n=0;n=nums.size();
        int temp=0;
        temp=nums[0];
        int ans=temp;
        for(int i=1;i<n;i++){

            if(temp+nums[i]>temp){
                temp=temp+nums[i];
                r=i;
            }else{
                ans=max(ans,temp);
                temp=nums[i];
                l=r=i;
            }

        }
        return ans;
    }
};