#include"stdio.h"
#include"string.h"
//#include"math.h"
//压缩存储，矩阵本质还是数组只是采用特殊输出方式
//本题为上三角矩阵
#define order 3
typedef int datatype;
void PrintMatrix(datatype a[], int n);
void  MatrixAdd(datatype a[], datatype b[], datatype c[], int n);
int main() {
	int i;
	int n=order;
	datatype a[] = { 1,2,4,3,5,6,0 }, b[] = {10,20,40,30,50,60,0}, c[order*(order+1)/2+1];
	
	//printf("Please enter one of  the matrices you want to add by row:  ");
	//for (i = 0; i < max; i++) {
	//	scanf("%d", a[i]);
	//}
	//printf("Please enter the other matrix you want to add by row:  ");
	//for (i = 0; i < max; i++) {
	//	scanf("%d", b[i]);
	//}
	
	printf("The matrix A:  \n");
	PrintMatrix(a, n);
	printf("The matrix B:  \n");
	PrintMatrix(b, n);
	MatrixAdd(a, b, c, n);
	printf("combined:  \n");
	PrintMatrix(c, n);
	return 0;
}

//n为矩阵阶数
void  MatrixAdd(datatype a[], datatype b[], datatype c[], int n) {
	int i;
	for (i = 0; i <= n * (n + 1) / 2 ;i++) {
		c[i] = a[i] + b[i];
	}
}

//输出方阵
void PrintMatrix(datatype a[],int n) {
	int i,j,k;
	for (i =1; i <=n;i++) {
		for (j = 1; j <=n; j++) {
			if (i > j) { k = n * (n +1) / 2; }
			else { k =j*(j-1)/2+i-1; }
			printf("%5d    ",a[k]);//如果为int型用%d
		}
		printf("\n");
		
	}
}