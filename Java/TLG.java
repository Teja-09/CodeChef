
import java.util.*;
import java.lang.Math;
class example {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int rounds = 0, lead,player;
		rounds = sc.nextInt();
		int[] a = new int[rounds];
		int[] b = new int[rounds];
		int sc1 = 0;
		int sc2 = 0;
		for(int i=0; i<rounds; i++)
		{
			 sc1 += sc.nextInt();
			 sc2 += sc.nextInt();
			if(sc1 > sc2)
			{
				player = 1;
				lead = sc1 - sc2;
				a[i] = player;
				b[i] = lead;
			}
			else
			{
				player = 2;
				lead = sc2 - sc1;
				a[i] = player;
				b[i] = lead;
			}
		}
		int max = b[0];
		int index =0 ;
		for(int i=1;i<rounds;i++)
		{
			if(b[i] > max)
			{
				max = b[i];
				index = i;
			}
		}
		System.out.println(a[index]+" "+max);
	}

}
