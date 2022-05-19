import java.util.Scanner;

public class IfELseIfDemo {
     public static void main(String[] args) {
         Scanner scanner=new Scanner(System.in)  ;
        while(!scanner.hasNext("quit")){
            int score=scanner.nextInt();
            if(score>=70){
                if(score>=80){
                    if(score>=90){
                        System.out.println("优! Excellent");
                    }
                    else{
                        System.out.println("良！Good");
                    }
                }
                else{
                    System.out.println("中！medium");
                }
            }
            else{
                if (score >= 60) {
                    System.out.println("及格！Pass");
                }
                else{
                    System.out.println("不及格！Flunk");
                }
                }
            }

        }
     }

