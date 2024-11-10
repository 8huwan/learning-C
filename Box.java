import java.util.Scanner;
import java.lang.System;

class Box {
    public int hight;
    int lenth;
    int wedith;

    public Box() {
        Scanner sc = new Scanner(System.in);
        hight = sc.nextInt();
        lenth = sc.nextInt();
        wedith = sc.nextInt();
        sc.close();
    }

    public Box(int h, int l, int w) {

        hight = h;
        lenth = l;
        wedith = w;

    }

    public void disp() {
        System.out.println(hight);
        System.out.println(lenth);
        System.out.println(wedith);

    }

    public static void main(String arg[]) {
        Box obj1 = new Box();
        obj1.disp();
        Box obj2 = new Box(5, 6, 8);
        obj2.disp();

    }
}
