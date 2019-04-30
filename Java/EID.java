
import java.util.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,min,n,i,sum = 0;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t--!=0)
		{
	        	  
		   n = sc.nextInt();
		   int[] a = new int[n];
	        for(i=0;i<n;i++)
	    	{
		    a[i] = sc.nextInt();
		    sum+=a[i];
		    }
	    	Arrays.sort(a);
			min = (a[1]-a[0]);
		    for(i=1;i<=n-2;i++)
	        {
		    if(min > (a[i+1]-a[i]))
		    {
		        min = (a[i+1]-a[i]);
		    }
	        }
	        System.out.println(min);
	     }
	     
	}
}
