interface Pet{
    String getName();
    void setName(String Name);
    void play();
}

class Animal {

    int legs;

    public Animal( int legs){
        this.legs = legs;
    }
    public void walk(){
        System.out.println("Walking...");
    }
    public void eat(){
        System.out.println("Eating....");
    }
}

class Spider extends Animal{

    public Spider(){
        super(4);
    }
    public void eat(){
        System.out.println("Spider is Eating");
    }
}

class Cat extends Animal implements Pet{

    private String Name="Cat";

    public Cat(String Name){
        super(4);
        this.Name=Name;
    }
    public void eat(){
        System.out.println("Cat is Eating");
    }
    public String getName(){
        return Name;
    }
    public void setName(String Name){
        this.Name=Name;
    }
    public void play(){
        System.out.println("Cat is playing");
    }
}

class Fish extends Animal implements Pet{

    private String Name="Fish";

    public Fish(){
        super(0);
    }
    public void walk(){
        System.out.println("Fish is walking");
    }
    public void eat(){
        System.out.println("Fish is Eating");
    }
    public String getName(){
        return Name;
    }
    public void setName(String Name){
        this.Name=Name;
    }
    public void play(){
        System.out.println("Fish is playing");
    }
}

public class Q4 {
    public static void main(String[] args) {
        Animal a = new Animal(4);
        Spider s = new Spider();
        Cat c = new Cat("Luna");
        Fish f = new Fish();

        System.out.println("\nAnimal :- ");
        a.walk();
        a.eat();

        System.out.println("\nSpider :- ");
        s.walk();
        s.eat();

        System.out.println("\nCat:- ");
        c.setName("ellie");
        System.out.println("Name of the Cat is " + c.getName());
        c.play();
        c.eat();

        System.out.println("\nFish");
        f.setName("JellyFish");
        System.out.println("the fish name is " + f.getName());
        f.play();
        f.walk();
        f.eat();
    }
}
