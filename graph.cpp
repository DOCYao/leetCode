#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
using namespace std;





int main(int argc, char const *argv[])
{
    set<int> text;
    text.insert('5');
    cout<<"5出现次数"<<text.count('5')<<endl;
    cout<<"7出现次数"<<text.count(7)<<endl;
    text.insert(5);
    cout<<"5出现次数"<<text.count('5')<<endl;
    return 0;
}
