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
    string destCity(vector<vector<string>>& paths) {
        int n=0;n=paths.size();
        set<string> mudi; set<string> mid;
        for(int i=0;i<n;i++){
            mid.insert(paths[i][0]);
            if (mudi.find(paths[i][0])!=mudi.end()){
                mudi.erase(paths[i][0]);
            }
            if(mid.find(paths[i][1])!=mid.end()) continue;
            mudi.insert(paths[i][1]);
        }
        string ans;
        for(auto i:mudi)
            return i;
        return ans;
    }
};