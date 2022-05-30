#pragma once
typedef struct node {
	DataType data;
	struct node* leftChild;
	struct node* rightChild;
}BiTreeNode;
#include"BiTreeTraverse.h"

//��ʼ��������������ͷ�ڵ�
void Initiate(BiTreeNode **root) {
	*root = (BiTreeNode*)malloc(sizeof(BiTreeNode));
	(*root)->leftChild = NULL;
	(*root)->rightChild = NULL;
}

//�����ڵ㣨����ɹ����ؽڵ�ָ�룬ʧ�ܷ��ؿ�ָ�룩
BiTreeNode* InsertLeftNode(BiTreeNode*current,DataType x) {
	//��current�ڵ�ǿգ�����current����������ڵ�x��
	//ԭ��current�ڵ����������Ϊ�ڵ�x��������
	BiTreeNode* s,* t;
	if (current == NULL)
		return NULL;
	t = current->leftChild;//����ԭ��current��������
	s = (BiTreeNode*)malloc(sizeof(BiTreeNode));
	s->data = x;
	s->leftChild = t;
	s->rightChild = NULL;//�����½ڵ�ʱҪ���½ڵ������Աȫ����ʼ��
	current->leftChild = s;//�½ڵ�s��Ϊcurrent����������
	return current->leftChild;

}

//�Ҳ���ڵ㣨����ɹ������½ڵ�ָ�룬ʧ�ܷ��ؿ�ָ�룩
BiTreeNode* InsertRightNode(BiTreeNode* current,DataType x) {
	//��current�ڵ�ǿգ�����current����������ڵ�x
	//ԭ��current�ڵ����������Ϊ�ڵ�x��������
	BiTreeNode* s, * t;
	if (current == NULL)
		return NULL;
	t = current->rightChild;//����ԭ��current��������
	s = (BiTreeNode*)malloc(sizeof(BiTreeNode));
	s->data = x;
	s->leftChild = NULL;
	s->rightChild = t;
	current->rightChild = s;
	return current->rightChild;
}

//��ɾ���������ɹ��򷵻�ɾ���ڵ��˫�׽ڵ㣬ʧ�ܷ��ؿ�ָ�룩
BiTreeNode* DeleteLeftTree(BiTreeNode* current) {
	//���жϵ�ǰ�ڵ��Ƿ�ǿգ��͵�ǰ�ڵ��Ƿ����������
	if (current == NULL || current->leftChild == NULL) {
		return NULL;
	}
	Destroy(&current->leftChild);
	current->leftChild = NULL;
	return current;
}

//��ɾ���������ɹ��򷵻�ɾ���ڵ��˫�׽ڵ㣬ʧ�ܷ��ؿ�ָ�룩
BiTreeNode* DeleteRightTree(BiTreeNode* current) {
	//���жϵ�ǰ�ڵ��Ƿ�ǿգ��͵�ǰ�ڵ��Ƿ����������
	if (current == NULL || current->rightChild == NULL) {
		return NULL;
	}
	Destroy(&current->rightChild);
	current->rightChild = NULL;
	return current;
}

//���ð����ʾ����ӡ�������� �����ݹ�
//��ӡ���ȴ�ӡ��������Ȼ���Ǹ��ڵ㣬���������������һ���������
void PrintBiTree(BiTreeNode* root,int n) {
	//nΪ��������,��ʼֵΪ0
	int i;
	if (root == NULL)
		return;			//�ݹ����	
	PrintBiTree(root->rightChild,n+1);
	for (i = 0; i < n - 1; i++)
		printf("	");				//�ѵײ�������
		if (n > 0) {
			printf("-----");
			printf("%c\n",root->data);		//�˴�Ϊ�ַ�
		}

		PrintBiTree(root->leftChild,n+1);
	
}

//����rootΪ���ڵ�Ķ������в���Ԫ��x�����ɹ����ҵ�����x��ָ�룬ʧ�ܷ���NULL��
BiTreeNode* Search(BiTreeNode* root,DataType x) {
	BiTreeNode* find = NULL;		//��־������ʼ��ǳ�ʧ��
	if (root!=NULL) {
		if (root->data == x)
			find = root;
		else {
			find = Search(root->leftChild, x);//������
			if (find == NULL)
			{	
				find = Search(root->rightChild, x);//������
			}
		}
	}
	return find;
}