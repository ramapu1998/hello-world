import javax.swing.*;
import java.awt.*;
class Ramanuj extends JFrame
{   
    
	Ramanuj()
	{  
       JLabel l1,l2;
       JTextField t1,t2;
       JButton b1,b2;
       JPanel p1,p2;

       l1=new JLabel("Username");
       l2=new JLabel("Password");
       t1=new JTextField(10);
       t2=new JTextField(10);
       b1=new JButton("Sign In");
       b2=new JButton("Cancel");

       p1=new JPanel();
       p2=new JPanel();

       p1.add(l1);
       p1.add(t1);
       p1.add(l2);
       p1.add(t2);
       p2.add(b1);
       p2.add(b2);

       p1.setLayout(new GridLayout(2,2));
       p2.setLayout(new GridLayout(1,2));

       add(p1);
       add(p2);

       setSize(200,200);
       setVisible(true);

       setLayout(new GridLayout(2,1));
	}
	public static void main(String[] args)
	{
        new Ramanuj();
	}
}