#pragma once
typedef struct node {
	DataType data;
	struct node* leftChild;
	struct node* rightChild;
}BiTreeNode;
#include"BiTreeTraverse.h"

//初始化，建立二叉树头节点
void Initiate(BiTreeNode **root) {
	*root = (BiTreeNode*)malloc(sizeof(BiTreeNode));
	(*root)->leftChild = NULL;
	(*root)->rightChild = NULL;
}

//左插入节点（插入成功返回节点指针，失败返回空指针）
BiTreeNode* InsertLeftNode(BiTreeNode*current,DataType x) {
	//若current节点非空，则在current左子树插入节点x。
	//原来current节点的左子树成为节点x的左子树
	BiTreeNode* s,* t;
	if (current == NULL)
		return NULL;
	t = current->leftChild;//保存原来current的左子树
	s = (BiTreeNode*)malloc(sizeof(BiTreeNode));
	s->data = x;
	s->leftChild = t;
	s->rightChild = NULL;//插入新节点时要把新节点的所成员全部初始化
	current->leftChild = s;//新节点s成为current的新左子树
	return current->leftChild;

}

//右插入节点（插入成功返回新节点指针，失败返回空指针）
BiTreeNode* InsertRightNode(BiTreeNode* current,DataType x) {
	//若current节点非空，则在current右子树插入节点x
	//原来current节点的右子树成为节点x的右子树
	BiTreeNode* s, * t;
	if (current == NULL)
		return NULL;
	t = current->rightChild;//保存原来current的右子树
	s = (BiTreeNode*)malloc(sizeof(BiTreeNode));
	s->data = x;
	s->leftChild = NULL;
	s->rightChild = t;
	current->rightChild = s;
	return current->rightChild;
}

//左删除子树（成功则返回删除节点的双亲节点，失败返回空指针）
BiTreeNode* DeleteLeftTree(BiTreeNode* current) {
	//先判断当前节点是否非空，和当前节点是否存在左子树
	if (current == NULL || current->leftChild == NULL) {
		return NULL;
	}
	Destroy(&current->leftChild);
	current->leftChild = NULL;
	return current;
}

//右删除子树（成功则返回删除节点的双亲节点，失败返回空指针）
BiTreeNode* DeleteRightTree(BiTreeNode* current) {
	//先判断当前节点是否非空，和当前节点是否存在右子树
	if (current == NULL || current->rightChild == NULL) {
		return NULL;
	}
	Destroy(&current->rightChild);
	current->rightChild = NULL;
	return current;
}

//采用凹入表示法打印二叉树， ——递归
//打印是先打印右子树，然后是根节点，最后是左子树。是一种中序遍历
void PrintBiTree(BiTreeNode* root,int n) {
	//n为缩进层数,初始值为0
	int i;
	if (root == NULL)
		return;			//递归出口	
	PrintBiTree(root->rightChild,n+1);
	for (i = 0; i < n - 1; i++)
		printf("	");				//把底层的向后推
		if (n > 0) {
			printf("-----");
			printf("%c\n",root->data);		//此处为字符
		}

		PrintBiTree(root->leftChild,n+1);
	
}

//在以root为根节点的二叉树中查找元素x，（成功查找到返回x的指针，失败返回NULL）
BiTreeNode* Search(BiTreeNode* root,DataType x) {
	BiTreeNode* find = NULL;		//标志变量初始标记成失败
	if (root!=NULL) {
		if (root->data == x)
			find = root;
		else {
			find = Search(root->leftChild, x);//左子树
			if (find == NULL)
			{	
				find = Search(root->rightChild, x);//右子树
			}
		}
	}
	return find;
}