import java.io.*;
import java.util.*;
class GFG {
    public static int rev(int num)
    {
        int reversed=0;
          while(num>0)
	       {
	           reversed=(reversed*10)+(num%10);
	           num/=10;
	       }
        return reversed;
    }
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
	    while(n!=0)
	    {
	       int first=sc.nextInt();
	       int second=sc.nextInt();
	       int firstrev=0,secondrev=0;
	      firstrev=rev(first);
	      secondrev=rev(second);
	      System.out.println(rev(firstrev+secondrev));
	        n--;
	    }
	}
}