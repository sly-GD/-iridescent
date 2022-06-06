//#include"stdio.h"
//#include"malloc.h"
//#define MaxSize 20
//#define MaxVertices 20
//#define MaxEdge 100
//#define MaxWeight 1000
//typedef int DataType;
//#include"AdjMGraph.h"
//#include"AdjMGraphCreat.h"
//#include"AdjMGraphTraverse.h"
//
//void Visit(DataType item) {//定义访问操作函数
//	printf("%c   ", item);
//}
//
//int main() {
//	AdjMGraph g;
//	DataType a[] = {'A','B','C','D','E'};
//	RowColWeight rcw[] = { {0,1,10},{0,4,20},{1,3,30},{2,1,40},{3,2,50} };
//	int n = 5, e = 5;//定义图的顶点数，边数
//	CreatGraph(&g,a,n,rcw,e);//该图为非连通图
//	printf("深度遍历优先序列为：");
//	DepthFirstSearch(g,Visit);
//	printf("\n广度遍历优先序列为：");
//	BroadFirstSearch(g,Visit);
//	return 0;
//}