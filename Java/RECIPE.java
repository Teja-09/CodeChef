
import java.lang.*;
import java.util.*;
import java.lang.Math;
class example {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		while(t--!=0)
		{
			int  n, i, count = 0, div=1;
			n = sc.nextInt();
			int[] a = new int[n];
			int[] b = new int[n];
			for(i=0; i<n; i++)
			{
				a[i] = sc.nextInt();
				b[i] = a[i];
			}
			Arrays.sort(a);
			int minval = a[0];
			for(i=2; i<=minval; i++)
			{
				count = 0;
				for(int j=0; j<n; j++)
				{
					if(a[j] %i == 0)
					{
						++count;
					}
				}
				if(count == n)
				{
					div = i;
				}
				else
				{
					count = 0;
				}
			}
			for(i=0;i<n;i++)
			{
				System.out.print(b[i]/div + " ");
			}
		}
	}
}
