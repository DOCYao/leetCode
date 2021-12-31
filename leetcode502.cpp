#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
using namespace std;
typedef pair<int, int> pii;
//难点在于，成本比现今少的时候的项目都可以启动，所以把这些项目的利润放到一个优先队列当中
//优先队列头部自动是利润最大的那个，每次现金直接加纯利润即可
class Solution
{
public:
    int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
    {
        //priority_queue<int,vector<int>,greater<int> > capq;
        int money = w;
        vector<pii> capv;
        for (int i = 0; i < profits.size(); i++)
            capv.push_back(pii(capital[i], profits[i]));
        sort(capv.begin(), capv.end());
        int p = 0;
        priority_queue<int> xiangmu;

        int kk = k;
        while (kk > 0)
        {
            for (; capv[p].first <= money && p < capv.size(); p++)
            {
                xiangmu.push(capv[p].second);
            }
            if(xiangmu.empty()) break;
            money += xiangmu.top();
            xiangmu.pop();
            kk--;
        }
        return money;
    }
};

int main(int argc, char const *argv[])
{
    return 0;
}
