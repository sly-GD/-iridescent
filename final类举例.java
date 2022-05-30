package com.实验四;

public final class   final类举例 {//final修饰表示该类不能被继承，修饰方法变量表示不能被覆盖和被修改
    private String msg="这是final类！";
    public static void main(String[] args) {
        final类举例 fd=new final类举例();
        System.out.println(fd.msg);
    }


}
