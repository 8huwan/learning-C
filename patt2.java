public class patt2 {
    public static void main(String arg[]){
        int n=5;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
        
        //int spase= 2*(n-i);
        //for(int j=1;j<=spase;j++){
          //  System.out.print(" ");

        //}
        for(int j=1;j<=i;j++){
            System.out.print("*");
        }
    
        System.out.println();
    }
    
    }  
}