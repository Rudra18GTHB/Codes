import java.util.Random;

class MinValue extends Thread{ 
    private int[] array;
    private int min;
    private int start;
    private int end;
    
    public MinValue(int[] array, int start, int end){
        this.array = array;;
        this.min = 500;
        this.start = start;
        this.end = end;
    }

    @Override
    public void run(){
        for(int i = start; i<end; i++){
            if(array[i] < min){
                min=array[i];
            }
        }
    }

    public int getMin(){
        return min;
    }
}

public class Q7 {
    public static void main(String[] args) {
        int[] array = new int[1000];
        Random rand = new Random();
        for (int i = 0; i < 1000; i++) {
            array[i]=rand.nextInt(500);
        }

        MinValue T1 = new MinValue(array, 0, 250);
        T1.start();
        MinValue T2 = new MinValue(array, 250, 500);
        T2.start();
        MinValue T3 = new MinValue(array, 500, 750);
        T3.start();
        MinValue T4 = new MinValue(array, 750, 1000);
        T4.start();

        try {
            T1.join();
            T2.join();
            T3.join();
            T4.join();
        } catch (InterruptedException e) {
            e.getStackTrace();
        }

        int[] minvalue= new int[4];
        minvalue[0]=T1.getMin();
        minvalue[1]=T2.getMin();
        minvalue[2]=T3.getMin();
        minvalue[3]=T4.getMin();

        int FinalMin = 0;

        for(int k=0; k<minvalue.length; k++) {
            if(minvalue[k]<FinalMin){
                FinalMin=minvalue[k];
            }
        }
        System.out.println("The maximum value is: "+FinalMin);
    }
}
