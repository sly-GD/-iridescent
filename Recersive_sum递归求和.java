import java.util.Scanner;
public class Recersive_sum递归求和 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int a=scanner.nextInt();
        int sum=recersive_sum(a);
        System.out.println("累加和为（cumulative sum）："+sum);
    }
    public static int recersive_sum(int n){
        if(n==1){
            return 1;
        }
        else{
            return recersive_sum(n-1)+n;
        }

    }
}
