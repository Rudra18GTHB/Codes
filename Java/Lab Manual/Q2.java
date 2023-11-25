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
public class Q2 {
    public static void main(String[] args) {
        ReactangleArea rec1 = new ReactangleArea(25.3,56.2);
        ReactangleArea rec2 = new ReactangleArea(86.2,56.4);
        System.out.println("Area of reactangle 1 is: "+rec1.Area());
        System.out.println("Area of reactangle 1 is: "+rec2.Area());
    }
}