import javax.swing.*;
import java.awt.*;

public class ContainerExample{
    public static void main(String[] args) {

        JFrame f = new JFrame("Container Example");

        Container c = f.getContentPane();
        c.setLayout(null);

        JButton b = new JButton("Click Me");
        b.setBounds(100, 100, 120, 30);

        c.add(b);

        f.setSize(300, 300);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}