package com.实验四;

public class 运行时多态__RuntimePolymorphism {
    public static void main(String[] args) {
        Animal a1=new Dog();
        Animal a2=new Cat();
        Animal a3=new Animal();
        DoSpeak(a1);
        DoSpeak(a2);
        DoSpeak(a3);
    }
    public static void DoSpeak(Animal an){
        an.speak();
    }
}
class Animal{
    public void speak(){
        System.out.println("Animal is speaking!");
    }

}
class Dog extends Animal{
    public void speak(){
        System.out.println("Wang Wamg!");
    }
}
class Cat extends Animal{
    public void speak(){
        System.out.println("Meow Meon!");
    }
}