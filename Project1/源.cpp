#include <iostream >
using namespace std;
#include <queue>
class Node
{
public:
	int data;
	Node* left;
	Node* right;
};

Node* Findmin(Node* root)
{
	if (root == NULL)return NULL;
	while (root->left != NULL)
	{
		root = root->left;
	}
	return root;
}

Node* Find(Node* root, int data)
{
	if (root == NULL)return root;
	Node* temp = root;
	if (temp->data == data)return temp;
	else if (temp->data < data)return Find(temp->right, data);
	else if (temp->data > data)return Find(temp->left, data);
}

//Function to find Inorder Successor in  a BST
//寻找二叉搜索树的中序遍历中后继者的函数
Node* Getsuccessor(Node* root, int data)
{
	Node* current = Find(root, data);
	if (current == NULL)return NULL;
	if (current->right != NULL)
	{	//case 1:Node has right subtree
		return Findmin(root->right);
	}
	else
	{   //case 2:No right subtree
		Node* successor = NULL;
		Node* ancestor = root;
		while (ancestor != current)
		{
			if (current->data < ancestor->data)
			{
				successor = ancestor;// so far this is the deepest node 
				                     //for which current node is in left 
				ancestor = ancestor->left;
			}
			else
				ancestor = ancestor->right;
		}
		return successor;
	}
}

int main()
{


	system("pause");
	return 0;
}