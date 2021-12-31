#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <map>
#include <stack>
using namespace std;

class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0;
        map<int,int> dis;
        vector<vector<int> > dp(points.size(),vector<int>(points.size(),0));
        for(int i=0;i<n;i++){
            dis.clear();
            for(int j=0;j<n;j++){
                if(dp[j][i]) dp[i][j]=dp[j][i];
                else if(i==j) continue;
                else{
                    dp[i][j] = distance(points[i][0]-points[j][0],points[i][1]-points[j][1]);
                }

                if(dis.find(dp[i][j])!=dis.end()){
                    dis.at(dp[i][j])++;
                }else dis[dp[i][j]]=1;

            }
            for(auto k:dis){
                ans+=k.second*(k.second-1);
            }
        }
        return ans;
    }
    int get(int a){
        return a*(a-1);
    }
    int distance(int a,int b){
        return a*a+b*b;
    }
};


int main(int argc, char const *argv[])
{
    
    return 0;
}
