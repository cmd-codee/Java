import javax.swing.*;  
import java.awt.*;  
import java.awt.event.*;  
public class game extends Frame implements ActionListener{  
    int score = 0;
    JButton b;
    game(){     
        b=new JButton("score: " + score);  
        b.setBounds(0,0,394,394);
        b.addActionListener(this);    
        add(b);
        setSize(400,400);  
        setLayout(null);  
        setVisible(true); 
    }  
    public void actionPerformed(ActionEvent e) {  
        score += 1;
        b.setText("score: " + score);
    }  
    public static void main(String[] args) {  
        new game();  
    } }  