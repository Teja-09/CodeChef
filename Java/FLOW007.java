
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
			while(val !=0)
			{
				 rem = val %10;
				 rev = rev*10 + rem;
				 val = val/10;
			}
			System.out.println(rev);
		}
	}
}
