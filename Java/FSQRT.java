
import java.lang.*;
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
		    double i;
			i = sc.nextDouble();
			double s = Math.sqrt(i);
			System.out.println(Math.round(s));
		}
	}
}
