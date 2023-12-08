class  Animal {
    private String sound;
    private String Type;

    public Animal(String sound, String Type) {
        this.Type = Type;
        this.sound = sound;
    }
    public String getSound() {
        return sound;
    }
    public String getType() {
        return Type;
    }

}
public class Q1 {
    public static void main(String[] args) {
        Animal Rohan = new Animal("Roar","Tiger");
        System.out.println(Rohan.getSound());
        System.out.println(Rohan.getType());
    }
}
