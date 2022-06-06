package com.实验十一;
import java.util.*;
public class Vector类示例 {
    public static void main(String[] args) {
        Vector vec=new Vector(3);
        System.out.println("初始容量为："+vec.capacity());
        vec.addElement(new Integer(1));
        vec.addElement(new Integer(2));
        vec.addElement(new Integer(3));
        vec.addElement(new Integer(7));
        vec.addElement(new Integer(8));
        System.out.println("新容量为："+vec.capacity());
        System.out.println("vector的值为："+vec.capacity());
        for(int i=0;i<vec.size();i++){
            int x=((Integer)(vec.get(i))).intValue();
            System.out.println(x);
        }
        System.out.println("vector中的组件数为："+vec.size());
        System.out.println("第一个组件值为："+vec.firstElement());
        System.out.println("最后一个组件值为："+vec.lastElement());
        if(vec.contains(new Integer(2))){
            System.out.println("找到值等于2的组件");
        }
        vec.removeElementAt(1);
        if(vec.contains(new Integer(2))){
            System.out.println("找到值等于2的组件");
        }
        else{
            System.out.println("删除值等于2的组件");
        }
    }
}
