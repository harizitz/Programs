import java.util.*;
import java.util.Stack;
import java.util.LinkedList;

class GfG
{
	public static void main(String args[])
	{
	   
		Scanner sc = new Scanner(System.in);
		
		
		int t = sc.nextInt();
		while(t>0)
		{
		   
			StackQueue g = new StackQueue();
			
			
			int q = sc.nextInt();
			while(q>0)
			{
				int QueryTyoe = sc.nextInt();
				
			
				if(QueryTyoe == 1)
				{
					int a = sc.nextInt();
					g.Push(a);
				}else
				if(QueryTyoe == 2)
				System.out.print(g.Pop()+" ");
			q--;
				
			}
			System.out.println();
		t--;
		}
	}
}

class StackQueue
{
    Stack<Integer> s1 = new Stack<Integer>();
    Stack<Integer> s2 = new Stack<Integer>();

   
    void Push(int x)
    {
	   s1.push(x);
    }
	
    int Pop()
    {
        if(s1.isEmpty())
        {
            return -1;
        }
	   while(!s1.isEmpty())
	   {
	       s2.push(s1.pop());
	   }
	   int res= s2.peek();
	   s2.pop();
	   while(!s2.isEmpty())
	   {
	       s1.push(s2.pop());
	   }
	   return res;
    }
}
