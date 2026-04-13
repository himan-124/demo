// Define an interface for login functionality
interface Authenticator {
    void login();
}

// Implement the interface in a class
class SimpleLogin implements Authenticator {
    @Override
    public void login() {
        System.out.println("Hello");
    }
}

// Main class to execute the program
public class LoginApp {
    public static void main(String[] args) {
        Authenticator user = new SimpleLogin();
        user.login();
    }
}