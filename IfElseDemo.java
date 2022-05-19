import java.util.Scanner;

public class IfElseDemo {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
       while(!scanner.hasNext("quit")){//IDEA中ctrl+D可以中止输入循环
        int score=scanner.nextInt();//输入quit后离开循环

        if(score>=60){
            System.out.println("及格！pass！");
        }
        else {
            System.out.println("不及格！flunk！");
        }
    }scanner.close();
    }
}
