import java.io.FileReader;
import java.io.IOException;

public class Output {
    public static void main(String[] args) {
        try {
            FileReader reader = new FileReader("Intro.txt");
            int letter = reader.read();
            while (reader.ready()) {
                System.out.print((char) letter);
                letter = reader.read();
            }
            System.out.println();
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}