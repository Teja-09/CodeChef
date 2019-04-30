
import java.lang.*;
import java.util.*;
import java.lang.Math;
class example {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t, n;
		t = sc.nextInt();
		while(t--!=0)
		{
			n = sc.nextInt();
			if(n < 10)
			{
				System.out.println("What an obedient servant you are!");
			}
			else
			{
				System.out.println("-1");
			}
		}
	}
}
