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
    int findMinMoves(vector<int>& machines) {
        long sum=0;
        for(auto i:machines) sum+=i;
        int n=0;
        n=machines.size();
        if(sum%n) return -1;
        int target=0;target=sum/n;
        vector<int> dp(n);
        for(int i=0;i<n;i++) dp[i]=machines[i]-target;
        
    }
};