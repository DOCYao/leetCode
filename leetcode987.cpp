#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <stack>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct myTreeNode{
	int val;
	int row;
	int col;
	myTreeNode *left;
	myTreeNode *right;
	myTreeNode() : val(0), left(nullptr), right(nullptr) {}
    myTreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    myTreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

};


class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    	map<int, vector<int>> vertical;//<col,vec<int>>
    	midOrder(root,0,vertical);
    	vector<vector<int>> res;
        for(auto n:map){
            
        }

    }
    void midOrder(TreeNode* node,int col,&map<int, vector<int>> vertical){
    	if (node->left)
    	{
    		midOrder(node->left,col-1,vertical);
    	}

    	auto it = vertical.find(col);
    	if (it!=vertical.end()){
    		it.second.push_back(node->val);
    	}else{
    		if.insert(pair<int ,vector<int>>(col,vector<int>(node->val)));
    	}
    	//vertical.find(col)
    	if(node->right){
    		midOrder(node->right,col+1,vertical);
    	}
    }

};
