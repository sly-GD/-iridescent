package com.实验十一;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class HashSet类示例 {
    public static void main(String[] args) {
        Set<String>ha=new HashSet<String>();
        ha.add("one");
        ha.add("two");
        ha.add("three");
        ha.add("two");
        Iterator it=ha.iterator();
        while (it.hasNext()){
            System.out.println(it.next());
        }
        ha.remove("three");
        System.out.println("删除后：");
        Iterator it2=ha.iterator();
        while (it2.hasNext()){
            System.out.println(it2.next());
        }
    }
}
