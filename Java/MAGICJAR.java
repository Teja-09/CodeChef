
import java.util.*;
import java.math.*;
class interactiveProblen {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t;
		t= sc.nextInt();
		while(t-- != 0)
		{
			int n,i;
			long count = 0;
			n = sc.nextInt();
			long [] a = new long[n];
			for(i = 0 ; i< n ; i++)
			{
				a[i] = sc.nextLong();
				count = count + (a[i] - 1);
			}
			System.out.println(count+1);
		}		
}
}
