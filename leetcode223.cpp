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
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l1,l2,s1,s2;
        int ans=0;
        l1=abs(ax1-ax2); s1=abs(ay1-ay2);
        l2=abs(bx1-bx2); s2=abs(by1-by2);
        ans=l1*s1+l2*s2;
        return ans;
    }
};