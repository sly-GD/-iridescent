package com.实验十一;

import java.util.Iterator;
import java.util.Set;
import java.util.TreeSet;

public class TreeSet类示例 {
    public static void main(String[] args) {
        Set<String>tr=new TreeSet<String>();
        tr.add("one");
        tr.add("two");
        tr.add("three");
        Iterator it=tr.iterator();
        while (it.hasNext()){
            System.out.println(it.next());
        }
    }
}
