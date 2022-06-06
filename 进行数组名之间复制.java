package com.实验八;

public class 进行数组名之间复制 {
    public static void main(String[] args) {
        int[] a1={1,2,3,4,5};
        int[] a2;
        a2=a1;//数组名复制，实质是赋地址，指向相同地址堆空间
        for(int i=0;i<a2.length;i++){
            a2[i]++;
        }
        for(int i=0;i<a1.length;i++){
            System.out.println("a1["+i+"]="+a1[i]);
        }
    }
}
