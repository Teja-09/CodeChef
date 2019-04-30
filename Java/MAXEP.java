
import java.util.*;
class Dec3 {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n, c, r,i=1;
		n = sc.nextInt();
		c = sc.nextInt();
		int low = 1, high = n;
		int ans = 0;		
		
		while((high - low) > 50)
		{
			int m = (high - low)/5 + low;
			
			System.out.println("1 "+ m);
			r = sc.nextInt();
			if(r == 1)
			{
				System.out.println("2");
				high = m;
			}
			else if(r == 0)
			{
				low = m+1;
			}
			else
			{
				return;
			}
		}
		
		for(i = low; i <= high; i++)
		{
			System.out.println("1 "+i);
			r = sc.nextInt();
			if(r == 1)
			{
				ans =i;
				break;
			}
		}
		System.out.println("3 "+ans);
	}

}
