package com.实验四;

public class 方法重写 {
    public static void main(String[] args) {
        animanals a=new Dog("旺财");
        a.Sleep();
        a.Speak();
        animanals a1=new Cat("Tom");
        a1.Sleep();
        a1.Speak();

    }
    static class animanals{
        protected String name;
        animanals(String name){
            this.name=name;
        }
        public void Sleep(){

        }
        public void Speak(){

        }

    }
    static class Dog extends animanals{
        Dog(String name){
            super(name);
        }
        public void Sleep(){
            System.out.println("狗睡觉的方式");
        }
        public void Speak(){
            System.out.println("狗的吼叫方式");
        }
    }
    static class Cat extends animanals{
        Cat(String name){
            super(name);
        }
        public void Sleep(){
            System.out.println("猫睡觉的方式");
        }
        public void Speak(){
            System.out.println("猫的吼叫方式");
        }
    }

}
