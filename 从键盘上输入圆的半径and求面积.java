package com.实验八;
public class 从键盘上输入圆的半径and求面积 {
    final static double PI=3.1415926;
    //定义变量PI，final修饰不可改变
    public static void main(String[] args) {
     double radius,area;
     radius=Double.parseDouble(args[0]);//从键盘接收，将args[0]转换为double
        //parseDouble（）是Double类中的一个方法，用于转换字符串成double类型
    area=PI*radius*radius;
    System.out.println("圆的面积为："+area);
    }
}
