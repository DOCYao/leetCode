#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main()
{
	string Choose,s;
	
	int N,n,x;
	scanf("%d",&N);
	int i,j;
	for(i = 0; i < N;i++)
	{
		cin >> n >> Choose;
		if(Choose == "FIFO")
		{
			queue<int> myQue;
			for(j = 0;j < n;j++)
			{
				cin >> s;
				if(s == "IN")
				{
					scanf("%d",&x);
					myQue.push(x);
				}
				if(s == "OUT")
				{
					if(myQue.empty())
					{
						puts("None");
					}
					else
					{
						cout << myQue.front() << endl;
						myQue.pop();
					}
				}
			}
		}
		if(Choose == "FILO")
		{
			stack<int> myStack;
			for(j = 0;j < n;j++)
			{
				cin >> s;
				if(s == "IN")
				{
					scanf("%d",&x);
					myStack.push(x);
				}
				if(s == "OUT")
				{
					if(myStack.empty())
					{
						puts("None");
					}
					else
					{
						cout << myStack.top() << endl;
						myStack.pop();
					}
				}
			}
		}
	}
	
}
