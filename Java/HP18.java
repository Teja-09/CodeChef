
import java.util.*;
import java.math.BigInteger;
 class interactiveProblen {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		while(t--!=0)
		{
			int  bob, alice,multiples=0,countm=0,countb=0,counta=0;
			int i,n;
			n = sc.nextInt();
			bob = sc.nextInt();
			alice = sc.nextInt();
			if(bob %alice ==0 || alice % bob == 0)
			{
				multiples=1;
			}
			int[] arr = new int[n];
			for(i=0;i<n;i++)
			{
			arr[i] = sc.nextInt();
			if(arr[i]%bob==0 && arr[i]%alice==0)
			{
				++countm;
				++counta;
				++countb;
			}else if(arr[i]%bob == 0)
			{
				++countb;
			}
			else if(arr[i]%alice == 0)
			{
				++counta;
			}
			}
//			System.out.println("multiples = "+multiples);
//			System.out.println("countm = "+countm);
//			System.out.println("countb = "+countb);
//			System.out.println("counta = "+counta);
			if(bob==alice)
			{
				if(countb>0)
				{
					System.out.println("BOB");	
				}
				else
				{
					System.out.println("ALICE");
				}
				continue;
			}
			if(multiples==1)
			{
				counta = counta - countm;
				if(counta >0 || countb == 0)
				{
					System.out.println("ALICE");
				}
				else
				{
					System.out.println("BOB");
				}
				continue;
			}
			else if(multiples==0)
			{
				countb = countb - countm;
				counta = counta - countm;
				if(countm>0)
				{
					++countb;
				}
				if(countb==0)
				{
					System.out.println("ALICE");
					continue;
				}
				if(countb>counta)
				{
					System.out.println("BOB");
				}
				else
				{
					System.out.println("ALICE");
				}
			}
		}
	}
}
