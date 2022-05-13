 public class Test extends TT{
    public static void main(String[] args) {
        Test t=new Test("Tom");

    }
    public Test(String s) {
        super(s);
        System.out.println("How do you do?");
    }
    public Test() {
        this("i am tom");
    }


 }
class TT{
    public TT() {

        System.out.println("What a pleasure!");
    }
    public TT(String s) {
        this();
        System.out.println("i am "+s);
    }
}

