package com.实验八;

public class 枚举类型示例 {
    public static void main(String[] args) {
        showColor(Color.RED);
    }
    public static void showColor(Color color){
        switch(color){
            case RED:
                System.out.println("red");break;
            case GREEN:
                System.out.println("green");break;
            case  BLUE:
                System.out.println("blue");break;
        }
    }
}
enum Color{//枚举类型的声明,全为大写
        RED,
        GREEN,
        BLUE,
}
