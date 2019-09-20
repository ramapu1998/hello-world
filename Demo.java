import java.awt.*;
import java.applet.*;

public class Demo extends Applet
{
  Label l1,l2,l3,l4;
  TextField t1,t2,t3,t4;
  Button b1,b2,b3;
  Panel p1,p2;
  
  public void init()
  {
    l1=new Label("Principal");
    l2=new Label("Time");
    l3=new Label("Rate");
    l4=new Label("Simple Interest");

    p1=new Panel();
    p2=new Panel();

    t1=new TextField(10);
    t2=new TextField(10);
    t3=new TextField(10);
    t4=new TextField(10);

    b1=new Button("Calculate");
    b2=new Button("Clear");
    b3=new Button("Exit");

    p1.add(l1);
    p1.add(t1);
    p1.add(l2);
    p1.add(t2);
    p1.add(l3);
    p1.add(t3);
    p1.add(l4);
    p1.add(t4);
    p2.add(b1);
    p2.add(b2);
    p2.add(b3);

    p1.setLayout(new GridLayout(4,2));
    
    p2.setLayout(new GridLayout(1,3));

   add(p1);
   add(p2);
  }
}   
/*<applet code="Demo.class" Height=400 Width=400>
   </applet>*/