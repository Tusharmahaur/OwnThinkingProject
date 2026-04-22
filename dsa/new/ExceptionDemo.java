public class ExceptionDemo {
    public static void main(String[] args) {
        int numerator = 10;
        int denominator = 0;
        
        try {
            // Risky code that may throw an exception
            System.out.println("Beginning of division...");
            int result = numerator / denominator; 
            System.out.println("Result: " + result); // This line will NOT execute
        } 
        catch (ArithmeticException e) {
            // Code to handle the specific division-by-zero error
            System.err.println("Error: Cannot divide by zero! Message: " + e.getMessage());
        } 
        finally {
            
            // Code that always runs (useful for cleanup)
            System.out.println("Cleanup: Closing resources...");
        }

        System.out.println("Program continues after exception handling.");
    }
}
