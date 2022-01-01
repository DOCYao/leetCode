#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	bool moving(int n, char a, vector<int> &pos)
	{
		switch (a)
		{
		case 'R':
			pos[1]++;
			break;
		case 'L':
			pos[1]--;
			break;
		case 'U':
			pos[0]--;
			break;
		case 'D':
			pos[0]++;
			break;
		default:
			break;
		}
		bool a1 = pos[0] >= 0 && pos[1] >= 0;
		bool a2 = pos[0] <= n - 1 && pos[1] <= n - 1;
		return a1 && a2;
	}
	vector<int> executeInstructions(int n, vector<int> &startPos, string s)
	{
		std::vector<int> ans;
		std::vector<int> pos;
		pos.push_back(startPos[0]);
		pos.push_back(startPos[1]);
		for (int i = 0; i < s.size(); i++)
		{
			pos[0] = startPos[0];
			pos[1] = startPos[1];
			int step = 0;
			for (int j = i; j < s.size(); j++)
			{
				if (moving(n, s[j], pos))
					step++;
				else
					break;
			}
			ans.push_back(step);
		}
		return ans;
	}
};

int main(int argc, char const *argv[])
{

	return 0;
}