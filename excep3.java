
class demo{

	public static void fun(int x){
		System.out.println(5/x);
	}
	public static void main(String args[]){
		
		int a=0;
		try{
			fun(a);
		}
		catch(ArrayIndexOutOfBoundsException e){
			System.out.println("Array exception caught");
		}
		finally{
		//finally will run even when there is an uncaught exceptio

			System.out.println("This blocks run when the try catch finishes");
			
		}

		System.out.println("This part doesn't run when there is an uncaught exception ");
		
	}
}
