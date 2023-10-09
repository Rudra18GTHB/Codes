class Person{
    String mName;
    String mBirthDate;
    String mSex;

    public Person(String name, String birthDate, String sex) {
        this.mName = name;
        this.mBirthDate = birthDate;
        this.mSex = sex;
    }

    public String getName() {
        return mName;
    }
    public String getBirthDate() {
        return mBirthDate;
    }
    public String getSex() {
        return mSex;
    }
}

class Student extends Person implements GradTeachingFellow{
    String add;
    String dept;

    public Student(String name, String birthDate, String sex,String add, String dept){
        super(name, birthDate, sex);
        this.add = add;
        this.dept = dept;
    }
    
    public String getAddress(){
        return add;
    }
    public String getDepartment(){
        return dept;
    }
    public String getSupervisor() {
        return Supervisor;
    }
}

class Teacher extends Person implements GradTeachingFellow{
    int rank;
    String dept;
    String course;

    public Teacher(String name, String birthDate, String sex,int rank, String dept, String course){
        super(name, birthDate, sex);
        this.rank = rank;
        this.dept = dept;
        this.course = course;
    }

    public int getRank() {
        return rank;
    }
    public String getDepartment() {
        return dept;
    }
    public String getCourseinfo() {
        return course;
    }
    public String getSupervisor() {
        return Supervisor;
    }
}

interface GradTeachingFellow{
    String Supervisor="Rudra";
    String getSupervisor();
}

public class Q14 {
    public static void main(String[] args) {
        Student s1 = new Student("Rudra Kashyap", "18-09-2004", "Male", "Raigarh","CSE" );
        Teacher t1 = new Teacher("Asim", "5-06-1974", "Mala", 1, "CSE", "B. Tech");
        System.out.println("\nStudent's details are..........");
        System.out.println("Student's name = "+ s1.getName());
        System.out.println("Student's birth date = "+ s1.getBirthDate());
        System.out.println("Student's gender = "+ s1.getSex());
        System.out.println("Student's address = "+ s1.getAddress());
        System.out.println("Student's department  = "+ s1.getDepartment());
        System.out.println("Student's supervisor = "+ s1.getSupervisor());
        
        System.out.println("\nFaculty details are.......");
        System.out.println("Faculty's name = "+ t1.getName());
        System.out.println("Faculty's birth date = "+ t1.getBirthDate());
        System.out.println("Faculty's gender = "+ t1.getSex());
        System.out.println("Faculty's rank = "+ t1.getRank());
        System.out.println("Faculty's department  = "+ t1.getDepartment());
        System.out.println("Faculty's course = "+ t1.getCourseinfo());
        System.out.println("Faculty's supervisor = "+ t1.getSupervisor());
    }
}
