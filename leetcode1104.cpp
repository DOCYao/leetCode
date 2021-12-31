#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;
class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
    	int hang=1;//确定label在第几行
    	while(pow(2,hang)<label) hang++;
    	vector<int> a;
    	return a;
    }
};
int main()
{
	int a;
	scanf("%d",&a);
	printf("\n a = %d",a);
	return 0;
}
