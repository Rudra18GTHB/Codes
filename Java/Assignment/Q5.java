import java.util.Random;
import java.util.Scanner;

class ArrayGenerator extends Thread{
    private int[] arr;

    public ArrayGenerator(int val){
        this.arr = new int[val];
    }

    public int[] getArray(){
        return arr;
    }

    @Override
    public void run(){
        Random rand = new Random();
        for (int i = 0; i < arr.length; i++) {
            arr[i]=rand.nextInt(1001);
        }
    }
}

public class Q5 {
    public static void main(String[] args) {
        ArrayGenerator arr = new ArrayGenerator(500);
        arr.start();
        try {
            arr.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        int[] array=arr.getArray();

        Scanner scan = new Scanner(System.in);
        System.out.println("Enter any number between 0 to 1000: ");
        int number = scan.nextInt();

        int midpoint = array.length/2;
        int[] firsthalf = new int[midpoint];

        
    }
}
