class Parent {
    int i=9;
    int j;
    Parent(){
        System.out.println("i="+i);
        j=39;
        System.out.println("j="+j);
    }
    static int x=prt("static parent.x initialized.");
    static int prt(String s) {
        System.out.println(s);
        return 47;
    }
}
    public class Get extends Parent{
        int k=prt("Get.k initialized.");
        Get(){
            prt("k="+k);
            prt("j="+j);
        }
        static int y=prt("Get.y initialized.");
        static int prt(String s) {
            System.out.println(s);
            return 63;
        }
        public static void main(String [] args ) {
            prt("Get constructor.");
            Get s= new Get();
        }
    }

