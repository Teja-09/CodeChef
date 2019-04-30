
import java.util.*;
import java.math.*;
 class interactiveProblen {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long t;
		t= sc.nextLong();
		while(t-- != 0)
		{
			long n,a,b,k,temp1=0,temp2=0,temp3=0;
			n = sc.nextLong();
			a = sc.nextLong();
			b = sc.nextLong();
			k = sc.nextLong();
			if(a%b == 0 || b%a == 0)
			{
				if(a<b)
				{
					temp1 = (long) Math.floor(n/a);
					temp2 = (long) Math.floor(n/b);
					long res = temp1 - temp2;
					if(res >= k)
					{
						System.out.println("Win");
					}
					else
					{
						System.out.println("Lose");
					}	
				}
				else
				{
					temp1 = (long) Math.floor(n/a);
					temp2 = (long) Math.floor(n/b);
					long res = temp2 - temp1;
					if(res >= k)
					{
						System.out.println("Win");
					}
					else
					{
						System.out.println("Lose");
					}	
				}
			}
			else
			{
				long mul = a*b;
				temp1 = (long) Math.floor(n/a);
				temp2 = (long) Math.floor(n/b);
				temp3 = (long) Math.floor(n/mul);
				long res = temp1 + temp2 - temp3;
				if(res >= k)
				{
					System.out.println("Win");
				}
				else
				{
					System.out.println("Lose");
				}
			}
				
		}		
}
}
