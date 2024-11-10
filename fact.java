import java.util.Scanner;

public class fact {
    public static void findfactorial(int n){
        int factorial =1;
        for(int i=n;i>=1;i--){
        factorial=factorial*i;}
        System.out.println("factorial of thish no. is : "+ factorial);
    

    }
    public static void main(String arg[]){
        System.out.print("entar the no. :");
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        findfactorial(n);



    }
    
}
