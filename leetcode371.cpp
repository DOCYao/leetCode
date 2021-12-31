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
    int getSum(int a, int b) {
        //先判断a、b正负
        int m=a,n=b;
        if(a>0&&b>0){//两正数相加

        }
        else if(a<0&&b<0){//两负数相加

        }
        else{//一正一负

        }
    }
    int qiubu(int n){
        if(n>=0) return n;
        int a=n*-1;
        ~a;
    }
};


int main(int argc, char const *argv[])
{
    int n[30]={-1};
    for(int i=0;i<5;i++) cout<<n[i]<<" ";
    cout<<endl;
    return 0;
}
