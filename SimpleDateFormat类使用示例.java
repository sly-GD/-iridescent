package com.实验八;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
public class SimpleDateFormat类使用示例 {
    public static void main(String[] args) {
        String strDate="2009-10-19 10:11:30.345";
        String pat1="yyyy-MM-dd HH:mm:ss.SSS"; //准备第一个模板，从字符串中提取日期数字
        String pat2="yyyy年MM月dd日HH时mm分ss秒SSS毫秒";//第二个模板，将提取后的日期数字变成指定格式
        SimpleDateFormat sdf1=new SimpleDateFormat(pat1);
        SimpleDateFormat sdf2=new SimpleDateFormat(pat2);
        Date d=null;
        try{
            d=sdf1.parse(strDate);
        }
        catch(ParseException e){
            e.printStackTrace();
        }
        System.out.println(sdf2.format(d));
    }
}
