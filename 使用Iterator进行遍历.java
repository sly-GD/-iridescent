package com.实验十一;
import java.util.*;
import java.util.Vector;

public class 使用Iterator进行遍历 {
        public static void main(String[] args) {
            Vector vec=new Vector(3);
            vec.addElement(new Integer(2));
            vec.addElement(new Integer(3));
            vec.addElement(new Integer(7));
            vec.addElement(new Integer(8));
            System.out.println("vector的值为："+vec);
            for(Iterator it=vec.iterator();it.hasNext();) {
                int x = ((Integer) it.next()).intValue();
                if (x == 2) {
                    it.remove();
                }
            }
            System.out.println("vector中的组件数为："+vec.size());
            if(vec.contains(new Integer(2))){
                System.out.println("找到值等于2的组件");
            }
            else{
                System.out.println("删除值等于2的组件");
            }
        }
}
