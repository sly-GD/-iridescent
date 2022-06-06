package com.实验十一;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class LinkedList类使用 {
        public static void main(String[] args) {
                String b="张三",c= "热烈";
            List<String> list = new LinkedList<String>();
            list.add("欢迎");
            list.add("李四");
            list.add("光临! ");
            System.out.println("修改前: ");
            for(String s:list)
                    System.out.print(s);
            System.out.println();
            list.set(1, b);//将索引位置为1的对象修改为对象beSystem.out.printin("修改后: ");
            for(String s:list)
                    System.out.print(s);
            System.out.println();
                    list.add(0, c);//将对象c添加到索引位置为0的位置
            System.out.println("添加元素后: ");
            for(String s:list)
                System.out.print(s);
        }

    }

