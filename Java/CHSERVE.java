import java.util.*;
class ChefAndServes {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t,p1,p2,k,count=0,s;
		t = sc.nextInt();
		while(t--!=0)
		{
			count = 0;
			p1 = sc.nextInt();
			p2 = sc.nextInt();
			k = sc.nextInt();
			s = p1+p2;
			int val = s/k;
			if(val%2==0)
			{
				System.out.println("CHEF");
			}
			else
			{
				System.out.println("COOK");
			}
		}
	}

}
