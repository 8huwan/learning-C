import java.util.Scanner;

class Librery {
    String book_title;
    int price, quantity;

    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter The book title::");
        book_title = sc.nextLine();
        System.out.println("enter The book price::");
        price = sc.nextInt();
        System.out.println("enter The book quantity::");
        quantity = sc.nextInt();
        sc.close();
    }

    public void disp() {
        System.out.print("The book title is::");
        System.out.println(book_title);
        System.out.print("The book price is::");
        System.out.println(price);
        System.out.print("The book quantity is::");

        System.out.println(quantity);

    }

    public void total() {

        System.out.print("total cost of books ::");
        System.out.println(quantity * price);
    }
}

class Main {
    public static void main(String arg[]) {
        Librery lib1 = new Librery();

        lib1.input();
        lib1.disp();
        lib1.total();

    }
}