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

class SearchElement extends Thread{
    private int[] arr;
    private int num;
    private boolean found;

    SearchElement(int[] arr, int num){
        this.arr =arr;
        this.num=num;
        this.found=false;
    }

    @Override
    public void run(){
        for (int i = 0; i < arr.length; i++) {
            if(num==arr[i]){
                found= true;
                break;
            }
        }
    }
    public boolean getFound(){
        return found;
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

        int[] arr1 = new int[midpoint];
        int[] arr2 = new int[array.length-midpoint];

        System.arraycopy(array, 0, arr1, 0, midpoint);
        System.arraycopy(array, midpoint, arr2, 0 , array.length-midpoint);

        SearchElement F1 = new SearchElement(arr1, number);
        SearchElement F2 = new SearchElement(arr2, number);

        F1.start();
        F2.start();

        try {
            F1.join();
            F2.join();
        } catch (InterruptedException e) {
            e.getStackTrace();
        }


        if(F1.getFound() || F2.getFound()){
            System.out.println("Success");
        }
        else{
            System.out.println("Beter Luck Next Time");
        }
    }
}
