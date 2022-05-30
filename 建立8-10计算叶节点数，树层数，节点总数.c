#include"stdio.h"
#include"malloc.h"
typedef char DataType;
#include"BiTree.h"
#include"BiTreeTraverse.h"
int main() {
	BiTreeNode* root,*p;
	char x;
	Initiate(&root);//初始化的是头节点，根节点的数据要在头节点下插入
	p = InsertLeftNode(root, 'A');//插入根节点
	p = InsertLeftNode(p, 'B');
	p = InsertLeftNode(p, 'D');
	p = InsertRightNode(p, 'G');
	p = InsertRightNode(root->leftChild, 'C');
	InsertLeftNode(p, 'E');
	InsertRightNode(p, 'F');

	printf("该二叉树叶节点数：%d", Leaf(root->leftChild));//要给根节点，不是头节点
	printf("\n该二叉树节点总数：%d", Count(root->leftChild));
	printf("\n该二叉树层数为：%d", High(root->leftChild));
	Destroy(&root);
	return 0;
}