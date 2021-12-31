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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x2=0,y2=0;
        int m=matrix[0].size(),n=matrix.size();
        for(int i=0;i<m;i++){
            if(matrix[i][0]<=target) x2=i;
        }
        for(int i=0;i<n;i++){
            if(matrix[0][i]<=target) y2=i;
        }

    }
    bool dp(vector<vector<int>>& matrix, int target,int x2,int y2){
        if(matrix[x2][y2]<target) return false;

    }
};