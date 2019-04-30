
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
			long i, n, count = 0, x;
			n = sc.nextLong();
			while(n>=5)
			{
				count = count + (n/5);
				n = n/5;
			}
			System.out.println(count);
		}
	}
}
