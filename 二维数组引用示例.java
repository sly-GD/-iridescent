package com.实验八;

public class 二维数组引用示例 {
    public static void main(String[] args) {
        int[][] matrix={
                {1,2,3,4,5},{2,3,4,5},{3,4,5},{4,5},{5}
        };
        System.out.println("the length of matrix is"+matrix.length);
        for(int i=0;i<5;i++){
            System.out.println("the length of matrix["+i+"] is"+matrix[i].length);
        }
    }
}
