package com.实验八;

public class 多种方法构造字符串__createString {
    public static void main(String[] args) {
        String s1="直接创建字符串";
        String s2;
        s2="分步创建字符串";
        String s3=new String();
        s3="使用不带参数的构造方法创建字符串";
        String s4=new String("使用字符串对象创建一个新的字符串");
        char c1[]={'H','i',',','j','a','v','a'};
        String s5=new String(c1);
        String s6=new String(c1,0,2);
        System.out.println(s1);
        System.out.println(s2);
        System.out.println(s3);
        System.out.println(s4);
        System.out.println(s5);
        System.out.println(s6);
    }
}
