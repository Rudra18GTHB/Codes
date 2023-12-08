class Animal{
    public void MakeSound(){
        System.out.println("Some Sound");
    }
}

class Dog extends Animal{
    @Override
    public void MakeSound(){
        System.out.println("Barking..");
    }
}

public class Q6 {
    public static void main(String[] args) {
        Animal myanimal =new Animal();
        Animal mydog = new Dog();

        myanimal.MakeSound();
        mydog.MakeSound();
    }
}
