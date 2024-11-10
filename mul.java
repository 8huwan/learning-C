import java.util.Scanner;

public class mul {
    public static int  multy(int a,int b){
        return a*b;

    }
    public static void main(String arg[]){
     Scanner sc = new Scanner(System.in);
     System.out.println("plese entar the no." );
     int a=sc.nextInt();
     int b=sc.nextInt();
     int result= multy(a,b);
     System.out.println("multyply of the two no. = "+result);

    }
    
}
