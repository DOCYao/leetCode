#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	int revecse(int num) {
		if(num<10) return num;
		int ans=0,n=num;
		while(n%10==0) n/=10;
		while(n/10!=0){
			ans*=10;
			ans+=n%10;
			n/=10;
		}
		ans*=10;
			ans+=n%10;
		return ans;
	}
    bool isSameAfterReversals(int num) {
        int a=revecse(num);
		int b=revecse(a);
		return b==num;
    }
};

int main(int argc, char const *argv[])
{
	int n=526;
	switch ()
	{
	case /* constant-expression */:
		/* code */
		break;
	
	default:
		break;
	}
	cout<<Solution().revecse(n)<<endl;
	return 0;
}
