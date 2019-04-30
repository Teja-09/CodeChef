
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
			long[] array = new long[3];
			long a, b, c, max;
			a = sc.nextLong();
			b = sc.nextLong();
			c = sc.nextLong();	
			array[0] = a;
			array[1] = b;
			array[2] = c;
			Arrays.sort(array);
			System.out.println(array[1]);
		}
	}
}
