
abstract class Vehicle {
    protected String brand;
    protected int year;

    public Vehicle(String brand, int year) {
        this.brand = brand;
        this.year = year;
    }


    public abstract void startEngine();


    public void displayInfo() {
        System.out.println("Brand: " + brand + ", Year: " + year);
    }
}


interface Electric {
    void chargeBattery();
}

// Concrete class for Car
class Car extends Vehicle implements Electric {
    private int doors;

    public Car(String brand, int year, int doors) {
        // Error: incorrect reference to superclass constructor (year is missing)
        super(brand); // Should pass both brand and year
        this.doors = doors;
    }

    //this mrthod should be used compulsory
//    public void startEngine() {
//
//    }

    @Override
    public void chargeBattery() {

        System.out.println("Charging the car's battery...");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Doors: " + doors);
    }
}

public class abstractEx {
    public static void main(String[] args) {
        Vehicle myCar = new Car("Tesla", 2022, 4);

        myCar.displayInfo();
        myCar.startEngine();
        ((Electric) myCar).chargeBattery();

        System.out.println();
    }
}
