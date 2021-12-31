#include <iostream>
#include <vector>
#include <string.h>
#include <set>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int relation(int x, int y, vector<vector<int> > p)
    {
        for (int i = 0; i < p[x].size(); i++)
        {
            if (p[x][i] == y)
                return i;
        }
        return 0x3f3f3f3f;
    }
    int unhappyFriends(int n, vector<vector<int> > &preferences, vector<vector<int> > &pairs)
    {
        int x, y, u, v;
        int peidui[n];
        int f[n][n];
        memset(f, 0x3f3f3f3f, sizeof(f));
        for (int i = 0; i < n; i++)
        {
            //peidui[i]
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                f[i][j] = relation(i, j, preferences);
            }
        }
        for (int i = 0; i < n / 2; i++)
        {
            peidui[pairs[i][0]]=pairs[i][1];
            peidui[pairs[i][1]]=pairs[i][0];
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            x = i; y=peidui[x];
            if (f[x][peidui[x]] == 0)
                continue;
            for (int j = 0; j < f[x][peidui[x]]; j++)
            {
                u=preferences[x][j]; v=peidui[u];
                if (f[x][y] > f[x][u] && f[u][v] > f[u][x])
                {
                    res++; break;
                }
            }
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    unordered_set<int> text;
    text.insert(5);
    text.insert(2);
    text.insert(6);
    text.insert(4);
    for(auto i:text) cout<<i<<" ";
    cout<<endl;
    return 0;
}
