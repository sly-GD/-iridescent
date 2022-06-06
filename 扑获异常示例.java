package com.实验九;

public class 扑获异常示例 {
    public static void main(String[] args) {
        int a,b,c;
        try{
            a=100;
            b=Integer.parseInt(args[0]);
            c=a/b;
            System.out.println("c="+c);
            System.out.println("没有异常：");
        }
        catch(ArithmeticException e){
            System.out.println("铺货异常："+e.getMessage());
            e.printStackTrace();
        }
        catch(Exception e){
            System.out.println("没有异常处理类："+e.getMessage());
            e.printStackTrace();
        }
        finally {
            System.out.println("执行完毕！");
        }
    }
}
