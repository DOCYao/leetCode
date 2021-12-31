#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <math.h>
using namespace std;
int rand7(){
        return rand()%7+1;
}
class Solution {
public:
    int rand10() {
        int temp=rand7();
        while(temp==4) temp=rand7();
        if(temp<4) return rand15();
        return rand610();
    }
    int rand15(){
        int temp=rand7();
        if(temp<6) return temp;
        else return rand15(); 
    }
    int rand610(){
        int temp=rand7();
        if(temp<6) return temp+5;
        else return rand610(); 
    }
};

int main(int argc, char const *argv[])
{
    srand(unsigned(time(NULL)));
    int ji[11]={0};
    for(int i=0;i<10000;i++){
        ji[Solution().rand10()]++;
    }
    for(int i=1;i<=10;i++){
        cout<<i<<"出现了"<<ji[i]<<"次"<<endl;
    }
    return 0;
}
