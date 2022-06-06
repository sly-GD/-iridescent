import java.awt.Graphics;
import java.applet.Applet;
public class HelloWorldApplet extends Applet{
public String str;
public void init(){
str=new String("Hello World!");
}
public void paint(Graphics g){
g.drawString(str,50,50);
}
}