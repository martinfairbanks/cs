/* 
	Binary Search Tree
	by Martin Fairbanks
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct BinaryTree BinaryTree;

struct BinaryTree
{
	int data;
	BinaryTree *left;
	BinaryTree *right;
};

BinaryTree* createNewNode(int data)
{
	BinaryTree *newNode = (BinaryTree *)malloc(sizeof(BinaryTree));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

BinaryTree* insert(BinaryTree *root, int data)
{
	if (root == NULL)
	{
		root = createNewNode(data);
	}
	else if (data <= root->data)
	{
		//recursive function call, if root->left is NULL then 
		//a new node will be created
		root->left = insert(root->left, data);
	}
	else
	{
		//recursive function call
		root->right = insert(root->right, data);
	}
	return root;
}

int search(BinaryTree *root, int data)
{
	if (root == NULL) 
		return 0;
	else if (root->data == data) 
		return 1;
	//search left using recursive call
	else if (data <= root->data) 
		return search(root->left, data);
	//search right using recursive call
	else return search(root->right, data);
}

int main()
{
	//store address of root node
	BinaryTree *rootNode = NULL;
	
	rootNode = insert(rootNode, 10);
	rootNode = insert(rootNode, 5);
	rootNode = insert(rootNode, 9);
	rootNode = insert(rootNode, 28);
	rootNode = insert(rootNode, 16);

	int num;
	printf("Enter number to be searched: ");
	scanf("%d", &num);
	
	if (search(rootNode, num))
		printf("Number found!\n");
	else
		printf("Number not found!\n");

	return 0;
}

