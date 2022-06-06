package com.实验十一;

import java.util.ArrayList;
import java.util.List;

public class ArrayList示例 {
    public static void main(String[] args) {
        List<String>list=new ArrayList<String>();
        list.add("张三");
        list.add("李四");
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }
    }
}
