#pragma once
//�����ʾ������ơ�������ʽڵ����Ϣ
void Visit(DataType item) {
	printf("%c   ",item);
}

//ǰ����������õݹ�----Visit()Ϊ���ʲ���
void PerOrder(BiTreeNode* root,void Visit(DataType item)) {
	if (root != NULL) {
		Visit(root->data);
		PerOrder(root->leftChild,Visit);
		PerOrder(root->rightChild,Visit);
	}
}

//����������ݹ�-----Visit����Ϊ���ʲ���
void InOrder(BiTreeNode* root, void Visit(DataType item)) {
	if (root != NULL) {
		Visit(root->data);
		InOrder(root->leftChild,Visit);
		InOrder(root->rightChild,Visit);
	}
}

//����������ݹ�-----Visit()�Ƿ��ʲ���
void PostOrder(BiTreeNode*root,void Visit(DataType item)) {
	if (root != NULL) {
		Visit(root->data);
		PostOrder(root->leftChild, Visit);
		PostOrder(root->rightChild, Visit);
	}
}
//�����������������ݹ�
//Ҫ����ĳ�ڵ�����ȳ����ýڵ���ӽڵ㡪���������Ա���������
void Destroy(BiTreeNode** root) {
	if (*root != NULL && ( * root)->leftChild != NULL) {
		Destroy(&(*root)->leftChild);
	}
	if (*root!=NULL&&(*root)->rightChild!=NULL) {
		Destroy(&(*root)->rightChild);
	}
	free(*root);
}