#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <math.h>
using namespace std;

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int all=0; int n=k;
        for(int i=0;i<chalk.size();i++) all+=chalk[i];
        n%=all;
        for(int i=0;i<chalk.size();i++){
            n-=chalk[i]; if(!n) return i;
        }
    }
};