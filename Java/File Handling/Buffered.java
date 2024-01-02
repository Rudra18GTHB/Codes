import java.io.BufferedReader;
import java.io.IOException;
import java.io.FileReader;

public class Buffered {
    public static void main(String[] args) {
        try(BufferedReader reader = new BufferedReader(new FileReader("Intro.txt"))) {
            while(reader.ready()){
                System.out.println(reader.readLine());
            }
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}