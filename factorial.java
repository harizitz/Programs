import java.io.*;
import java.util.*;
class GFG {
    public static int fact(int num)
    {
        if (num==0)
            return 1;
        else 
            return num*fact(num-1);
    }
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
	    while(n!=0)
	    {
	        int number=sc.nextInt();
	        System.out.println(fact(number));
	        n--;
	    }
	}
}