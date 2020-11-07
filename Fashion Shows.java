import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner (System.in);
	int n=sc.nextInt();
    	while(n!=0)
    	{
    	   int size=sc.nextInt();
    	   int male[]=new int[size];
    	   int female[]=new int[size];
    	   for(int i=0;i<size;i++)
    	   {
    	       male[i]=sc.nextInt();
    	   }
    	   for(int i=0;i<size;i++)
    	   {
    	       female[i]=sc.nextInt();
    	   }
    	   Arrays.sort(male);
    	   Arrays.sort(female);
    	   int total=0;
    	   for(int i=0;i<size;i++)
    	   {
    	       total+=male[i]*female[i];
    	   }
    	   System.out.println(total);
    	   n--;
    	}
	}
}