
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
#include <map>
using namespace std;

class Solution1 {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> a;
        for(auto i:nums){
            //bool temp=a.find(i);
            if(a.find(i)!=a.end()) a[i]++;
            else a.insert(pair<int,int>(i,1));
        }
        for(auto i:a){
            if(i.second==1) return i.first;
        }
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto i:nums) 
            ans^=i;
        return ans;
    }
};
