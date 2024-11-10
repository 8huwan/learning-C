import java.util.*;
public class TwoDArray {
    public static void main(String arg[]){
      Scanner sc = new Scanner(System.in);
      System.out.println("entare no. of row");
        int row=sc.nextInt();
        System.out.println("entare no. of coll");
        int coll=sc.nextInt();
        System.out.println("entare no. of array one by one");
        int[][]number=new int[row][coll];
        for(int i=0;i<row;i++){
            for(int j=0;j<coll;j++){
                number[i][j]=sc.nextInt();
            }
        }
        System.out.println(" stored value in arra isy :");
        for(int i=0;i<row;i++){
            for(int j=0;j<coll;j++){
                System.out.print(number[i][j]+" ");
            }
        }

    }
    
}
