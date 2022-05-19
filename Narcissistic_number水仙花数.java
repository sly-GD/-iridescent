public class Narcissistic_number水仙花数 {
    public static void main(String[] args) {
        int num,i,o,t,h;
        for(i=100;i<1000;i++){
            o=i%10;
            t=(i%100)/10;
            h=i/100;
            if(o*o*o+ t*t*t+h*h*h==i){
                System.out.println(i);
            }
        }
    }
}
