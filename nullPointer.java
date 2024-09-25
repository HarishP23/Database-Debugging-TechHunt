class User {
    private String name;

    public User(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
}

class UserManager {
    private User user;
        //user should be user
    public void setUser(user user) {
        this.user = user;
    }

    public void printUserName() {
        // This line may throw NullPointerException if user is not set
        // Error: If user is null, calling user.getName() will cause a NullPointerException
        System.out.println("User's name is: " + user.getName());
    }
}

public class nullPointer {
    public static void main(String[] args) {
        UserManager userManager = new UserManager();
        
        // Uncomment the line below to set a user and avoid the exception
        // userManager.setUser(new User("Alice"));
        
        // Trying to print user name without setting the user
        // Error: Calling printUserName() without setting a user will lead to NullPointerException
        userManager.printUserName();

        System.out.println("End of program");
    }
}
