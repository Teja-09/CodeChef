
import java.util.*;
import java.math.*;
 class interactiveProblen {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t;
		t= sc.nextInt();
		while(t-- != 0)
		{
			int n,i,flag = 0,max = 0;
			n = sc.nextInt();
			int[] catt = new int[2*n];
			int[] cdef = new int[2*n];
			for(i=0;i<n;i++)
			{
				catt[i] = catt[n+i] = sc.nextInt();
			}
			for(i=0;i<n;i++)
			{
				cdef[i] = cdef[n+i] = sc.nextInt();
			}
			for(i=0; i<n; i++)
			{
				if(cdef[i]- catt[(i+1)%(n)] >0 && cdef[i] - catt[n-1+i] > 0 && cdef[i]- (catt[(i+1)%n] + catt[n-1+i]) > 0)
				{
					//System.out.println(cdef[i]);
					if(max < cdef[i])
					{
						max = cdef[i];
					}
					flag = 1;
				}
			}

			if(flag == 0)
			{
				System.out.println("-1");
			}
			else{
			    			System.out.println(max);
			}
		}		
}
}

