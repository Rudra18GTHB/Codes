import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Q9 {
    public static void main(String[] args) {
        try {
            FileWriter mywrite = new FileWriter("Student_info.txt");
            mywrite.write("Hello, My name is Rudra Kashyap. I am a student of OP Jindal University");
            mywrite.close();
        } catch (IOException e) {
            System.out.println("Error Occured");
            e.getStackTrace();
        }

        try {
            FileReader myfile = new FileReader("Student_info.txt");
            FileWriter mywrite2 = new FileWriter("Copy_Student_info.txt");
            int letter;
            while((letter = myfile.read()) != -1){
                mywrite2.write(letter);
            }
            myfile.close();
            mywrite2.close();
        } catch (IOException e) {
            System.out.println("Error Occured");
            e.getStackTrace();
        }
        

    }
}