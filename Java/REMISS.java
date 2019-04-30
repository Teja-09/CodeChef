
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
		   int a,b;
		   a = sc.nextInt();
		   b = sc.nextInt();
		   int sum = a+b;
		   System.out.println(Math.max(a, b) + " " + sum);
		}
	}
}
