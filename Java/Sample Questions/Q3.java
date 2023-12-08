import java.util.Scanner;
class ReactangleArea{
    double Length;
    double Breath;
    ReactangleArea(double Length, double Breath){
        this.Length = Length;
        this.Breath = Breath;
    }
    public double Area(){
        double Area=Length*Breath;
        return Area;
    }
}
public class Q3 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        System.out.println("Enter the Length of the reactnagle in cm: ");
        double Length = read.nextDouble();
        System.out.println("Enter the Breath of the reactnagle in cm: ");
        double Breath = read.nextDouble();
        ReactangleArea rec1 = new ReactangleArea(Length,Breath);
        System.out.println("Area of reactangle is: "+rec1.Area());
        read.close();
    }
}