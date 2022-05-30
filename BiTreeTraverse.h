#pragma once
//输出显示函数设计。输出访问节点的信息
void Visit(DataType item) {
	printf("%c   ",item);
}

//前序遍历，利用递归----Visit()为访问操作
void PerOrder(BiTreeNode* root,void Visit(DataType item)) {
	if (root != NULL) {
		Visit(root->data);
		PerOrder(root->leftChild,Visit);
		PerOrder(root->rightChild,Visit);
	}
}

//中序遍历，递归-----Visit（）为访问操作
void InOrder(BiTreeNode* root, void Visit(DataType item)) {
	if (root != NULL) {
		Visit(root->data);
		InOrder(root->leftChild,Visit);
		InOrder(root->rightChild,Visit);
	}
}

//后序遍历，递归-----Visit()是访问操作
void PostOrder(BiTreeNode*root,void Visit(DataType item)) {
	if (root != NULL) {
		Visit(root->data);
		PostOrder(root->leftChild, Visit);
		PostOrder(root->rightChild, Visit);
	}
}
//撤销二叉树操作，递归
//要撤销某节点必须先撤销该节点的子节点————所以必须后序遍历
void Destroy(BiTreeNode** root) {
	if (*root != NULL && ( * root)->leftChild != NULL) {
		Destroy(&(*root)->leftChild);
	}
	if (*root!=NULL&&(*root)->rightChild!=NULL) {
		Destroy(&(*root)->rightChild);
	}
	free(*root);
}