#pragma once
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;
};

Node * findMin(Node * root)
{
	while (root->left != nullptr)
		root = root->left;
	return root;
}

Node * deleteNode(Node * root, int data)
{
	if (root == nullptr)
		return root;
	else if (root->data > data)
		root->left = deleteNode(root->left, data);
	else if (root->data < data)
		root->right = deleteNode(root->right, data);
	//Node founded
	else
	{
		//bool isLeftEmpty(root)
		//{
		//	if (root->left == nullptr)
		//		return true;
		//}
		//bool isRightEmpty(right == nullptr);
		//{
		//	if (root->right == nullptr)
		//		return true;
		//}

		// case 1: No child
		if (root->left == nullptr && root->right == nullptr)
		{
			delete root;
			root = nullptr;
		}

		// case 2: One child
		else if (root->right == nullptr)
		{
			Node* tmp = root;
			root = root->left;
			delete tmp;
		}
		else if (root->left == nullptr)
		{
			Node* tmp = root;
			root = root->right;
			delete tmp;
		}

		// case 3: 2 children
		else
		{
			Node* tmp = findMin(root->right);
			root->data = tmp->data;
			root->right = deleteNode(root->right, tmp->data);
		}
	}
	return root;
}

Node * insertNode(Node * root, int data)
{
	if (root == nullptr)
	{
		root = new Node();
		root->data = data;
		root->left = root->right = nullptr;
	}
	else if (root->data >= data)
		root->left = insertNode(root->left, data);
	else
		root->right = insertNode(root->right, data);
	return root;
}

void printTree(Node * root)
{
	if (root == nullptr)
		return;

	printTree(root->left);
	cout << root->data << " ";
	printTree(root->right);
}

int main()
{
	Node* root = nullptr;
	root = insertNode(root, 5);
	root = insertNode(root, 10);
	root = insertNode(root, 3);
	root = insertNode(root, 4);
	root = insertNode(root, 1);
	root = insertNode(root, 11);

	// Deleting node with value 5, change this value to test other cases
	root = deleteNode(root, 5);

	//Print Nodes in Inorder
	cout << "Inorder: ";
	printTree(root);
	cout << "\n";
	system("pause");
	return 0;
}