import java.util.Scanner;
public class 利用for累加Cycle_accumulation {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int a=scanner.nextInt();
        int i,sum=0;
        for(i=0;i<=a;i++){
            sum+=i;
        }
        System.out.println("累加和为(cumulative sum):"+sum);
    }
}
