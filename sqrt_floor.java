import java.util.Scanner;

class SquartRoot
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			long a = sc.nextInt();
			SquareRoot obj = new SquareRoot();
			System.out.println(obj.floorSqrt(a));
		t--;
		}
	}
}
class SquareRoot
{
     int floorSqrt(double x)
	 {
		int k= (int)Math.sqrt(x);
		return k;
	 }
}
