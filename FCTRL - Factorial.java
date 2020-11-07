import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
	    while(n!=0)
	    {
	        long divisor=5,sum=0;
	        long number=sc.nextLong();
	        while(number/divisor>0)
	        {
	            sum+=number/divisor;
	            divisor*=5;
	        }
	        System.out.println(sum);
	        n--;
	    }
	}
}