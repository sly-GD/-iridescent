//#include"stdio.h"
//#include"malloc.h"
//typedef char DataType;
//#include"BiTree.h"
//#include"BiTreeTraverse.h"
//int main() {
//	BiTreeNode* root, * p, * find;
//	char x;
//	Initiate(&root);//��ʼ������ͷ�ڵ㣬���ڵ������Ҫ��ͷ�ڵ��²���
//	p = InsertLeftNode(root,'A');//������ڵ�
//	p = InsertLeftNode(p,'B');
//	p = InsertLeftNode(p, 'D');
//	p = InsertRightNode(p, 'G');
//	p = InsertRightNode(root->leftChild, 'C');
//	InsertLeftNode(p, 'E');
//	InsertRightNode(p, 'F');
//
//	PrintBiTree(root,0);
//
//	printf("ǰ�����Ϊ��");//rootΪͷ�ڵ�û�����ݣ�����Ҫ��root->�ĸ��ڵ㿪ʼ
//	PerOrder(root->leftChild,Visit);
//	printf("\n�������Ϊ��");
//	InOrder(root->leftChild, Visit);
//	printf("\n�������Ϊ��");
//	PostOrder(root->leftChild,Visit);
//
//	printf("\n������Ҫ���ҵ��ַ���");
//	scanf("%c",&x);
//	find = Search(root, x);
//	if (find!=NULL) {
//		printf("\nԪ��%c�ڶ�������",x);
//	}
//	else
//	{
//		printf("\nԪ��%c���ڶ�������",x);
//	}
//	Destroy(&root);		//Ҫ����ʹ����Ķ�����
//	return 0;
//}