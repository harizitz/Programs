import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	while(n!=0)
	{
	    int x=sc.nextInt();
	    int y=sc.nextInt();
	    if(x%2==0 && y%2==0)
	    {
	        System.out.println(x+y);
	    }
	    else if(x%2!=0 && y%2!=0)
	    {
	        System.out.println(x+y-1);
	    }
	    else{
	        System.out.println("No Number");
	    }
	    n--;
	}
	}
}