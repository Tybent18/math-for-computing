import java.util.Scanner;

class Converter {

    // Convert integer to binary string
    public static String toBinary(int num) {
        if (num == 0) return "0";
        if (num < 0) return "-" + toBinary(-num);

        StringBuilder binary = new StringBuilder();
        while (num > 0) {
            binary.insert(0, num % 2);
            num /= 2;
        }
        return binary.toString();
    }

    // Optional: use Java built-in method
    public static String toBinaryBuiltIn(int num) {
        return Integer.toBinaryString(num);
    }
}

public class Program {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer: ");

        if (!sc.hasNextInt()) {
            System.out.println("Invalid input!");
            return;
        }

        int x = sc.nextInt();
        System.out.println("Binary: " + Converter.toBinary(x));
    }
}