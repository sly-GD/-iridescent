package com.实验九;
import java.io.File;
import java.io.IOException;
public class 转移异常示例 {
    public static void main(String[] aa) {
        try{
            File f1=new File("d:\\hello.txt");
            f1.createNewFile();
        }
        catch(IOException e){
            System.out.println(e.getMessage());
        }
    }
}
