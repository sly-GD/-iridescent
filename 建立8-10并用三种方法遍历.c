//#include"stdio.h"
//#include"malloc.h"
//typedef char DataType;
//#include"BiTree.h"
//#include"BiTreeTraverse.h"
//int main() {
//	BiTreeNode* root, * p, * find;
//	char x;
//	Initiate(&root);//初始化的是头节点，根节点的数据要在头节点下插入
//	p = InsertLeftNode(root,'A');//插入根节点
//	p = InsertLeftNode(p,'B');
//	p = InsertLeftNode(p, 'D');
//	p = InsertRightNode(p, 'G');
//	p = InsertRightNode(root->leftChild, 'C');
//	InsertLeftNode(p, 'E');
//	InsertRightNode(p, 'F');
//
//	PrintBiTree(root,0);
//
//	printf("前序遍历为：");//root为头节点没有数据，遍历要从root->的根节点开始
//	PerOrder(root->leftChild,Visit);
//	printf("\n中序遍历为：");
//	InOrder(root->leftChild, Visit);
//	printf("\n后序遍历为：");
//	PostOrder(root->leftChild,Visit);
//
//	printf("\n请输入要查找的字符：");
//	scanf("%c",&x);
//	find = Search(root, x);
//	if (find!=NULL) {
//		printf("\n元素%c在二叉树中",x);
//	}
//	else
//	{
//		printf("\n元素%c不在二叉树中",x);
//	}
//	Destroy(&root);		//要撤销使用完的二叉树
//	return 0;
//}