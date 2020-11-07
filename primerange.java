
import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
	    while(n!=0)
	    {
	        long start=sc.nextInt();
	        long end= sc.nextInt();
	        for(long i=start;i<=end;i++)
	        {
	            int f=0;
	            if(i==1)
	            {
	                f=1;
	            }
	            for(long j=2;j<=Math.sqrt(i);j++)
	            {
	                if(i%j==0)
	                {
	                    f=1;
	                    break;
	                }
	            }
	            if(f==0)
	                System.out.println(i);
	        }
	        n--;
	        System.out.println();
	    }
	}
}