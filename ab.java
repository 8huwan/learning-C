import java.util.*;

class ab {
    public static void main(String ar[]) {

        int a;
        char c;
        String s1;

        Scanner obj = new Scanner(System.in);

        a = obj.nextInt();
        System.out.println(a);

        c = obj.next().charAt(0);
        System.out.println(c);

        s1 = obj.nextLine();
        s1 = obj.nextLine();// to remove new line char
        System.out.println(s1);

        // a=scobj.nextInt();
        // System.out.println(a);

    }
}
