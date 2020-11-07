import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner (System.in);
	while(sc.hasNext())
	{
	   int n=sc.nextInt();
	   if(n==-1)
	   {
	       System.exit(0);
	   }
	   long arr[]=new long[10000];
	   long sum=0;
	   for(int i=0;i<n;i++)
	   {
	        arr[i]=sc.nextInt();
	        sum+=arr[i];
	       
	   }
	   if(sum%n!=0)
	   {
	       System.out.println("-1");
	       continue;
	   }
	   long equal=sum/n;
	   int ans=0;
	   for(int i=0;i<n;i++)
	   {
	   	if(arr[i]>equal)
	   	{
	   		ans+=arr[i]-equal;
	   	}
	   }
	   System.out.println(ans);
	}
	}
}