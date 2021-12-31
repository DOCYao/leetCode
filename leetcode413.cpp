#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>

using namespace std;

class Solution
{
public:
    int _jiecheng[5000] = {-1};
    int jiecheng(int n)
    {
        if (n < 1)
            return 0;
        //static vector<int> jiecheng;
        if (n == 1)
        {
            _jiecheng[n] = 1;
            return 1;
        }
        if (_jiecheng[n] != -1)
            return _jiecheng[n];
        _jiecheng[n] = n + jiecheng(n - 1);
        return _jiecheng[n];
    }
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
            return 0;
        vector<int> diffs;
        for (int i = 1; i < n; i++)
        {
            diffs.push_back(nums[i] - nums[i - 1]);
            cout << diffs[i - 1] << " ";
        }
        stack<int> st;
        vector<int> anslist;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
                st.push(nums[i]);
            else
            {
                if (nums[i] == st.top())
                {
                    st.push(nums[i]);
                }
                else
                {
                    if (st.size() > 1)
                        anslist.push_back(st.size() + 1);
                    while (st.empty())
                    {
                        st.pop();
                    }
                }
            }
        }
        if (!st.empty())
        {
            if (st.size() > 1)
                anslist.push_back(st.size() + 1);
        }
        int ans = 0;
        for (auto it : anslist)
        {
            cout << it << " ";
            ans += jiecheng(it);
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    int n=10,m=3;
    double d1=(double) (m/n);
    double d2=(double)m/n;
    cout<<"d1="<<d1<<" "<<"d2="<<d2<<endl;
    cout<<"m/n="<<m/n<<endl;
    //cout<<"m/n="<<(double)(double)m/(double)n<<endl;
    int s=15,i;
    for(i=s-1;s%i;i--)
        cout<<"i="<<i<<endl;
    cout<<"i="<<i;
    return 0;
}
