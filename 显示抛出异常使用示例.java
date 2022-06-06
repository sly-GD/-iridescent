package com.实验九;

public class 显示抛出异常使用示例 {
    static  void test(){
        System.out.println("显式抛出异常");
        throw new ArithmeticException();//抛出异常
    }
    public static void main(String[] args) {
     try{
         test();
     }
     catch(ArithmeticException e){
         System.out.println("收到异常");
        }
    }
}
