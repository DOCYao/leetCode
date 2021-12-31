#include <iostream>
#include <vector>
#include <set>
#include <string.h>

using namespace std;
class Solution
{
public:
    int nthSuperUglyNumber(int n, vector<int> &primes)
    {
        int k=primes.size(),plist[k],nums[n];
        memset(plist,0,sizeof(plist));
        memset(nums,0,sizeof(nums));
        nums[0]=1;
        for(int i=1;i<n;i++){
            int low = 0x3f3f3f3f;
            for(int j=0;j<k;j++){
                low = min(low,primes[i]*nums[plist[j]]);
            }
            nums[i]=low;
            for (int j = 0; j < k; j++)
            {
                if(primes[i]*nums[plist[j]]==low){
                    plist[j]++;
                }
            }
            
        }
        return nums[n-1];
    }
};

int main()
{
    vector<int> primer;
    primer.push_back(2);
    primer.push_back(7);
    primer.push_back(13);
    primer.push_back(19);
    int n = 12;
    class Solution ms;
    int res = ms.nthSuperUglyNumber(n, primer);
    return 0;
}