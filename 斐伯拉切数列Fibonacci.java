package com.实验八;

public class 斐伯拉切数列Fibonacci{
    public static void main(String[] args){
        int i;
        int f[]=new int[10];
        f[0]=1;
        f[1]=1;
        for(i=2;i<10;i++){
            f[i]=f[i-1]+f[i-2];
        }
        for(i=0;i<10;i++){
            System.out.println("f["+i+"]="+f[i]);
        }
    }}

