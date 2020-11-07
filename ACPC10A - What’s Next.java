import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner (System.in);
	while(sc.hasNext())
	{
	    int a=sc.nextInt();
	    int b=sc.nextInt();
	    int c=sc.nextInt();
	    if(a==0 && b==0 && c==0)
	    {
	        System.exit(0);
	    }
	     else if((b-a)==(c-b))
	    {
	        System.out.println("AP "+(c+(c-b)));
	    }
	    else if((b/a)==(c/b))
	    {
	        System.out.println("GP "+(c*(c/b)));
	    }
	}
	}
}