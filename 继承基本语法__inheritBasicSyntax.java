package com.实验四;

import java.awt.*;

public class 继承基本语法__inheritBasicSyntax {
    public static void main(String[] args) {
        Dog g=new Dog();
        g.speak();
    }
}
class Animal{
    String name;
    public void speak(){
        System.out.println("Animal is speaking!");

    }
    Animal(){
        System.out.println("一只动物被构造！__An animal is constructed.");
    }

}
class Dog extends Animal{
    Dog(){
     System.out.println("一只狗被构造！__A dog is constructed.");
    }
    String name;
    public void speak(){
        System.out.println("Wang Wamg!");
    }

}