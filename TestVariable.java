public class TestVariable {
    public static void main(String []args){
        byte byteVariable=0x55;
        short shortVariable=0x55ff;
        int intVariable=1000000;
        long longVariable=0xffffL;
        char charVariable='a';
        float floatVariable=0.23F;
        double doubleVariable=0.7E-3;
        boolean booleanVariable=true;
        System.out.println("字节型变量byteVariable="+byteVariable);
        System.out.println("短整型变量shortVaiable="+shortVariable);
        System.out.println("整形变量intVariable="+intVariable);
        System.out.println("长整型变量longVariable="+longVariable);
        System.out.println("字符型变量charVariable="+charVariable);
        System.out.println("浮点型变量floatVariable="+floatVariable);
        System.out.println("双精度变量doubleVariable="+doubleVariable);
        System.out.println("布尔型变量booleanVariable="+booleanVariable);
    }
}
