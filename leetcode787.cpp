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
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        int dp[n][n];
        memset(dp,0x3f3f,sizeof(dp));
        for(int i=0;i<n;i++) dp[i][i]=0;
        stack<int> gstack;
        for(auto i:flights){
            dp[i.at(0)][i.at(1)]=min(dp[i.at(0)][i.at(1)],i.at(2));
        }
        int arr[n];memset(arr,0x3f3f,sizeof(arr));
        for(int i=0;i<n;i++){
            if(i==src) continue;
            for(int j=0;j<n;j++){
                if(j==src||i==j) continue;
                arr[i]=min(arr[i],arr[j]+dp[j][i]);
            }
        }
        return arr[dst];
    }
};