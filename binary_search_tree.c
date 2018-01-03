/* 
	Binary Search Tree
	by Martin Fairbanks
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

void printBinaryTree(BinaryTree *root)
{
	if (root->left != NULL) {
		printBinaryTree(root->left);
	}

	printf("%d\n", root->data);

	if (root->right != NULL) {
		printBinaryTree(root->right);
	}
}

int main()
{
	srand(time(0));

	//store address of root node
	BinaryTree *rootNode = NULL;
	
	for (int i = 0; i < 10; i++)
	{
		rootNode = insert(rootNode, rand() % 100);
	}

	printBinaryTree(rootNode);

	int num = 0;
	printf("Enter number to be searched: ");
	scanf("%d", &num);
	
	if (search(rootNode, num))
		printf("Number found!\n");
	else
		printf("Number not found!\n");

	return 0;
}

