import javax.swing.*;
import java.awt.*;


public class Chat extends JFrame {
    JLabel label;
    JTextArea txt;
    JButton btn;
    JTextField txtInput;
    Chat(){
        this.setSize(400,600);
        this.setTitle("borderLayout Demo.");

        label=new JLabel("发言");
        btn=new JButton("发送");
        txtInput=new JTextField();
        txt=new JTextArea();
        JPanel jp=new JPanel();
        jp.setLayout(new BorderLayout());
        jp.add(label,BorderLayout.WEST);
        jp.add(txtInput,BorderLayout.CENTER);
        jp.add(btn,BorderLayout.EAST);

        this.add(jp,BorderLayout.SOUTH);
        this.add(txt,BorderLayout.CENTER);

        this.setLocationRelativeTo(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
    }
    public static void main(String []args){
        new Chat();
    }
}
