
import java.util.*;
class Ques1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int t,n,k,i,j,sum=0,max;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t--!=0)
		{
			k = sc.nextInt();
			n = sc.nextInt();
			int[] a = new int[k];
			int[] b = new int[k-n+1];
			for(i=0;i<k;i++)
			{
				a[i] = sc.nextInt();
			}
			for(i=0;i<(k-n+1);i++)
			{
				for(j=i;j<(i+n);j++)
				{
					sum = sum + a[j];
					//System.out.print(sum+" ");
				}
				//System.out.println();
				//System.out.print(sum+" ");
				b[i] = sum;
				sum=0;
			}
			//System.out.println();
			max = b[0];
			for(i=0;i<(k-n+1);i++)
			{
				if(max<b[i])
				{
					max = b[i];
				}
			}
			System.out.println(max);
		}
	}

}
