package com.实验八;

public class 改变字符串内容__StrChange {
    public static void main(String[] args) {
        StringBuffer s1=new StringBuffer("HAllo,java!");
        s1.setCharAt(1,'e');
        System.out.println(s1);
        s1.replace(1,5,"i");
        System.out.println(s1);
        s1.delete(0,3);
        System.out.println(s1);
        s1.deleteCharAt(4);
        System.out.println(s1);
    }
}
