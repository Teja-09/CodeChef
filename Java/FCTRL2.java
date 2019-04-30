import java.util.*;
import java.math.BigInteger;
class interactiveProblen {
	static BigInteger fact(int n)
	{
		int i=0;
		BigInteger f = new BigInteger("1");
		for(i=2; i<=n; i++)
		{
			f = f.multiply(BigInteger.valueOf(i));
		}
		return f;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t,x = 1,i;
		t = sc.nextInt();
		while(t--!=0)
		{
			x = sc.nextInt();
			System.out.println(fact(x));
		}
	}
}
