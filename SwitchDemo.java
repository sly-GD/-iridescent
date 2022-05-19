import java.util.Scanner;
public class SwitchDemo {
    public static void main(String[] args) {

        Scanner scanner=new Scanner(System.in);
        while(!scanner.hasNext("quit")){
            int score=scanner.nextInt();
            int testScore=score/10;
            switch (testScore){
                case 10:
                case 9:
                    System.out.println("优 Excellent");break;
                case 8:
                    System.out.println("良 Good");break;
                case 7:
                    System.out.println("中 Medium");break;
                case 6:
                    System.out.println("及格 Pass");break;
                case 5:
                case 4:
                case 3:
                case 2:
                case 1:
                case 0:System.out.println("不及格 Flunk");break;
                default:
                    System.out.println("以上没有匹配上的");
            }
        }
    }
}
