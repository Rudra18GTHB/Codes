public class Q10 {
        public static void main(String[] args) {
            try {
                int[] myArray = {1, 2, 3, 4, 5};
                int value = myArray[10];
                System.out.println("Value at index 10: " + value);
            } 
            catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("Array index out of bounds!");
            }
        }
    }