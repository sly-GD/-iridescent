package com.实验四;

public class 通过super调用父类成员 {
    public static void main(String[] args) {
        Dog1 g1=new Dog1();
        g1.speak();

    }

}
class Animal1{
    String name;
    String nickName;
    public void speak(){
        System.out.println("Animal is speaking!");

    }
    Animal1(){
        System.out.println("一只动物被构造！__An animal is constructed.");
    }

}
class Dog1 extends Animal1{
    Dog1(){
        super();
        super.nickName="Kelly";
        super.speak();
        System.out.println("一只狗被构造！__A dog is constructed.");
    }
    String name;
    public void speak(){
        System.out.println("Wang Wamg!");
    }

}