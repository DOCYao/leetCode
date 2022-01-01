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
#include <string.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int> > ans;
        if(original.size()!=m*n) return ans;
        int p=0;
        for(int i=0;i<m;i++){
            vector<int> l;
            for(int j=0;j<n;j++){
                l.push_back(original[p++]);
            }
            ans.push_back(l);
        }
        return ans;
    }
};