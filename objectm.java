class Phone {
    private String brand;
    
    // Error: 'string' should be 'String'
    public Phone(string brand) { 
        this.brand = brand;
    }
    
    public void showTime() {
        System.out.println("Showing Time..");
    }

    public void name() {
        System.out.println("My name is " + brand);
    }

    public void call() {
        System.out.println("Making a call...");
    }

    public void text() {
        System.out.println("Sending a text message...");
    }
}

class smartPhone extends Phone {
    private String model;
    
    // Constructor
    public smartPhone(String brand, String model) {
        super(brand);
        this.model = model;
    }

    @Override
    public void name() {
        System.out.println("This is a smartphone, model: " + model);
    }

    public void music() {
        System.out.println("Playing music...");
    }

    public void camera() {
        System.out.println("Opening camera...");
    }

    public void browseInternet() {
        System.out.println("Browsing the internet...");
    }
}

public class objectm {
    
    public static void main(String[] args) {
        // Creating a Phone object, but referring to it as a smartPhone (upcasting)
        Phone obj = new smartPhone("Samsung", "Galaxy S21");
        
        obj.name(); 
        obj.showTime(); 
        obj.call(); 
        // Error: 'obj.music()' will cause a compile-time error because 'music()' is not defined in Phone
        obj.music(); // This line will cause a compile-time error since 'music()' is not a method in the Phone class
        
        System.out.println("End of program");
    }
}
