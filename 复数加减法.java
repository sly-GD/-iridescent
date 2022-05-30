package com.实验六;
//定义两个操作数接口
interface IOperator{
    void addition(Object o1,Object o2);
    void subtraction(Object o1,Object o2);
    void printResult(Object o);
}
public class 复数加减法 {
    public static void main(String[] args) {
        //初始两个复数
        Complex c1=new Complex();
        c1.setReal(2);
        c1.setImaginary(3);
        Complex c2=new Complex();
        c2.setReal(3);
        c2.setImaginary(4);
        IOperator o=new OperatorComplexImpl();
        o.addition(c1,c2);
        o.subtraction(c1,c2);
    }
}
class Complex{
    private int real;
    private int imaginary;
    public int getReal(){
        return real;
    }
    public void setReal(int real){
       this.real=real;
    }

    public int getImaginary() {
        return imaginary;
    }

    public void setImaginary(int imaginary) {
        this.imaginary = imaginary;
    }
}
class OperatorComplexImpl implements IOperator{
    public void addition(Object o1,Object o2) {
        Complex c=new Complex();
        Complex c1=(Complex) o1;
        Complex c2=(Complex) o2;
        c.setReal(c1.getReal()+ c2.getReal());
        c.setImaginary(c1.getImaginary()+ c2.getImaginary());
        printResult(c);
    }

    @Override
    public void subtraction(Object o1, Object o2) {
        Complex c=new Complex();
        Complex c1=(Complex) o1;
        Complex c2=(Complex) o2;
        c.setReal(c1.getReal()- c2.getReal());
        c.setImaginary(c1.getImaginary()-c2.getImaginary());
        printResult(c);
    }

    @Override
    public void printResult(Object o) {
        Complex c=(Complex)o;
        System.out.println(c.getReal()+"+"+c.getImaginary()+"i");
    }
}

