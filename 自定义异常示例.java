package com.实验九;

public class 自定义异常示例 {
    public static void main(String[] args) {
        inputChar();
    }
     public static void inputChar(){
            try{
                char c;
                while (true) {
                    c=(char)System.in.read();//从标准输入设备读取
                    if(c>='A'&&c<='Z'){
                        System.out.println(c);
                    }
                }
            }
            catch(Exception e){ }
        }
    }
class MyExcep extends NumberFormatException{
    public MyExcep(){
        System.out.println("你输入非大写字母！");
    }
}