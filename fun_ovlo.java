
class Add {
    int a, b, c, res;

    public void sum(int x, int y) {
        a = x;
        b = y;
        res = a + b;
        System.out.println(res);
    }

    public void sum(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
        res = a + b + c;
        System.out.println(res);
    }
}

class Main {
    public static void main(String arg[]) {
        Add obj = new Add();
        obj.sum(25, 46);
        obj.sum(45, 65, 98);

    }
}