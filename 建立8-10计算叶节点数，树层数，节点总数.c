//#include"stdio.h"
//#include"malloc.h"
//typedef char datatype;
//#include"bitree.h"
//#include"bitreetraverse.h"
//int main() {
//	bitreenode* root,*p;
//	char x;
//	initiate(&root);//初始化的是头节点，根节点的数据要在头节点下插入
//	p = insertleftnode(root, 'a');//插入根节点
//	p = insertleftnode(p, 'b');
//	p = insertleftnode(p, 'd');
//	p = insertrightnode(p, 'g');
//	p = insertrightnode(root->leftchild, 'c');
//	insertleftnode(p, 'e');
//	insertrightnode(p, 'f');
//
//	printf("该二叉树叶节点数：%d", leaf(root->leftchild));//要给根节点，不是头节点
//	printf("\n该二叉树节点总数：%d", count(root->leftchild));
//	printf("\n该二叉树层数为：%d", high(root->leftchild));
//	destroy(&root);
//	return 0;
//}