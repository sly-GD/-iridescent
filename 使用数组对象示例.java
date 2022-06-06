package com.实验八;

public class 使用数组对象示例 {
    public static void main(String[] args) {
    Student e[]=new Student[5];
    e[0]=new Student("张三",25);
    e[1]=new Student("李四",30);
    e[2]=new Student("王五",35);
    e[3]=new Student("刘六",28);
    e[4]=new Student("赵七",32);
    System.out.println("平均年龄："+getAverage(e));
    getAll(e);
    }
    static int getAverage(Student e[]){
        int sum=0;
        for(int i=0;i<e.length;i++){
            sum=sum+e[i].age;
        }
        return sum/e.length;
    }

    static void getAll(Student e[]){
        for(int i=0;i<e.length;i++){
            System.out.println(e[i].name+e[i].age);
        }
    }
}

class Student{
        String name;
        int age;
        public Student(String pname,int page) {
            name = pname;
            age = page;
        }
}