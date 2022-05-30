package com.实验六;
import java.util.Scanner;
public class TestComplex {
    public static void main(String[] args) {
        System.out.println("请输入第一个复数式（格式：a+bi）：");
        Scanner in=new Scanner(System.in);
        String complex1=in.nextLine();
        System.out.println("请输入第二个复数式（格式：a+bi）：");
        String complex2=in.nextLine();
        Complex c1=new Complex();
        Complex c2=new Complex();

        String[]  c1Arr=complex1.split("\\+");
        int real1=Integer.parseInt(c1Arr[0]);
        int imag1=Integer.parseInt(c1Arr[1].substring(0,1));
        c1.setRealPart(real1);
        c1.setImaginPart(imag1);

        String[]  c2Arr=complex2.split("\\+");
        int real2=Integer.parseInt(c2Arr[0]);
        int imag2=Integer.parseInt(c2Arr[1].substring(0,1));
        c1.setRealPart(real2);
        c1.setImaginPart(imag2);
        System.out.println("第一个复数+第二个复数："+c1.plus(c2).format());
        System.out.println("第一个复数-第二个复数："+c1.minus(c2).format());
    }
}
class Complex{
    private int realPart;
    public  int imaginPart;
    public int getRealPart(){
        return realPart;
    }
    public void setRealPart(int realPart){
        this.realPart=realPart;
    }
    public int getImaginPart(){
        return imaginPart;
    }
    public void setImaginPart(int imaginPart){
        this.imaginPart=imaginPart;
    }
    public Complex plus(Complex c){//加法
        int real=realPart+c.realPart;
        int imagin=imaginPart+c.imaginPart;
        Complex result=new Complex();
        result.setRealPart(realPart);
        result.setImaginPart(imaginPart);
        return result;
    }
    public Complex minus(Complex c){//减法
        int real=this.realPart-c.realPart;
        int imagin=imaginPart+c.imaginPart;
        Complex result=new Complex();
        result.setRealPart(realPart);
        result.setImaginPart(imaginPart);
        return result;
    }
    public String format(){
        if(this.imaginPart<0){
            return this.realPart+(this.imaginPart+"i");
        }
        else{
            return this.realPart+"+"+this.imaginPart+"i";
        }
    }
}

