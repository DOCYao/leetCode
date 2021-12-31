#include <iostream>
#include <vector>
#include <string.h>
using namespace std;


class Solution {
public:
    //int dp[m][n][maxMove+1];
    int dfs(int x,int y,vector<vector<int> > arr){
        
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<int>> arr(m,vector<int>(n,0));
        arr[0][0] = 2;arr[0][n-1]=2; arr[m-1][n-1]=2;
        arr[m-1][0]=2;
        return dfs(startRow,startColumn,arr);
    }
};
int main(int argc, char const *argv[])
{
    //1000000007
    cout <<50*50*50<<endl;

    return 0;
}
