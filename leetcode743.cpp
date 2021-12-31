#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
using namespace std;

const int INF = 0x3f3f3f3f;
class Solution {
public:
    //vector <vector<int> > g;
    int networkDelayTime(vector<vector<int> >& times, int n, int k) {
        int g[n+1][n+1];
        memset(g,INF,sizeof(g));
        bool vis[n+1];
        memset(vis,false,sizeof(vis));
        int dis[n+1];//纪录k到各个节点最短路径
        memset(dis,INF,sizeof(dis));

        for(int i=0;i<times.size();i++)
            g[times[i][0]][times[i][1]]=times[i][2];
        for(int i=1;i<=n;i++) g[i][i]=0;
        int u=-1;int MIN=INF;
        for(int i=1;i<=n;i++){
            if(MIN>g[k][i]&&g[k][i]!=0){
                MIN=g[k][i]; u=i;
            }
        }




    }
    void dij(){
        
    }
};



int main(int argc, char const *argv[])
{
    
    
    return 0;
}
