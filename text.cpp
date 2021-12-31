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
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, int> same;
    same.insert(pair<int, int>(0, 2));
    same[0]++;
    for(auto i:same) cout<<i.second<<endl;
    return 0;
}
