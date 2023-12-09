import javax.swing.*;

public class Q11 {
    Q11(){
        JFrame frame = new JFrame("Student Information");

        JLabel SID = new JLabel("Student ID:");  
        SID.setBounds(20, 20, 80, 30);  
        JTextField SIDTF = new JTextField();  
        SIDTF.setBounds(100, 20, 300, 30);

        JLabel firstName = new JLabel("First Name:");  
        firstName.setBounds(20, 50, 80, 30);  
        JTextField firstNameTF = new JTextField();  
        firstNameTF.setBounds(100, 50, 300, 30);

        JLabel lastName = new JLabel("Last Name:");  
        lastName.setBounds(20, 80, 80, 30);  
        JTextField lastNameTF = new JTextField();  
        lastNameTF.setBounds(100, 80, 300, 30);

        JLabel course = new JLabel("Course:");  
        course.setBounds(20, 110, 80, 30);  
        JTextField courseTF = new JTextField();  
        courseTF.setBounds(100, 110, 300, 30);

        JLabel Ylevel = new JLabel("Year Level:");  
        Ylevel.setBounds(20, 140, 80, 30);  
        JTextField YlevelTF = new JTextField();  
        YlevelTF.setBounds(100, 140, 300, 30);

        JButton add = new JButton("Add");  
        add.setBounds(20, 180, 100, 30);  
        JButton edit = new JButton("Edit");  
        edit.setBounds(120, 180, 100, 30);
        
        JButton search = new JButton("Search");  
        search.setBounds(220, 180, 100, 30);
        JButton delete = new JButton("Delete");  
        delete.setBounds(320,180,100,30); 

        frame.add(SID);  
        frame.add(SIDTF);
        frame.add(lastName); 
        frame.add(lastNameTF);
        frame.add(firstName);  
        frame.add(firstNameTF);  
        frame.add(course);
        frame.add(courseTF);
        frame.add(Ylevel);
        frame.add(YlevelTF);
        frame.add(add);  
        frame.add(edit);
        frame.add(search);
        frame.add(delete);  
        frame.setSize(450,260);
        frame.setLayout(null);  
        frame.setVisible(true);  
    }
    public static void main(String[] args) {
        Q11 n = new Q11();
    }
}