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
    int findPeakElement(vector<int>& nums) {
        if(nums[0]>nums[1]) return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
        for(int i=1;i<nums.size()-1;i++)
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
                return i;

        return 0;
    }
};



int main(int argc, char const *argv[])
{
    
    return 0;
}
