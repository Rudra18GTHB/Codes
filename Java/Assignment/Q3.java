//Question14 JAVA ASSIGNMENT 1

interface Person {
    String getName();
    String getBirthdate();
    String getSex();
}

class PersonClass implements Person {
    public String name;
    public String birthdate;
    public String sex;

    public PersonClass(String name, String birthdate, String sex) {
        this.name = name;
        this.birthdate = birthdate;
        this.sex = sex;
    }

    @Override
    public String getName() {
        return name;
    }

    @Override
    public String getBirthdate() {
        return birthdate;
    }

    @Override 
    public String getSex() {
        return sex;
    }
}

interface Student {
    String getDepartment();
    String getAddress();
}

interface Teacher {
    String getRank();
    String getDepartment();
    String getCourseInfo();
}

class StudentClass extends PersonClass implements Student {

    private String department;
    private String address;

    public StudentClass(String name, String birthdate, String sex, String department, String address) {
        super(name, birthdate, sex);
        this.department = department;
        this.address = address;
    }

    @Override
    public String getDepartment() {
        return this.department;
    }

    @Override
    public String getAddress() {
        return this.address;
    }
}


class TeacherClass extends PersonClass implements Teacher {
	
    private String rank;
    private String department;
    private String courseInfo;

    public TeacherClass(String name, String birthdate, String sex, String rank, String department, String courseInfo) {
        super(name, birthdate, sex);
        this.rank = rank;
        this.department = department;
        this.courseInfo = courseInfo;
    }

    @Override
    public String getRank() {
        return this.rank;
    }

    @Override
    public String getDepartment() {
        return this.department;
    }

    @Override
    public String getCourseInfo() {
        return this.courseInfo;
    }
}

class GraduateTeachingFellow extends PersonClass implements Student, Teacher {

    private String department;
    private String address = "N.A";
    private String rank = "N.A";
    private String courseInfo = "N.A";

    public GraduateTeachingFellow(StudentClass st) {
        super(st.name, st.birthdate, st.sex);
        this.department = st.getDepartment();
        this.address = st.getAddress();
    }

    public GraduateTeachingFellow(TeacherClass tr) {
        super(tr.name, tr.birthdate, tr.sex);
        this.department = tr.getDepartment();
        this.rank = tr.getRank();
        this.courseInfo = tr.getCourseInfo();
    }

    @Override
    public String getDepartment() {
        return this.department;
    }

    @Override
    public String getAddress() {
        return this.address;
    }

    @Override
    public String getRank() {
        return this.rank;
    }

    @Override
    public String getCourseInfo() {
        return this.courseInfo;
    }

    public String getSupervisor() {
        return "HOD";
    }
}

public class Q3 {
	public static void main(String[] args) {
		
	StudentClass std = new StudentClass("Pintu Jain","01-09-2003","Male","CSE","Raigarh");
	TeacherClass tec = new TeacherClass("Saroj Sir", "DD-MM-YYYY","Male","Sr. Associate Professor","CSE","OOPs using JAVA");
		
	GraduateTeachingFellow gtf1 = new GraduateTeachingFellow(std);
	GraduateTeachingFellow gtf2 = new GraduateTeachingFellow(tec);
		
	System.out.println("Details of student are :-");
        System.out.println("Name = " + std.getName());
        System.out.println("Birth Date = " + std.getBirthdate());
        System.out.println("Sex = " + std.getSex());
        System.out.println("Address = " + std.getAddress());
        System.out.println("Department = " + std.getDepartment());

        System.out.println("\nDetails of teacher are :-");
        System.out.println("Name = " + tec.getName());
        System.out.println("Birth Date = " + tec.getBirthdate());
        System.out.println("Sex = " + tec.getSex());
        System.out.println("Rank = " + tec.getRank());
        System.out.println("Department = " + tec.getDepartment());
        System.out.println("Course = " + tec.getCourseInfo());

        System.out.println("\n\nGraduate Teaching Fellow 1 Details are :- ");
        System.out.println("Name = " + gtf1.getName());
        System.out.println("Birth Date = " + gtf1.getBirthdate());
        System.out.println("Sex = " + gtf1.getSex());
        System.out.println("Rank = " + gtf1.getRank());
        System.out.println("Address = " + gtf1.getAddress());
        System.out.println("Department = " + gtf1.getDepartment());
        System.out.println("Course = " + gtf1.getCourseInfo());

        System.out.println("\n\nGraduate Teaching Fellow 2 Details are :- ");
        System.out.println("Name = " + gtf2.getName());
        System.out.println("Birth Date = " + gtf2.getBirthdate());
        System.out.println("Sex = " + gtf2.getSex());
        System.out.println("Address = " + gtf2.getAddress());
        System.out.println("Rank = " + gtf2.getRank());
        System.out.println("Department = " + gtf2.getDepartment());
        System.out.println("Course = " + gtf2.getCourseInfo());
	}
}