#include <stdio.h>

typedef char element;
typedef struct treeNode
{
	char key;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;

treeNode* searchBST(treeNode* root, char x)
{
	if (root == NULL) printf("������ ��尡 �����ϴ�.");
	else
	{
		treeNode* p;
		p = root;
		while (p != NULL)
		{
			if (x < p->key)p = p->left;
			else if (x == p->key) return p;
			else p = p->right;
		}
		printf("\n ã�� Ű�� �����ϴ�.\n");
		return p;
	}
}


treeNode* insertNode(treeNode* p, char x)
{
	treeNode* newNode;
	if (p == NULL)
	{
		newNode = (treeNode*)malloc(sizeof(treeNode));
		newNode->key = x;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}
	else if (x < p->key) p->left = insertNode(p->left, x);
	else if (x > p->key) p->right = insertNode(p->right, x);
	else printf("\n �̹� ���� Ű�� �ֽ��ϴ�! \n");

	return p;
}

void deleteNode(treeNode* root, element key)
{
	treeNode* parent, * p, * succ, * succ_parent;
	treeNode* child;
	parent = NULL;
	p = root;
	while ((p != NULL) && (p->key != key))
	{
		parent = p;
		if (key < p->key) p = p->left;
		else p = p->right;
	}

	if (p == NULL)
	{
		printf("\n ã�� Ű�� ���� Ʈ���� �����ϴ�\n");
		return;
	}
	if ((p->left == NULL) && (p->right == NULL))
	{
		if (parent != NULL)
		{
			if (parent->key == p) parent->left = NULL;
			else parent->right = NULL;
		}
		else
		{
			root = NULL;
		}
	}
	else if ((p->left == NULL) || (p->right == NULL))
	{
		if (p->left != NULL) child = p->left;
		else child = p->right;

		if (parent != NULL)
		{
			if (parent->left == p) parent->left = child;
			else parent->right = child;
		}
		else root = child;
	}
	else
	{
		succ_parent = p;
		succ = p->left;
		while (succ->right != NULL)
		{
			succ_parent = succ;
			succ = succ->right;
		}
		if (succ_parent->left == succ) succ_parent->left = succ->left;
		else succ_parent->right = succ->left;
		p->key = succ->key;
		p = succ;
	}
	free(p);
}

void displayInorder(treeNode* root)
{
	if (root)
	{
		displayInorder(root->left);
		printf("%c_", root->key);
		displayInorder(root->right);
	}
}


int main()
{
	treeNode* root = NULL;
	char key;

	root = insertNode(root, 'k');
	insertNode(root, 'i');
	insertNode(root, 'c');
	insertNode(root, 'j');
	insertNode(root, 'j');
	insertNode(root, 'b');
	insertNode(root, 'z');
	insertNode(root, 'o');


	displayInorder(root);

	/*searchBST(root, 'K');
	root = insertNode(root, 'k');
	insertNode(root, 'i');
	displayInorder(root);*/

	/*printf("\n������ ���� �Է� \n");
	scanf("%c", &key);
	deleteNode(root, key);
	displayInorder(root);*/



	return 0;
}