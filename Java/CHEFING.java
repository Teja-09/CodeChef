
import java.util.*;
import java.math.*;
 class interactiveProblen {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t;
		t= sc.nextInt();
		while(t-- != 0)
		{
			int n,i,j,k,count =0 ;
			n = sc.nextInt();
			String[] s = new String[n];
			int[] flag = new int[26];
			int[] count1 = new int[26];
			s[0] = sc.nextLine();
			for(i=0;i<n;i++)
			{
				s[i] = sc.nextLine();
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<s[i].length();j++)
				{
					int a = (int)s[i].charAt(j) - (int)'a';
					//System.out.println("a value is "+a );
					if(flag[a] == 0)
					{
						count1[a] = count1[a] + 1;
						flag[a] = 1;
					}
				}
				for(k=0;k<26;k++)
				{
					flag[k] = 0;
				}
			}
			for(i=0;i<26;i++)
			{
				if(count1[i] == n)
				{
					++count;
				}
			}
			System.out.println(count);
			
			
			
			
			
			
		}		
}
}
