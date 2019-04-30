
import java.util.*;
class sum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t;
		long n;
		t = sc.nextInt();
		String val;
		while(t-- != 0)
		{
			long count =0;
			n = sc.nextLong();
			val = Long.toString(n);
			long s = val.length();
			for(int i=0; i<s; i++)
			{
				if(val.charAt(i) == '4')
				{
					++count;
				}
			}
			System.out.println(count);
		}
	}

}
