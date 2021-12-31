#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
	int getsoliders(vector<int> list) {
		int n=list.size();
		int res=n/2;
		if(list[n]==0) {
			while (list[n]==0) {
				if(n==0) return 0;
				n--;
			}
			return n+1;
		}
		while (list[n]==1) {
			if(n==list.size()-1) return list.size();
			n++;
		}
		return n;
	}
	vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
		vector<int> res(k); 
		map<int, int> power;
		for(int i=0;i<mat.size();i++){
			power.insert(pair<int, int>(getsoliders(mat[i]),i));
		}
		auto it = power.begin();
		for(int i=0;i<k;i++){
			res[i]=it->second;
			it++;
		}
		return res;
	}
};


int main(int argc, char *argv[]) {
	map<int, int> power;
	for (int i=0; i<10; i++) {
		power.insert(pair<int, int>(rand()%100,rand()));
	}
	for(auto n:power)
		cout<<n.first<<"-"<<n.second<<endl;
	return 0;
}