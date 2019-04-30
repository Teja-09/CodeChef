
import java.util.*;
class example {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		long[] a = new long[t];
		for(int i =0 ;i < t ; i++)
		{
			a[i] = sc.nextInt();
		}
		Arrays.sort(a);
		for(int i= 0;i<t;i++)
		{
			System.out.println(a[i]);
		}
		

	}

}
