import java.io.FileWriter;
import java.io.IOException;

public class Write {
    public static void main(String[] args) {
        try (FileWriter writer = new FileWriter("Intro.txt",true)){
            writer.write("\nI am a student of O P Jindal University.");
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}
