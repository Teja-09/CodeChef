
import java.util.*;
import java.lang.Math;
class example {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		//long i, n, count = 0;
		while(t--!=0)
		{
			int n;
			long ans =1;
			n = sc.nextInt();
			for(int i=1;i<=n;i++)
			{
				ans = ans*i;
			}
			System.out.println(ans);
		}
	}
}
