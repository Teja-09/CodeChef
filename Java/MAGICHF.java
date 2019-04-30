import java.util.*;
class SepChal1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int n,x,s,i,a,b;
		//int n1,n2,n3,n4;
		while(t--!=0)
		{
			n = sc.nextInt();
			x = sc.nextInt();
			s = sc.nextInt();
			for(i=0;i<s;i++)
			{
				a = sc.nextInt();
				b = sc.nextInt();
				if(a==x)
				{
					x =b;
				}
				else if(b == x)
				{
					x = a;
				}
			}
			System.out.println(x);
		}
		
	}
}


