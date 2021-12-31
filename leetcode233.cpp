#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int dp[10];
    int pow(int n, int i)
    {
        int ans = 1;
        int j = i;
        while (j-- > 0)
        {
            ans *= n;
        }
        return ans;
    }
    void init()
    {
        dp[0] = 0;
        for (int i = 1; i < 10; i++)
        {
            dp[i] = 10 * dp[i - 1] + pow(10, i - 1);
        }
    }
    int countDigitOne(int n)
    {
        if (n == 0)
            return 0;
        if (n < 10)
            return 1;
        vector<int> f;
        //f[n]表示10^n-1这个数所拥有的1的数量
        //eg:9:1 99:10+10 999:10*f[2]+10^(3-1)
        //9999:10*f[3]+ 10^(4-1)
        //f[i]=10*f[i-1]+10^(i-1)
        init();
        int res=0;
        int temp = 1000000000;
        int n1=n;
        int wei=9;
        while(1){
            if(wei<=0) break;
            if(n1/temp){
                res+=n1/temp*dp[wei]+1;
            }
            n1=n1%temp;
            temp/=10;
            wei--;
        }
        return res;
    }
};
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << Solution().countDigitOne(n) << endl;
    return 0;
}
