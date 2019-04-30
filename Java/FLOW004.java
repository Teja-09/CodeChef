
import java.util.*;
import java.lang.Math;
 class example {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t, val;
		t = sc.nextInt();
		while(t-- != 0)
		{
			int  rev = 0, rem =0;
			val = sc.nextInt();
			int last = val %10;
			String  value = Integer.toString(val);
			int  size = value.length();
			int divide = (int) Math.pow(10, size-1);
			int first = val / divide;
			System.out.println(first+last);
			
		}
	}
}
