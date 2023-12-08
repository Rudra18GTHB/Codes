class Employee{

    private int Empid;
    private String Dept;
    public Employee(String Dept, int Empid){
        this.Empid = Empid;
        this.Dept = Dept;
    }

    public int getEmpid() {
        return Empid;
    }
    public String getDept() {
        return Dept;
    }
}

public class Q2 {
    public static void main(String[] args) {
        Employee Rudra = new Employee("CSE",101);
        System.out.println(Rudra.getDept());
        System.out.println(Rudra.getEmpid());
    }
}
