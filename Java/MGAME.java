
import java.util.*;
import java.math.BigInteger;
 class interactiveProblen {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		while(t--!=0)
		{
			int n,p,i,j,k;
			long max = 0,val,count=0;
			n = sc.nextInt();
			p = sc.nextInt();
			for(i=1;i<=p;i++)
			{
				for(j=1;j<=p;j++)
				{
					for(k=1;k<=p;k++)
					{
						val = (((n % i) % j) % k)% n;
						if(max < val)
						{
							max = val;
						}
					}
				}
			}
			//System.out.println("val = "+max);
			for(i=1;i<=p;i++)
			{
				for(j=1;j<=p;j++)
				{
					for(k=1;k<=p;k++)
					{
						val = (((n % i) % j) % k)% n;
						if(val == max)
						{
							++count;
						}
					}
				}
			}
			//System.out.println("val = "+max);
			//System.out.println("count = "+count);
			System.out.println(count);

			
			
		}
	}
}
