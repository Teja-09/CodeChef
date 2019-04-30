import java.util.*;
class BITOBYT {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			Scanner sc = new Scanner(System.in);
			int t,n;
			t = sc.nextInt();
			while(t--!=0)
			{
				n = sc.nextInt();
			if(n>=0 && n<=2)
			{
				System.out.println("1 0 0");
			}else if(n>=3 && n<=10)
			{
				System.out.println("0 1 0");
			}
			else if(n>=11 && n<=26)
			{
				System.out.println("0 0 1");
			}
			else
			{
				for(int i=1;i<=n;i++)
				{
					int p1 = 26*i;
					int p2 = 26*(i+1);
					if(n>=p1 && n<=p2)
					{
						if(n>p1 && n<=p1+2)
						{
							long p3  = (long)Math.pow(2, i);
							System.out.println(p3+" 0 0");
						}
						else if(n>(p1+2) && n<=(p1+8+2))
						{
							long p3  = (long)Math.pow(2, i);
							System.out.println("0 "+p3+" 0");
						}
						else if(n>(p1+8) && n<=(p1+16+2+8))
						{
							long p3  = (long)Math.pow(2, i);
							System.out.println("0 0 "+p3);
						}
					}
				}
			}
			
			}
			 
	}

}
