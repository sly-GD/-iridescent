package com.实验四;

public class 分析继承中构造造法执行 {
    public static void main(String[] args) {
        son son=new son();
        System.out.println("*************************");
        son son1=new son("**==**");
    }

}
class Grandfather{
    public Grandfather(){
        System.out.println("This is Grandfather!");
    }
    public Grandfather(String s){
        System.out.println("This is Grandfather"+s);
    }
}
class father extends Grandfather{
    public father(){
        System.out.println("This is father!");
    }
    public father(String s){
        System.out.println("This is father!"+s);
    }
}
class son extends father{
    public son(){
        System.out.println("This is son!");
    }
    public son(String s){
        System.out.println("This is son!"+s);
    }
}