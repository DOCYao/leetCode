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
using namespace std;

class Solution1
{
public:
    int numFriendRequests(vector<int> &ages)
    {
        sort(ages.begin(), ages.end());
        int n = ages.size();
        if (n == 1)
            return 0;
        vector<int> dp(n, 0);
        map<int, int> same;
        int ans = 0;
        int c = 1;
        while (ages[c] <= 14)
            c++;
        for (int i = c; i < n; i++)
        {
            //如果后面的数和前面的数相同，代表他们从同一个位置开始发请求
            if (ages[i] == ages[i - 1])
            {
                //有相同的需要额外补偿，用same记录相同树和相同数量
                if (same.find(ages[i]) == same.end())
                    same.insert(pair<int, int>(ages[i], 2));
                else
                    same[ages[i]]++;
                dp[i] = dp[i - 1];
                ans += i - dp[i];
                continue;
            }
            // i继承i-1的起始位置，因为i的一定不小于i-1的
            for (dp[i] = dp[i - 1]; dp[i] <= i; dp[i]++)
            {
                //一旦开始符合条件了，将这个人能给几个发申请计入结果后退出
                if (ages[dp[i]] > (ages[i] / 2 + 7))
                {
                    ans += i - dp[i];
                    break;
                }
            }
        }
        for (auto i : dp)
            printf("%2d ", i);
        cout << endl;
        //把补偿加上
        for (auto i : same)
        {
            cout << i.second << " ";
            ans += i.second * (i.second - 1) / 2;
        }
        return ans;
    }
};
class Solution
{
public:
    int numFriendRequests(vector<int> &ages)
    {
        int l = 0, r = 0;
        int n = ages.size();
        if (n == 1)
            return 0;
        
    }
};