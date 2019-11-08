import java.applet.*;
import java.awt.*;
import java.awt.geom.*;
import java.util.*;
public class Oval extends Applet implements Runnable
{
	Shape circle;
	Color c;

	public void init()
	{   
	    circle=new Ellipse2D.Float(90,90,100,100);
	   
	    Thread th=new Thread(this);
	    th.start();
	}
	public void run()
	{
	   try
	   {
	      while(true)
	      {
	      	 int r=(int)(Math.random()*255);
	      	 int g=(int)(Math.random()*255);
	      	 int b=(int)(Math.random()*255);
	      	 c=new Color(r,g,b);
	        
	    
	         Thread.sleep(300);
	         
	         repaint();
	      }
	   }catch(Exception ex){
	      ex.printStackTrace();
	   }
	}
	public void update(Graphics g){
	    paint(g);
	}
	public void paint(Graphics g){
	    Graphics2D d=(Graphics2D) g;
	    d.setColor(c);
	    d.fill(circle);
	}
}
/*<applet code=Oval.class height=300 width=300>
</applet> */