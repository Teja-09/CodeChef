
import java.util.*;
class Ques1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t,i,n;
		double sum=0;
		t = sc.nextInt();
		while(t--!=0)
		{
			n = sc.nextInt();
			double[] a = new double[n];
			for(i=0;i<n;i++)
			{
				a[i] = sc.nextInt();
			}
			Arrays.sort(a);
			for(i=n-1;i>=1;i--)
			{
				a[i-1] = (a[i]+a[i-1])/2.0;
				sum = a[i-1];
			}
			System.out.printf("%f\n",sum);
		}
		
	}
}
