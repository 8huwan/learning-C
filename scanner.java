import java.util.Scanner;

class scanner {
    public static void main(String args[]) {
        Scanner Sc = new Scanner(System.in);
        String s = Sc.nextLine();
        int y = Sc.nextInt();
        char c = Sc.next().charAt(0);
        System.out.println(s + y + c);
        Sc.close();
    }
}