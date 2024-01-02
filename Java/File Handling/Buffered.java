import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.FileReader;
import java.io.FileWriter;
public class Buffered {
    public static void main(String[] args) {
        try(BufferedReader reader = new BufferedReader(new FileReader("Intro.txt"))) {
            while(reader.ready()){
                System.out.println(reader.readLine());
            }
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("Intro.txt",true))){
            writer.write("My name is Rudra Kashyap");
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}