#include"stdio.h"
#include"malloc.h"
typedef char DataType;
#include"BiTree.h"
#include"BiTreeTraverse.h"
int main() {
	BiTreeNode* root,*p;
	char x;
	Initiate(&root);//��ʼ������ͷ�ڵ㣬���ڵ������Ҫ��ͷ�ڵ��²���
	p = InsertLeftNode(root, 'A');//������ڵ�
	p = InsertLeftNode(p, 'B');
	p = InsertLeftNode(p, 'D');
	p = InsertRightNode(p, 'G');
	p = InsertRightNode(root->leftChild, 'C');
	InsertLeftNode(p, 'E');
	InsertRightNode(p, 'F');

	printf("�ö�����Ҷ�ڵ�����%d", Leaf(root->leftChild));//Ҫ�����ڵ㣬����ͷ�ڵ�
	printf("\n�ö������ڵ�������%d", Count(root->leftChild));
	printf("\n�ö���������Ϊ��%d", High(root->leftChild));
	Destroy(&root);
	return 0;
}