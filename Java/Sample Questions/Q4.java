import java.util.Scanner;
class SS{
    double real,imag;
    SS(double real, double imag){
        this.real = real;
        this.imag = imag;
    }
    public void  Add(SS other){
        double real=this.real+other.real;
        double imag=this.imag+other.imag;
        display(real, imag);
    }
    public void Sub(SS other){
        double real=this.real-other.real;
        double imag=this.imag-other.imag;
        display(real, imag);
    }
    public void Mul(SS other){
        double real=this.real*other.real;
        double imag=this.imag*other.imag;
        display(real, imag);
    }
    public void display(double real, double imag){
        System.out.println("Result: " + real + " + " + imag + "i");

    }
}

public class Q4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter two complex numbers: ");
        System.out.println("Enter real part of 1st complex numbers: ");
        double real_1 = input.nextDouble();
        System.out.println("Enter imag part of 1st complex numbers: ");
        double imag_1 = input.nextDouble();
        System.out.println("Enter real part of 2nd complex numbers: ");
        double real_2 = input.nextDouble();
        System.out.println("Enter imag part of 2nd complex numbers: ");
        double imag_2 = input.nextDouble();
        SS c1 = new SS(real_1, imag_1);
        SS c2 = new SS(real_2, imag_2);
        System.out.println("Additon: ");
        c1.Add(c2);
        System.out.println("Subtraction: ");
        c1.Sub(c2);
        System.out.println("Multiplication: ");
        c1.Mul(c2);
        input.close();
    }
}
