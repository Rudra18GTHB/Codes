import java.util.Random;

class MaxValue extends Thread{ 
    private int[] array;
    private int max;
    private int start;
    private int end;
    
    public MaxValue(int[] array, int start, int end){
        this.array = array;;
        this.max = 0;
        this.start = start;
        this.end = end;
    }

    @Override
    public void run(){
        for(int i = start; i<end; i++){
            if(array[i] > max){
                max=array[i];
            }
        }
    }

    public int getMax(){
        return max;
    }
}


public class Q6 {
    public static void main(String[] args) {
        int[] array = new int[1000];
        Random rand = new Random();
        for (int i = 0; i < 1000; i++) {
            array[i]=rand.nextInt(500);
        }

        for(int j=0; j<array.length; j++){
            System.out.println(array[j]+" ");
        }

        MaxValue T1 = new MaxValue(array, 0, 250);
        T1.start();
        MaxValue T2 = new MaxValue(array, 250, 500);
        T2.start();
        MaxValue T3 = new MaxValue(array, 500, 750);
        T3.start();
        MaxValue T4 = new MaxValue(array, 750, 1000);
        T4.start();

        try {
            T1.join();
            T2.join();
            T3.join();
            T4.join();
        } catch (InterruptedException e) {
            e.getStackTrace();
        }

        int[] maxvalue= new int[4];
        maxvalue[0]=T1.getMax();
        maxvalue[1]=T2.getMax();
        maxvalue[2]=T3.getMax();
        maxvalue[3]=T4.getMax();

        int FinalMax = 0;

        for(int k=0; k<maxvalue.length; k++) {
            if(maxvalue[k]>FinalMax){
                FinalMax=maxvalue[k];
            }
        }
        System.out.println("The maximum value is: "+FinalMax);
    }
}
