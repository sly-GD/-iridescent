package com.实验六;

interface Animal{
    public void eat(Food food);
}

public class 饲养员喂动物 {
    public static void main(String[] args) {
        Feeder feeder=new Feeder();
        Animal animal=new Dog();
        Food food=new Bone("肉骨头");
        feeder.feed(animal,food);
        animal=new Cat();
        food=new Fish("鱼");
        feeder.feed(animal,food);
    }
}
class Cat implements Animal{
    @Override
    public void eat(Food food) {
        System.out.println("小猫吃"+food.getName());
    }
}
class Dog implements Animal{
    @Override
    public void eat(Food food) {
        System.out.println("小狗吃"+food.getName());
    }
}

abstract class Food{
    protected String name;

    public String getName() {
        return name;
    }
    public void setName(String name){
        this.name=name;
    }
}

class Fish extends Food{
    public Fish(String  name){
        this.name=name;
    }
}
class Bone extends Food{
    public Bone(String name){
        this.name=name;
    }
}

class Feeder{
    public void feed(Animal animal,Food food){
        animal.eat(food);
    }
}
