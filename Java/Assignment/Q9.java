import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Q9 {
    public static void main(String[] args) {
        try {
            FileWriter mywrite = new FileWriter("Student_info.txt");
            Scanner scan = new Scanner(System.in);
            String Sentence = scan.nextLine();
            mywrite.write(Sentence);
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