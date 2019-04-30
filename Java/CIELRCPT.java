
import java.lang.*;
import java.util.*;
import java.lang.Math;
 class example {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t, i;
		t = sc.nextInt();
		while(t--!=0)
		{
			int count = 0, max = 0;
			int n = sc.nextInt();
			for(i=0 ; i<=11 ; i++)
			{
				if((int)Math.pow(2, i) == n)
				{
					max = i;
					break;
				}
				else if((int)Math.pow(2, i) > n)
				{
					max = i - 1;
				break;
				}
				else
				{
					max = 11;
				}
			}
			int q = 100;
			while(q > 0)
			{
				 q = n - (int)Math.pow(2,  max);
				for(i =0; i<=11; i++)
				{
					if((int)Math.pow(2, i) == q)
					{
						max = i;
						break;
					}
					else if((int)Math.pow(2, i) >= q)
					{
						if(i == 0 )
						{
							max = i;
							break;
						}
						else
						{
							max = i - 1;
							break;
						}
					}
					else
					{
						max = 11;
					}
				}
				n = q;
				++count;
			}
			System.out.println(count);
			
		}
	}
}
